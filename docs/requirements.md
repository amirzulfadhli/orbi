# ORBI requirements


## ORBI System Requirements

## 1. Project Overview

ORBI  is a robot helper than combine from NVIDIA microduck and reachy mini. It helps with people daily routine by restoring and calculate what information a person tell them.

## 2. Problem Statement

Remembering our daily schedule really hard if has a pack timeline and thins to do. ORBI helps resolve this issue with integrated machine learning module that predict and decide what things need to work with first. 

## 3. Project Objectives

1. To design and develop a mobile robotic rover capable of moving and navigating through an indoor environment using microcontroller based control system.
2. To implement enviromental sensing and obstacle avoidance using sensors that allow therover to detect nearby objects and respond safely.
3. To develop an autonomous navigation system that enables ORBI to explore a controlledenvironment and make basic movement decisions with minimal human intervention.
4. To integrate an intelligent assistant that can interact with users, answer questions,and provide task recommendations based on available information
5. To establish communicaiton between ESP32 and Raspberry Pi, coordinated motor control,sensor monitoring and higher proccessing level.

## 4. Functional Requirements

FR01: The system shall allow users to control the rover's movement, including forward, backward, left, right, and stop commands.
FR02: The system shall detect nearby obstacles using distance sensors.
FR03: The system shall automatically stop or change directions when and obstacle is detectedduring autonomous navigation.
FR04: The system shall support autonomous navgitaion within controlled indoor environment.
FR05: The system shall collect and transmit sensor readings from the ESP32 to the Raspberry Pi.
FR06: The system shall display the rover's operating status and sensor readings through a user interface.
FR07: The system shall stop its motor when signal/communication is lost or an emergency stopis activated by the user.
FR08: The system shall allow users to swtich between manual and autonomous operating modes.
FR09: The system shall capture images or video using a onboard camera.
FR10: The system shall allow users to interact with an AI assistant through text or voice commands.
FR11: The AI assistant shall prvide task recommendations based on the information supplied by the users.

//future additional FR will be decided after all this requirements have been developed.

## 5. Non-Functional Requirements

NFR01: The rover shall respond to valid manual movement commands within 300 milliseconds under normal operating conditions.
NFR02: The rover shall stop its motors within 500 milliseconds after detecting a communicaiton timeout.
NFR03: The obstacle detection system shall detect suitable objects within a predefinedrange of 10-100cm during controlled tests.
NFR04: The rover shall operate continuously for at least 30 minutes under normal indoor testing conditions.
NFR05: The rover shall enter a safe stopped state when critical sensor readings become invalid or unavailable during autonomous navigation.
NFR06: The system shall seperate low level motor control from higher level processing to maintain essential safety funcitons if the raspberry pi becomes unresponsive.
NFR07: The user interface shall clearly display the rover's current operating mode, connection status and available sensor readings.
NFR08: The system shall support modular software components so that sensors and features can be added without rewriting the entire control system.
NFR09: The rover shall operate using electrical supplies within the rated voltage and current specifications of its components.
NFR10: The system shall restrict remote control access to authorized users.
 

//NFR will be decided after in depth research about autonomous mobile robot. it shall cover performance, safety, realiability, usability, architecture, maintainability, hardware safety and Security.

NFR01: 

## 6. Hardware Requirements

### 6.1 Core

HR01: ESP32 - Control motors, collects sensor data and handles low level rover operations
HR02: Raspberry Pi - Performs high level processing, navigation decisions and communication with the user interface.
HR03: Motor - Provide movement and propulsion for the rover.
HR04: Motor driver module - Control motor speed and direction according to commands.
HR05: Chasis and wheels - Provide structural suppoer and enable movement across indoor surfaces.
HR06: Ultrsonic sensor - Measures distances to nearby obejcts for obstacle detection.
HR07: MPU6050 - Measures accelaration and angular velocity to monitor rover movement and orientation.
HR08: Battery & power regulation - Supplies stable, appropriate voltages and sufficient current to the controlers, motors and sensors.
HR09: Wiring and connectors - Provide reliable electrical connections between hardware components.
HR10: Power switch - Allow the rover to be powered off 
HR10.1: Emergency stop mechanism - Allow the rover to stop the motor safely.

