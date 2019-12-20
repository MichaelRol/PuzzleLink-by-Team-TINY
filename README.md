# PuzzleLink by Team TINY
Repository to store Team TINY's software and design files for the PuzzleLink interactive device created for the University of Bristol Masters course COMSM0009, Interactive Devices.

## Overview

Despite a large number of tools and devices being available for carious ways of helping those with autism, there is a distinct lack of option on devices for physical interventions. We aimed to provide a simple, portable and low-sensory option for use in scenarios ranging from therapy to entertainment. 

PuzzleLink provides simple, intuitive interaction pattern for intended users - autistic children - to easily engage with. Capacitive buttons light up in a compact puzzle shape with a transparent acrylic lid and wirelessly activate a different piece on touch. The pieces are light, durable can be put together in any order or separated and attached to surfaces with the built-in suction cups for more physical movement during the game. 

When connected together the puzzle pieces are designed to help calm the child when in an overstimulating environment by allowing them to focus on a simple repetitive task. When the pieces are separated the device is meant to help the children engage in physical activity. 

## Reproduction

The system is designed to be used with one Adafruit Feather nRF52832 Bluefruit LE, and three Adafruit Feather 32u4 Bluefruit LE, all connected to a [VCC CTH Series Capacitive Touch Sensor LED Display](https://github.com/MichaelRol/PuzzleLink-by-Team-TINY/blob/master/Documents/CapacitiveSwitchTechSpec.pdf). 

The first pin of each switch should be connected to a high pin on each board, the fourth pin should be connected to ground. The second pin is the output from the capacitive switch and should be connected to a GPIO pin, if you are using the code in this repository unedited, connect it to pin 15 of the nRF52832 board and pin 11 for the 32uF board. The third pin of the capacitive switches controls the internal LED and this should be connected to pin 16 on the nRF52832 board and pin 12 on the 32uF board.

Instructions of how to setup the [Arduino IDE](https://www.arduino.cc/en/main/software) to upload to these boards can be found [here](https://learn.adafruit.com/bluefruit-nrf52-feather-learning-guide/arduino-bsp-setup) for the nRF52832 and [here](https://learn.adafruit.com/adafruit-feather-32u4-bluefruit-le/setup) for the 32uF.

Once you have successfully installed the Arduino IDE you must now upload the code to each of the board. The Arduino project found under `Controller/central_bleuart_multi/` should be uploaded to the central nRF52832 and the project found under `Peripheral/bleuart_cmdmode/` should be uploaded to the peripheral 32uF boards. When uploading to the different model of boards remember to change the board which Arduino is compiling for under Tools > Board > [Name of Board].

To power the boards we recommend you use a power supply unit like [this](https://www.adafruit.com/product/4191). A lithium-ion polymer battery would also work. They can also be powered by micro USB, from the device you are using to upload the code to the board, for testing purposes.

For the puzzle piece casing, under the folder [`LaserCuttingAnd3dPrinting/`](https://github.com/MichaelRol/PuzzleLink-by-Team-TINY/tree/master/LaserCuttingAnd3dPrinting) there is an STL file that can be used to recreate the main casing and an AutoCAD DXF file to laser cut the lids for the cases. These can be attached together using velcro tape. Suction cups with an M4 Screw (7mm-8mm) should be used to attach the puzzle pieces to walls.


## Members

- Michael Rollins
- Joe Matthews
- Miklós Borsi
- Callum Fawcett
- Shona Allman
