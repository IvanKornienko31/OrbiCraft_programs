/*
  РУС: Это программа тестирования магнитометра. Магнитометр содержится в конструкторе "ОрбиКрафт".
  ENG: This is an magnetometer testing program. The magnetometer contains in "OrbiCraft" construction set.
*/

#include <stdio.h>
#include <stdint.h>
#include "libschsat.h"    // This is the OrbiCraft functions file. It is contained in this repository separately from the directories.

const uint16_t magn_number = 1;
int16_t magn_data[4];     // This array will contain state of magnetometer (in the magn_data[0]) and data from magnetometer (in the other remaining elements of array).

void control()            // This is the main function in the program
{
  magnetometer_turn_on(magn_number);
  puts("Magnetometer was turned on.");
  Sleep(1);
  for (int i = 1; i < 11; i++)
  {
    magn_data[0] = magnetometer_request_raw(magn_number, &magn_data[1], &magn_data[2], &magn_data[3]);
    if (!magn_data[0])    // If the data from the magnetometer was received successfully
    {
      puts("The data was received successfully!");
      printf("Data from magnetometer #%d: x = %d, y = %d, z = %d.\n", i, magn_data[1], magn_data[2], magn_data[3]);
    }
    else if (magn_data[0] == LSS_ERROR)   // If errors occurred on the bus
    {
      puts("Error! Check your connection!");
      break;              // There is no reason for further execution because in further iterations we'll get the same error again
    }
    else if (magn_data[0] == LSS_BREAK)   // If magnetometer wasn't connected to the Power System.
    {
      puts("Error! Connect the magnetometer to the Power System!");
      break;              // There is no reason for further execution because in further iterations we'll get the same error again
    }
    Sleep(1);
  }
  magnetometer_turn_off(magn_number);
  puts("Magnetometer was turned off.");
}