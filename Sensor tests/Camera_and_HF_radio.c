/*
  РУС: Это программа тестирования камеры и высокочастотного (ВЧ) передатчика. Камера и ВЧ передатчик содержатся в конструкторе "ОрбиКрафт".
  ENG: This is a program for testing camera and high frequency (HF) transmitter. The camera and the HF transmitter are contained in "OrbiCraft" construction set.
*/

#include <stdio.h>
#include <stdint.h>
#include "libschsat.h"    // This is the OrbiCraft functions file. It is contained in this repository separately from the directories.

const uint16_t transmitter_number = 1;
int state[2];             // This array will contain state of camera (in the state[0]) and state of transmitter (in the state[1]).

void turn_on_all()        // This function will run all the necessary subsystems.
{
  camera_turn_on();       // You don't need a number to turn on the camera.
  puts("Camera was turned on.");
  Sleep(1);
  transmitter_turn_on(transmitter_number);
  puts("HF transmitter was turned on.");
  Sleep(1);
}

void turn_off_all()       // This function will turn off all working subsystems.
{
  transmitter_turn_off(transmitter_number);
  puts("HF transmitter was turned off.");
  camera_turn_off();      // You don't need a number to turn off the camera.
  puts("Camera was turned off.");
}

void control()            // This is the main function of the program.
{
  turn_on_all();

  for (int i = 1; i < 16; i++)
  {
    state[0] = camera_take_photo(i);

    if (!state[0])        // If the camera has taken a photo successfully.
    {
      printf("Transmit photo №%d...", i);
      state[1] = transmitter_transmit_photo(transmitter_number, i);

      if (!state[1])      // If the transmitter has transmitted the photo successfully.
      {
        puts("The photo was transmitted successfully!");
      }
      else if (state[1] == LSS_ERROR)   // If error occurred on the bus.
      {
        puts("Error! Check your connection of transmitter!");
        break;            // There is no reason for further execution because in further iterations we'll get the same error again.
      }
      else if (state[1] == LSS_BREAK)   // If transmitter wasn't connected to the Power System.
      {
        puts("Error! Connect the transmitter to the Power System!");
        break;            // There is no reason for further execution because in further iterations we'll get the same error again.
      }

    }
    else if (state[0] == LSS_ERROR)     // If error occurred on the bus.
    {
      puts("Error! Check your connection of camera!");
      break;              // There is no reason for further execution because in further iterations we'll get the same error again.
    }
    else if (state[0] == LSS_BREAK)     // If camera wasn't connected to the Power System.
    {
      puts("Error! Connect the camera to the Power System!");
      break;              // There is no reason for further execution because in further iterations we'll get the same error again.
    }

    Sleep(1);
  }
  // All received photos will appear in the "FTP" folder that is contained in the folder with MCC program (GroundControl.exe).
  // You can download MCC from the OrbiCraft documentation in the "Prerequisite Software" ("Программное обеспечение") section.

  turn_off_all();
}