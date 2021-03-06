## Automated Car Parking system
 # Description
 Automated Car Parking system is capable of finding empty slots that are available for parking automatically. iF the slot is empty in the automated Car
 parking the new vehicles are allowed to enter the parking else the entrance is blocked by using servo in case no empty slot is found by system.The vsitors
 availability of the free space outside parking on 16*2 LCD.

 ## Identyfying Features

 * Shows Availiablity of empty slots that are available for parking automatically.
 * Block the entry by servo motor if space is not available.
 * Display of slot is full if no space for parking.

 ## Components Required
 * Atmega328
 * LCD display
 * Servo Motor
 * IR sensor
 * Switch
 * Buzzer
 * Power Supply
 * Resistor

 # Atmega328
 Atmega328 microcontroller is 8-bit AVR RISC -based microcontroller, 32KB Flash memory, 2KB SRAM, 23 GPIO lines,
 inernal and external interrupt, 10-bit A/D converter, serial programmable USART,The device operates between 1.8-5.5 volts.

# LCD Display
LCD stands for Liquid Crystal Display , It includes 2 rows where each produce 16-characters,opearting voltage of LCD is 4.7-5.3V.
Display can work in 2 -modes like 4 and 8 bit.

# Servo Motor
It is a motor that can rotate in great precision.It is a closed loop system where it uses a positive feedback system to control motion and 
final position of the shaft.The device is controlled by a signal generated by comparing output signal and reference input signal.

# IR sensor
It is used to detect the obstacle in front of the signal.It is digital output.

# Buzzer
It is a audio signlling device. It converts audio signal into sound signals.

# Switch 
It is a device used for making and breaking of electric current in a circuit.


## SWOT Analysis
![swot](https://user-images.githubusercontent.com/89115879/155755316-973a815e-50cb-4890-b48c-fbec72ecf9fb.PNG)
=======
## 5W and 1H
![5w1h](https://user-images.githubusercontent.com/89115879/155740904-7628a478-9fdf-4e05-87de-84852140f48d.PNG)

## High level Requirement

|ID | HIGH LEVEL REQUIREMENT|
|---|---|
|HLR1|LCD to display the parking slot and its availability|
|HLR2|Detection of car through sensor|
|HLR3|Barrier for vehicle enetry using servo|

## LOW level Requirement
|ID|LOW LEVEL REQUIREMENT FOR HLR1| |ID|LOW LEVEL REQUIREMENT FOR HLR2|
|---|---|-|---|---|
|LLR1.1|LCD should display the parking system| |LLR2.1|Sensor should detect car in entrance|
|LLR1.2|LCD Should display parking full if no space| |LLR2.2|Sensor should detect the car during exit|
|LLR1.3|LCD should display slot empty| | | |
|ID|LOW LEVEL REQUIREMNT FOR HLR3| | | |
|LLR3.1|Servo rotate 90 degree when car slot available for entry| | | |
|LLR3.2|Servo will rotate when vehicle want to exit|| | |
|LLR3.3|Servo will not rotate if space is full| | | |