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
# 4W'S and 1H
## Where
* The user can utilise this in their daily lives to measure their safety and improve their life outcomes when travelling.
## Why
* To keep the windscreen clean enough to maintain clear view at all times.
## When
* The primary goal is to keep the windshield clear of rain, grease, dust, and snow so that we can use wipers whenever these objects hit the windshield.
## What
* Wiper control system is used to clean the dust, rain, grease from the windshield.
## How
* A worn gear is connected to an electric motor that drives the wiper system. It sends the necessary force to a long rod, which moves the wiper arms. The worm gear can create the force needed to move the wipers at their maximum speed.
# SWOT Analysis
![swot](https://encrypted-tbn0.gstatic.com/images?q=tbn:ANd9GcQBXtP7SfAWV6-y86dDEjFACwRXrHjVeEMOUw&usqp=CAU)
## Strength
* Increases the safety of the passengers.
* Avoid accidents that happens during rainy seasons.
* Clean the dust, rain drops from the windshield.
## Weakness
* Has to maintain a lot.
* May not clean the dust properly from the windshield. 
## Opportunities
* System costs may be reduced as technology matures.
* High potential.
## Threats
* User acceptability in terms of buy intent and post-purchase activation frequency.
# Detail Requirements
## High Level Requirements
| ID | Description | Status |
|--|--|--|
| HLR-1 |Ignition Key Position is at ACCESSORY| Implemented |
| HLR-2 |It will turn on the Wiper System| Implemented |
| HLR-3 |It will turn off the wiper system|  Implemented |
| HLR-4 |Ignition Key Position is at LOCK|  Implemented |

## Low Level Requirements 

| ID | Description |  Status |
|--|--|--|
| LLR-1 |User able to read output data |  Implemented |
| LLR-2 | Displays output data without any errors| Implemented |


