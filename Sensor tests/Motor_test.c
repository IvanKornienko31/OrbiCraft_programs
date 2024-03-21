/*
  РУС: Это программа тестирования двигателя-маховика. Двигатель-маховик содержится в конструкторе "ОрбиКрафт".
  ENG: This is a flywheel engine (in the documentation reaction wheel) testing program. The flywheel engine contains in "OrbiCraft" construction set.
*/

#include <stdio.h>
#include <stdint.h>
#include "libschsat.h"      // This is the OrbiCraft functions file. It is contained in this repository separately from the directories.

const uint16_t motor_number = 1;
int16_t motor_speed;
int motor_state[2];         // This array will contain engine states when we send the required speed to the engine (motor_state[0]) and when we request the engine speed (motor_state[1]).

void control()              // This is the main function of the program.
{
  motor_turn_on(motor_number);
  puts("Engine was turned on.");
  Sleep(1);

  // NOTICE: a minus in the engine speed value means that the satellite will rotate in the other direction.
  for (int16_t speed = -3000; speed <= 3000; speed += 500)   // For every iteration of the loop we increase the value of speed. 
  {
    motor_state[0] = motor_set_speed(motor_number, speed, &motor_speed);
    
    if (!motor_state[0])    // If the engine has received a new speed successfully.
    {
      puts("Engaging the engine!");
      Sleep(5);
      motor_state[1] = motor_request_speed(motor_number, &motor_speed);

      if (!motor_state[1])  // If the engine speed data has been received successfully.
      {
        printf("The engine speed is %d.", motor_speed);
      }
      else                  // If an engine speed reading error has occurred.
      {
        puts("Engine speed reading error!");
      }

    }
    else if (motor_state[0] == LSS_ERROR) // If error occurred on the bus.
    {
      puts("Error! Check your connection of engine!");
      break;              // There is no reason for further execution because in further iterations we'll get the same error again.
    }
    else if (motor_state[0] == LSS_BREAK) // If engine wasn't connected to the Power System.
    {
      puts("Error! Connect the engine to the Power System!");
      break;              // There is no reason for further execution because in further iterations we'll get the same error again.
    }

    Sleep(1);
  }

  motor_set_speed(motor_number, 0, &motor_speed); // If you don't reset the engine speed, the engine will continue to work even after turning off.
  Sleep(1);
  motor_turn_off(motor_number);
  puts("Engine was turned off.");
}