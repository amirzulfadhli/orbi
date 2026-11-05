# ORBI requirements


## ORBI System Requirements

## 1. Project Overview

ORBI  is a robot helper than combine from NVIDIA microduck and reachy mini. It helps with people daily routine by restoring and calculate what information a person tell them.

## 2. Problem Statement

Remembering our daily schedule really hard if has a pack timeline and thins to do. ORBI helps resolve this issue with integrated machine learning module that predict and decide what things need to work with first. 

## 3. Project Objectives

1. To design and develop a mobile robotic rover capable of moving and navigating through an 
   indoor environment using microcontroller based control system.
2. To implement enviromental sensing and obstacle avoidance using sensors that allow the
   rover to detect nearby objects and respond safely.
3. To develop an autonomous navigation system that enables ORBI to explore a controlled
   environment and make basic movement decisions with minimal human intervention.
4. To integrate an intelligent assistant that can interact with users, answer questions,
   and provide task recommendations based on available information
5. To establish communicaiton between ESP32 and Raspberry Pi, coordinated motor control,
   sensor monitoring and higher proccessing level.

## 4. Functional Requirements

FR01: The system shall allow users to control the rover's movement, including forward, 
      backward, left, right, and stop commands.
FR02: The system shall detect nearby obstacles using distance sensors.
FR03: The system shall automatically stop or change directions when and obstacle is detected
      during autonomous navigation.
FR04: The system shall support autonomous navgitaion within controlled indoor environment.
FR05: The system shall collect and transmit sensor readings from the ESP32 to the 
      Raspberry Pi.
FR06: The system shall display the rover's operating status and sensor readings through a 
      user interface.
FR07: The system shall stop its motor when signal/communication is lost or an emergency stop
      is activated by the user.
FR08: The system shall allow users to swtich between manual and autonomous operating modes.
FR09: The system shall capture images or video using a onboard camera.
FR10: The system shall allow users to interact with an AI assistant through text or voice 
      commands.
FR11: The AI assistant shall prvide task recommendations based on the information supplied 
      by the users.

//future additional FR will be decided after all this requirements have been developed.

## 5. Non-Functional Requirements

//NFR will be decided after in depth research about autonomous mobile robot. it shall cover performance, safety, realiability, usability, architecture, maintainability, hardware safety and Security.

NFR01: 

## 6. Hardware Requirements

## 6.1 Core

HR01: ESP32
HR02: Raspberry pi
HR03: Motor
HR04: Motir driver module
HR05: Chasis and wheels
HR06: Ultrsonic sensor
HR07: MPU6050
HR08: Battery & power regulation
HR09: Wiring and connectors
HR10: Power switch

## 6.2 Adnvanced 

HR11: Raspberry pi camera / USB Webcam
HR12: Servo motors
HR13: microphone
HR14: Speaker
HR15: OLED display
HR16: arm & gripper

//availability yet to be confirmed, future compoment might be add/remove and ORBI design will be draft first

## 7. Success Criteria

Write independently verified project requirements here.

## MVP acceptance criteria

- [ ] Manual rover movement
- [ ] Obstacle sensing
- [ ] Safe stop / communication timeout
- [ ] Simple autonomous navigation test
- [ ] Basic telemetry

## Scope and constraints

To be defined by the builder.
