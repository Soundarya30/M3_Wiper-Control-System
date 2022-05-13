# Introduction
A wiper is used to clean car glass that has been exposed to dirt or rainwater. The wiper is normally attached to the front and rear sides so that the driver's view is not obstructed and they can see well to the front and back. Wipers play a vital part in the safety of drivers since wiper performance is closely linked to driving safety.The windshield will be dewy if it rains a lot and the car does not utilise wipers. The driver's visibility will be obstructed by visible dew on the glass. When a driver's view is obstructed, the likelihood of an accident increases dramatically. As a result, wipers are an essential automotive feature that must be present on all vehicles.
# Aim & Objective
* To prevent the accident during rain conditions
* To remove the raindrops, dust, oil or water from the windshield.
# Software Requirements
* STM32 CUBE IDE
# Components
* STM32F407VG Microcontroller Board
# Description
## STM32F407VG
The STM32F407 Kit makes it simple for users to construct audio-based applications by leveraging the high-performance STM32F407 microcontroller's capabilities. It includes an ST-LINK embedded debug tool, a digital microphone, an audio DAC with integrated class D speaker driver, LEDs, pushbuttons, and a USB OTG micro-AB connector. The STM32F4 DISCOVERY kit now includes Ethernet connectivity, an LCD display, and other features. The Arm cortex -M4 bit RISC processor, which works at up to 168 MHz, is at the heart of the STM32F405xx and STM32F407xx families.
## Features of STM32F407VG Microcontroller
* Flash memory of up to 1 megabyte
* SRAM with up to 192+4 Kbytes, including 64 Kbytes of CCM (Core Coupled Memory) data RAM.
* Compact flash SRAM, PSRAM, NOR, and NAND memories are supported by this flexible static memory controller.
# Working Principle
At first the Red LED is ON, if the user button is pressed and held for 2 secs. Wiper is OFF: On press of the user input, Blue, Green and Orange LEDs come ON one at a time with the set frequency, The frequency changes on every alternate key press, 3 frequency levels with 1, 4 and 8 Hz. Wiper is ON: The LED glow pattern stops on the 4th press; the wiper action starts next press onwards as mentioned in step 2.
