## 1. ABSTRACT

###### A. Importance Of Application

We aim to design a device that will remotely control other devices (eg. bulb, fan, etc.) using a wireless connection. It will be helpful for paraplegics and other disabled people who can switch off or switch on their home equipment using their cell phones and a wifi network.

###### B. ExistingMethods
Companies like Alpon White, Leviton, Insteon and others have designed smart home remote controllers, that work for various devices. In India companies like Z- Wave, Klickh have also designed solutions that remotely control devices.

###### C. Drawbacks Of Existing System
These devices retail for $50-200 at minimum, and may be quite expensive for disabled people who have the burden of paying for treatments, medication, etc. Also, these systems usually come as a set that has to be installed separately since they cannot be integrated into the existing home appliance system.

###### D. ProposedSystem
We are aiming at creating a device with an Arduino Chip, which will be able to decode a message sent using wifi network (eg. sending „ON‟ message for a bulb using a cellphone), and process it. After processing, the Arduino chip will then send a signal to perform wanted action on the device. This system will be much cheaper than buying and installing an entire system from companies listed above. All one has to do is install an application that uses Telnet on one‟s cell phone, get a wifi connection and use this device.

###### E. ImplementationIssues

-Firmware : ESP8266 comes with firmware 0.8.5 which is unstable as the module randomly restarts. So, the firmware was updated using ESP8266 Flasher tool. Firmwares are downloaded as .bin (binary) files and downloaded to the module using the tool. The most stable firmware found is 0.9.2. Once flashed the module works fine without any issues.

-Serial communication : As Arduino UNO has one hardware UART, two digital pins are emulated as UART pins and Software Serial library is used. The limitation of Software Serial is that its baudrate is restricted to not more than 57400. So ESP8266 module‟s UART is programmed to have a baudrate of 9600 using AT commands. Hence, now both UARTs work at 9600 baudrate.

###### F. Results

This project will create a device controller that can remotely switch on or off devices by using a wireless network.

## 2. OBJECTIVES

###### a. Objective On Study

1. To use Arduino microcontroller, to remotely switch a devicen or off, with the help f a wireless
2. To help physically disabled people, paraplegics, etc. to control theirrm‟sdevices.

###### b. Objectives on application domainknowledge

1. To create a device with Arduino , which will be able to decode a message sent using wifi network(eg.sending "ON‟message for a bulb using a cellphone), and process it. After processing, the Arduino chip will then send a signal to perform wanted action on the
2. Switch device on/off
3. To check for validation by usingLED

## 3. REQUIREMENTS
**a.** Hardware
| **S.**** No **|** Item **|** Model **|** Vendor **|** Price **|** Description **|** Reference** |
| --- | --- | --- | --- | --- | --- | --- |
| 1. | Wifi module | ESP826 6 | Esppress if | INR 320 | Acts as server or client | https://www.sparkfun.com/products/13678 |
| 2. | Level Shifter | BOB- 12009 | Sparkfun | INR 200 | Converts 5V to3.3 V | https://www.sp arkfun.com/products/12009 |
| 3. | Arduino | UNO R3 | Arduino | INR 600 | Microcontrollerused for decision making. | https://www.arduino.cc/ArduinoBoardUno |
| 4. | FTDIModule | FT232 | Ska.india | INR 400 | TTL to USBconverter toconnect Arduino to PC | http://www.ftd ichip.com/Products |
| 5. | Bread Board | - | Balaji | INR 80 | Construction base for electronicsprototyping | https://en.wiki pedia.org/wiki/Breadboard |

**b.** Software

| **S.** No | Item | Version | Vendor | Description | Reference |
| --- | --- | --- | --- | --- | --- |
| 1. | Arduino IDE | 1.6.5 | Arduino | Helps to writecode and upload it to the board. | https://www.arduino.cc/en/Main/So ftware |
| 2. | TCP Client | 1.1 | Sollae Systems | Allows data transmission using TCP/IPcommunication. | https://play.googl e.com/store/apps/ details?id=com.sollae.eztcpclient |

