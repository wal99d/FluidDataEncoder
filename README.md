# One of my experiments to transmit 1-Byte of DATA using Water Pump and Flowmeter

##Tools Used:
1. ARDUINO UNO
2. STM32F4 Discoveryboard
3. 6V DC Water Pump
4. Water Flow Sensor Flowmeter Hall Flow Sensor Water control 1-30L/min
5. UART Cable
6. MOSFET to control 9v DC switch for Water Pump
7. DIODE
8. Switch Button

##Circuit diagrams:
###Transmitter Circuit:
![alt tag](http://i.imgur.com/NUUahlb.png)

###Reciever Circuit:
![alt tag](http://i.imgur.com/JzvgO2Z.png)

##HOW-TO:
*After you've assembled the exact circuits for both Transmitter and receiver, you need to compile the ARDUINO schtech, you may modifiy the code to suit your needs.*
```
for example to send letter "A" you need to convert it into its binary represntation as 01000001, and in order to do that you have to use the funcation named "void generateBitEncoding(int state)" to encode the bits accordingly.
```
*From STM32F4 Discovery Board you need to connect the UART Cable to your LAPTOP and use your preffered serial terminal app with speed of 2400 and watch the DATA flow to your lovely terminal :)*


##How Encoding Works:

##TODOS:
*Dataflow control mechanisim*

-
***Posted in [HackADay.io](https://hackaday.io/project/19265-fluid-data-encoder-v1)***
