/*
  RUS: Это программа тестирования двигателя-маховика. Двигатель маховик содержится в конструкторе "ОрбиКрафт".
  ENG: This is a flywheel engine (in documentation reaction wheel) testing program. The flywheel engine contains in "OrbiCraft" construction set.
*/

#include <stdio.h>
#include <stdint.h>
#include "libschsat.h"    // This is the OrbiCraft functions file. It is contained in this repository separately from the directories.

const uint16_t motor_number = 1;
int16_t motor_speed;

void control()            // This is the main function in program
{
  motor_turn_on(motor_number);
  puts("Motor was turned on.");
  Sleep(1);
  for (speed = -3000; speed <= 3000; speed += 500)          // For every iteration of the loop we increase speed.
  {
    if (!motor_set_speed(motor_number, speed, &motor_speed))  // If the engine has received a new speed successfully.
    {
      puts("Engaging the flywheel engine!");
      Sleep(5);
      if (!motor_request_speed(motor_number, &motor_speed))   // If the engine speed data has been received successfully.
      {
        printf("The motor speed is %d", motor_speed);
      }
    }
    else if (motor_set_speed(motor_number, speed, &motor_speed) == LSS_ERROR) // If errors occurred on the bus
    {
      puts("Error! Check your connection!");
      break;              // There is no reason for further execution because in further iterations we'll get the same error again
    }
    else if (motor_set_speed(motor_number, speed, &motor_speed) == LSS_BREAK) // If AVS wasn't connected to the Power System.
    {
      puts("Error! Connect the AVS to Power System!");
      break;              // There is no reason for further execution because in further iterations we'll get the same error again
    }
    Sleep(1);
  }
  motor_set_speed(motor_number, 0, &motor_speed); // If you don't reset the engine speed, the engine will continue to work even after turning off.
  Sleep(1);
  motor_turn_off(motor_number);
  puts("Motor was turned off.");
}
