/*
  РУС: Это программа тестирования 1-го солнечного датчика. Солнечные датчики содержатся в конструкторе "ОрбиКрафт".
  ENG: This is a single solar sensor testing program. The solar sensors are contained in "OrbiCraft" construction set.
*/

#include <stdio.h>
#include <stdint.h>
#include "libschsat.h"                  // This is the OrbiCraft functions file. It is contained in this repository separately from the directories.

const uint16_t sun_sensor_number = 1;   // You can use numbers from 1 to 4.
uint16_t sun_sensor_data[3];            // This array will contain state of solar sensor (in the sun_sensor_data[0]) and data from solar sensor (in the other remaining elements of array).

void control()                          // This is the main function of the program.
{
  sun_sensor_turn_on(sun_sensor_number);
  puts("Solar sensor №1 was turned on.");
  Sleep(1);
  
  for (int i = 1; i < 11; i++)
  {
    sun_sensor_data[0] = sun_sensor_request_raw(sun_sensor_number, &sun_sensor_data[1], &sun_sensor_data[2]);

    if (!sun_sensor_data[0])            // If the data from the solar sensor was received successfully.
    {
      puts("The data was received successfully!");
      printf("Data from solar sensor №1 #%d: value1 = %d, value2 = %d.\n", i, sun_sensor_data[1], sun_sensor_data[2]);
    }
    else if (sun_sensor_data[0] == LSS_ERROR)   // If error occurred on the bus.
    {
      puts("Error! Check your connection of solar sensor!");
      break;            // There is no reason for further execution because in further iterations we'll get the same error again.
    }
    else if (sun_sensor_data[0] == LSS_BREAK)   // If solar sensor wasn't connected to the Power System.
    {
      puts("Error! Connect the solar sensor №1 to the Power System!");
      break;            // There is no reason for further execution because in further iterations we'll get the same error again.
    }

    Sleep(1);
  }

  sun_sensor_turn_off(sun_sensor_number);
  puts("Solar sensor №1 was turned off.");
}