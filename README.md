# cs207Projectsummer2020
Introduction:

As a rapid growth of automobile, more and more people preferred own car and make their life more comfortable and convenient. However, this growth of industries generates hurdles not only in human life but also adverse impact on environment. Out of all, available space for parking is the biggest issue for today’s world. Besides this, efficient car parking system play a decisive role in metropolitan traffic system, and its lack planning in system create traffic congestion, accidents and environmental pollution. Although efficient parking system can improve urban transportation and environment issues, besides the quality of life for individuals. As an alternative solution smart parking management is a smart and effective solution to overcome this problem. According to the research done by IBM, 30 percent of traffic is caused due to the driver searching for the secure car parking spot . This problem is also leading to burning more fuel due to traffic caused by the driver in searching for a proper place. 

In this project we work with the Arduino Uno kit and ARDUINO IDE. Arduino is an open source life. So, we have great support for the development environment with Arduino kit. To develop a simulated parking lot system that includes divided parking places, automatic lifting bar, indicator traffic lights and a display to show available parking spots this project uses Arduino uno, Servo motor, buttons, LCD display and RGB LED module and a couple of resistors.

Project Description:

The objective of this to achieve a smart solution for parking. And this will be done with the help of Arduino Kit. There are a total number of 7 parking spots available. If the parking spot is empty or the number of an empty spot is less than five then the system will display the “Welcome” message on LCD. If there is no spot available, then on LCD “Please come later” message will display. If the driver wants to enter the parking, then he/she must press the enter button. If the parking spot is available, then the barrier will open, and the LED status light will turn GREEN from RED. And with signal turning barrier will open and the counter on the LCD will be reduced by one. Similarly, If the driver wants to exit the parking spot then he/she must need to press the exit button, The LED signal will turn RED to GREEN and the counter on the display will be increased by one. One important thing that we must make sure that, if the parking is full then also if the driver presses the enter button, the barrier should not open. 

Components Description:

1.	Arduino Uno:
Arduino Uno is an open-source microcontroller that is based on ATmega328p. It has a total of 14 pins. From these 6 pins can be used as an analog input. And we can interface various components to this microcontroller. And some other specifications like 16MHz ceramic resonator, USB connection and power jack. Moreover, we can also connect it to the 9V power supply and through USB cable. We can connect the Arduino using USB cable to the computer and export the script or programming file to the controller to run the program [.


2.	Servo Motor:
Servo motor is an electric motor that which have integrated gears and shafts that we can control precisely using a microcontroller unit. We can use the shafts of the servo motor as a barrier in this project. We can rotate the shaft from 0 degrees to 180 degrees and at various shifts. Servo motors have a total of 3 wires. The red wire is power supply wire so, it should be connected to a 5V pin on the Arduino board. Black or Brown wire is usually used for the ground so, that wire should be connected to the GND pin of the Arduino board. And for the signal purpose, we use the third wire which is typical of yellow, orange, or white colour. This motor also works on the principle of PWM (pulse width modulation) .

 
3.	LCD Display:
Liquid Crystal Display (LCD) is a 16x2 digital display which has 16 columns and 2 rows. Using this component, we can display strings or numbers. For our project, we use this display to show the message on LCD. If the parking space is available, then it will display the ‘Welcome’ message and if the parking is full then it will display ‘Please come later’ message. We can also adjust the brightness of the LCD display using a potentiometer meter.
 

4.	Resistor:
 A resistor is used to resist the flow of current in the circuit. In our project, we use resistors in series with LED to control the flow of current. The unit for the resistor is the ohm.
 

5.	RGB LED:
RGB LED is a combination of three colours in one LED i.e. Red, Green and Blue. In our project, we use this LED lights to give a signal to the driver. We are using only Red and Green colour to give signals while entering and exiting from the parking spot.
 
6.	Jumper Wires and Push Button:
Jumper wires a useful component to connect the circuit. These wires have connector pins at the end. These wires are normally used with the breadboard so we can change the connection easily. And Pushbuttons are simple buttons, we use this to get the signal from the driver as an entry and exit button.
   

7.	Breadboard:
 A breadboard is the most basic piece when it comes to building a prototype for any circuit. It is also referred as a solderless board because it requires no soldering to connect the wires.
•	ARDUINO IDE is needed to communicate to the Arduino board and perform operations.

Circuit Diagram:


![image](https://user-images.githubusercontent.com/68759899/90946393-8cf56900-e3e9-11ea-9127-b895dea44430.png)


Test Procedure:
 
Assuming the parking lot is empty, a car arrives to be parked noticing space available, driver presses entry button and light turns green after barrier opens, and number of available spaces decreases by one. After that one more car enter in parking lot with same process. Lastly, if parking lot gets full. So, even if driver push entry button they cannot enter, and light stays red. To exit parking lot, driver must press exit button and when LED turns green he can exit and the number of slot will be increased with 1 slot on the LCD display.

![image](https://user-images.githubusercontent.com/68759899/90946421-d34ac800-e3e9-11ea-9818-2cf14437b914.png)

                           



