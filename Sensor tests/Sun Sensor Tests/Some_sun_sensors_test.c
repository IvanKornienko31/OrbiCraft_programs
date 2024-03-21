/*
  РУС: Это программа тестирования нескольких солнечных датчиков. Солнечные датчики содержатся в конструкторе "ОрбиКрафт".
  ENG: This is a program for testing several solar sensors. The solar sensors are contained in "OrbiCraft" construction set.
*/

#include <stdio.h>
#include <stdint.h>
#include "libschsat.h"                  // This is the OrbiCraft functions file. It is contained in this repository separately from the directories.

uint16_t sun_sensor_number;             // You can use numbers from 1 to 4.
uint16_t sun_sensor_data[3];            // This array will contain state of solar sensor (in the sun_sensor_data[0]) and data from solar sensor (in the other remaining elements of array).

void control()                          // This is the main function of the program.
{
  for (sun_sensor_number = 1; sun_sensor_number <= 4; sun_sensor_number++)    // Turning on every solar sensor (you can change the number in the loop condition).
  {
    sun_sensor_turn_on(sun_sensor_number);
    printf("Solar sensor №%d was turned on.\n", sun_sensor_number);
    Sleep(1);
  }

  for (int i = 1; i < 11; i++)
  {
    
    for (sun_sensor_number = 1; sun_sensor_number <= 4; sun_sensor_number++)  // Requesting data from each solar sensor (you can change the number in the loop condition).
    {
      sun_sensor_data[0] = sun_sensor_request_raw(sun_sensor_number, &sun_sensor_data[1], &sun_sensor_data[2]);

      if (!sun_sensor_data[0])            // If the data from the solar sensor was received successfully.
      {
        puts("The data was received successfully!");
        printf("Data from solar sensor №%d #%d: value1 = %d, value2 = %d.\n", sun_sensor_number, i, sun_sensor_data[1], sun_sensor_data[2]);
      }
      else if (sun_sensor_data[0] == LSS_ERROR)   // If error occurred on the bus.
      {
        puts("Error! Check your connection of the solar sensors!");
        break;            // There is no reason for further execution because in further iterations we'll get the same error again.
      }
      else if (sun_sensor_data[0] == LSS_BREAK)   // If one of several solar sensors wasn't connected to the Power System.
      {
        printf("Error! Connect the solar sensor №%d to the Power System!\n", sun_sensor_number);
        break;            // There is no reason for further execution because in further iterations we'll get the same error again.
      }

      mSleep(250);        // This is a delay in milliseconds.
    }

  }

  for (sun_sensor_number = 1; sun_sensor_number <= 4; sun_sensor_number++)    // Turning off every solar sensor (you can change the number in the loop condition).
  {
    sun_sensor_turn_off(sun_sensor_number);
    printf("Solar sensor №%d was turned off.", sun_sensor_number);
    Sleep(1);
  }
}