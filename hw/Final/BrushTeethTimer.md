# Brush Teeth Timer

  This project is to create a Brush Teeth Timer with LEDs. 


## Why This Project
  The purpose of this project is to create a Brush Teeth Timer for users to make sure they spend enough time brushing their teeth every day. 
  The users can simply click the button each time before starting brushing the teeth, and this Brush Teeth Timer would give the user a total 3 minutes for all the steps of brushing the teeth. 


## Equipment
Tinkercad - Circuits
 * Arduino Uno
 * 4 LEDs
 * a button

 
Tinkercad - 3D Design
 * a box - base
 * a cylinder - clock face
 * a ring - clock case
 * a round roof - clock face
 * 4 cylinders - clock hands
 * 3 cones - decoration(each represents 1/3 for 2 minutes)
 * 3 text: Brush Teeth Timer, START, STOP
 

## Input and Output
* Input: button
* Output: LEDs


## Code Plan
* When clicking the button at the top of the clock, the timer would start counting

* In the meantime, the LED near the "START" text will turn on

* After 30 seconds, which is for the user to put toothpaste to the toothbrush, the second LED will turn on

* The next 2 minutes is for the user to brush his/her teeth

* After that, the third LED will turn on

* Then, the last 30 seconds is for mouth washing

* After that, the last LED near the "STOP" text will turn on


* [Code](/hw/Final/final.ino)


## Physical Interaction
![Breadboard](/hw/Final/videos/breadboard.png)
![Interactiongif](/hw/Final/videos/)
[Full Light Sequence Video](/hw/Final/videos/)


## 3D Designed Part
* Project Sketch: 
  ![Toy Sketch](/hw/Final/videos/)
* 3D Brush Teeth Timer 
  ![3D Part](/hw/Final/videos/)
  

