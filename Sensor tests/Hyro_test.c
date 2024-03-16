/*
  RUS: Это программа тестирования датчика угловой скорости (ДУС). ДУС содержится в составе конструктора "ОрбиКрафт".
  ENG: This is an angular velosity sensor (AVS) testing programm. The AVS contains in "OrbiCraft" construction set.
*/

#include <stdio.h>
#include <stdint.h>
#include "libschsat.h"    // This is the OrbiCraft functions file. It is contained in this repository separately from the directories.

uint16_t hyro_number = 1;
int16_t hyro_state[4];    // This array will contain state of AVS (in the hyro_state[0]) and data from AVS (in the other remaining elements of array).

void control()
{
  hyro_turn_on(hyro_number);
  puts("Angular velosity sensor (AVS) was turned on.");
  Sleep(1);
  for (int i = 1; i < 11; i++)
  {
    hyro_state[0] = hyro_request_raw(hyro_number, &hyro_state[1], &hyro_state[2], &hyro_state[3]);
    if (!hyro_state[0])   // If the data from the AVS was received successfully
    {
      puts("The data was received successfully!");
      printf("Data from AVS #%d: x = %d, y = %d, z = %d\n", i, hyro_state[1], hyro_state[2], hyro_state[3]);
    }
    else if (hyro_state[0] == LSS_ERROR)  // If errors occurred on the bus
    {
      puts("Error! Check your connection!");
      break;              // There is no reason for further execution because in further iterations we'll get the same error again
    }
    else if (hyro_state[0] == LSS_BREAK)  // If AVS wasn't connected to the Power System.
    {
      puts("Error! Connect the AVS to Power System!");
      break;              // There is no reason for further execution because in further iterations we'll get the same error again
    }
  }
  hyro_turn_off(hyro_number);
  puts("Angular velosity sensor (AVS) was turned on.");
  Sleep(1);
}