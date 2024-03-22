/*
  РУС: Это программа тестирования ультракоротковолнового (УКВ) передатчика. УКВ передатчик содержится в конструкторе "ОрбиКрафт".
  ENG: This is an ultra high frequency (UHF) transceiver testing program. The UHF transceiver contains in "OrbiCraft" construction set.
*/

#include <stdio.h>
#include <stdint.h>
#include "libschsat.h"                    // This is the OrbiCraft functions file. It is contained in this repository separately from the directories.

// TX means "transmit" or "transmitting transceiver", RX means "receive" or "receiveing transceiver". The transmitting UHF transceiver is attached to the satellite.
const uint16_t tx_number = 2, rx_number = 1;

int UHF_state;                            // This variable will contain the state of UHF transceiver.
const char message[] = "Hello, World!";   // This is the message being transmitted. It must be constant.

void control()
{
  transceiver_turn_on(tx_number);         // We use tx_number in this function because only the transmitting transceiver should be connected to the satellite.
  puts("UHF transceiver was turned on.");
  Sleep(1);

  // This function simply sends a null message to all subsystems on the bus to prepare them to receive data.
  bus_setup();

  puts("Transmitting the message!");
  UHF_state = transceiver_send(tx_number, rx_number, (uint8_t *) message, sizeof(message));
  // sizeof(message) - length of the message.
  // (uint8_t) message - the message you want to sent. It must be a pointer of const uint8_t type or be changed to one. 

  if (!UHF_state)                         // If the message was successfully sent.
  {
    puts("The message was sent successfully! Check the mission control center (MCC).");
  }
  else if (UHF_state == LSS_ERROR)        // If error occurred on the bus.
  {
    puts("Error! Check your connection of UHF transceiver!");
  }
  else if (UHF_state == LSS_BREAK)        // If UHF transceiver wasn't connected to the Power System.
  {
    puts("Error! Connect the UHF transceiver to the Power System!");
  }

  transceiver_turn_off(tx_number);        // We also use tx_number in this function for the same reason.
  puts("UHF transceiver was turned off.");
}