### 6.2 Adnvanced 

HR11: Raspberry pi camera/USB Webcam - Enables visual perception, image capture and object recognition.
HR12: Servo motors - Control the movement of a canera mount/robotic arm. 
HR13: microphone - Captures voice commands for the AI assistant.
HR14: Speaker - Provides spoken responses and audio feedback.
HR15: OLED display - Display the robot's status, information or animated expressions.
HR16: arm & gripper - Enables ORBI  to ineteract physically with small objects.

//availability yet to be confirmed, future compoment might be add/remove and ORBI design will be draft first

## 7. Success Criteria

Write independently verified project requirements here.

SC01: The rover can move forward, backward, left, right and stop through manual command.
SC02: The rover can detect nearby obstacles and stop safely before collision during controlled tests.
SC03: The rover can navigate a predefined indoor test course autnomously without human intervention under normal testing conditions.
SC04: The ESP32 and Raspberry Pi can communicate relaibly to exchange movement commands and sensor readings.
SC05: The system can display real-time sensor readings, operating modes and connection status through a user iterface. 
SC06: The rover automatically stop its motors when communication is lost or an emergency stop is activated.
SC07: The rover can operate continuously for at least 30 minutes under normal indoor testing conditions.
SC08: The rover can complete three consecutive controlled navigation trials without collision or critical system failure.

Advanced

SC09: The rover can capture images/video through and onboard camera.
SC10: The AI assitant can respond to user questions and provide basic task recommendations.
SC11: The rover can perform simple physical interactions using a robotic arm/gripper.

## MVP acceptance criteria

- [ ] Manual rover movement
- [ ] Obstacle sensing
- [ ] Safe stop / communication timeout
- [ ] Simple autonomous navigation test
- [ ] Basic telemetry

## 8. Scope & Constraints

To be defined by the builder.

### 8.1 Project scope

The scope of ORBI is to develop a small autnomous rover inspired by planetary exploration robots. The system will integrate an ESP32 microcontroller and Raspberry pi 5 to support movement control, enviromental sensing, autnomous navigation and user interaction.

The project includes: 
1. Developement pf a wheeled rover capable of manual and autonomous movement.
2. Intergrations of distance and motion sensors for obstacle detection and movement monitoring. 
3. Implementation of basic autonomous navigation within a controlled indoor environment.
4. Communication between the ESP32 and Raspberry pi for coordinated operation.
5. Developement of a user interface for rover control and system monitoring.
6. Implementation of safety mechanisms, including emergency stopping and communication failure detections.

Optional future extension:
1. Camera based object recognition and enviromental analysis.
2. Voice interaction and AI assisted decision making.
3. Robotic arm integration for simple object manipulation.
4. Advanced navigation, mapping and terrain exploration.

### 8.2 Project constraints

C01: Development time - Development is planned around 200-300 hour target with an average workload of 2-5 hourse per day.
C02: Budget - The project will prioritize existing hardware and afforable components to minimize additional costs.
C03: Processing resources - The ESP32 and Raspberry pi 5 have limited processing capabilities comapred with high performance robotics computers. 
C04: Power supply - Battery capacity and volatege regulation will limit operating time and affect compoenent selection.
C05: Operating environment - Initial testing will be restricted to controlled indoor environments with relatively flat surfaces.
C06: Sensor limitations - Ultrasonic and IMU sensors may produce inaccurate or invalid readings under certain conditions.
C07: Communication - Wireless communication may experience latency, interference or temporary disconenction.
C08: Safety - The rover must oprate at controlled speeds and stop safely when critical failures occur.
C09: Developement resources - Hardware availability, fabrication tools and the developer's current technical knowledge may limit implementation complexity.
C10: Event requirements - Project activities and submissions must comply with Hack CLub Phantom's eligibility, AI use, time tracking and project review rules.

## 9. System Architecture

## 10. Hardware Inventory and BOM

## 11. Developement Roadmap

## 12. Testing and Validation Plan

## 13. Risk Management

## 14. Communication protocol

## 15. Future Enhancements
