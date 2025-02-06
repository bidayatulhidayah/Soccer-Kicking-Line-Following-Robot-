# Soccer-Kicking-Line-Following-Robot-

### Autonomous Robot with Servo Control

## Table of Contents
- [Overview](#overview)
- [Features](#features)
- [Components](#components)
- [Circuit Diagram](#circuit-diagram)
- [Control Flow](#control-flow)
- [Images](#images)
- [Libraries Required](#libraries-required)
- [Bluetooth Control Setup](#bluetooth-control-setup)
- [Installation](#installation)
- [Modes and Commands](#modes-and-commands)
  - [Autonomous Mode (`A`)](#autonomous-mode-a)
  - [Remote Controlled Mode (`K`)](#remote-controlled-mode-k)
- [Troubleshooting](#troubleshooting)
- [License](#license)

## Overview
This project implements an autonomous robot capable of moving in various directions based on sensor input, with the addition of a servo-controlled mechanism for tasks like kicking a ball. The robot has two modes: **Autonomous Mode** and **Remote Controlled Mode**.

- **Autonomous Mode** uses sensors to detect obstacles and navigate the environment. The robot responds to input from sensors and adjusts its movement accordingly, such as moving forward, turning, or stopping.
- **Remote Controlled Mode** allows manual control through a Bluetooth connection to a smartphone, enabling actions like moving forward, backward, or kicking a ball.


## Features
**Autonomous Navigation**: Sensors detect surroundings, and the robot adjusts its movement (left, right, forward, backward).
- **Servo-Controlled Action**: A servo motor controls the kicking mechanism to interact with objects.
- **Bluetooth Remote Control**: The robot can be controlled via Bluetooth using a smartphone, sending commands through a Bluetooth app.
- **Multiple Input Modes**: The robot can operate in both autonomous and remote-controlled modes via serial communication or Bluetooth.
- **Sensor Integration**: The robot uses digital sensors to detect direction and obstacles, along with an IR sensor for stopping.


## Components
- **Servo Motor**: Controls the kicking mechanism.
- **DC Motors**: Control the robot's movement.
- **Arduino Board (e.g., Arduino Uno)**: The microcontroller for managing inputs and controlling motors.
- **Digital Sensors (Pins A1 to A5)**: Used for detecting the robot's environment.
- **IR Sensor**: Detects obstacles and triggers the robot to stop.
- **Motor Driver**: Controls motor movements.
- **Bluetooth Module (HC-05 or HC-06)**: Used for wireless communication with a smartphone.


## Circuit Diagram
Components are connected to the Arduino board.

<img src="https://github.com/bidayatulhidayah/Soccer-Kicking-Line-Followig-Robot-/blob/bc6098df0fa27de1c7bbf3197baf3e7865c6e6a3/Image%20and%20Diagram/Circuit%20diagram.png" alt="Circuit Diagram" width="400" />

## Control Flow
- In **Autonomous Mode**, the robot continuously reads the sensor values and adjusts its movement. It can move left, right, forward, or backward based on the sensor feedback.
- In **Remote Controlled Mode**, the user can manually control the robot using specific commands (`F`, `R`, `L`, `B`, `S`) for movement and interact with the servo-controlled mechanism. The user can manually control the robot using Bluetooth commands sent from a smartphone app.


[Flow Chart](https://github.com/bidayatulhidayah/Soccer-Kicking-Line-Followig-Robot-/blob/bc6098df0fa27de1c7bbf3197baf3e7865c6e6a3/Image%20and%20Diagram/Flow%20Chart.pdf)

## Images

<img src="https://github.com/bidayatulhidayah/Soccer-Kicking-Line-Followig-Robot-/blob/bc6098df0fa27de1c7bbf3197baf3e7865c6e6a3/Image%20and%20Diagram/Side%20view%20robot.png" alt="Side View" width="400" />
<img src="https://github.com/bidayatulhidayah/Soccer-Kicking-Line-Followig-Robot-/blob/bc6098df0fa27de1c7bbf3197baf3e7865c6e6a3/Image%20and%20Diagram/Top%20View%20robot.png" alt="Top view" width="400" />

## Libraries Required
- **Servo.h**: Used to control the servo motor.
- **Serial Communication**: For remote control via the serial monitor.

## Bluetooth Control Setup
1. Connect the **HC-05 Bluetooth module** to the Arduino:
   - **TX** of Bluetooth → **RX** of Arduino.
   - **RX** of Bluetooth → **TX** of Arduino.
   - **VCC** to **5V** and **GND** to **GND**.
   
2. Pair the Bluetooth module with your smartphone using the Bluetooth settings.
3. Use a Bluetooth terminal app (e.g., "Serial Bluetooth Terminal" for Android or "Bluetooth Serial Controller" for iOS) to send commands from the phone to the robot.
   
## Installation
Connect the motors, sensors, servo, and Bluetooth module to the Arduino according to the circuit diagram.
2. Install the necessary libraries in the Arduino IDE.
3. Upload the provided sketch to the Arduino board.
4. Open the Bluetooth terminal app on your smartphone and connect to the Bluetooth module.
5. Send the following commands to control the robot:
   - `F`: Move forward.
   - `B`: Move backward.
   - `L`: Turn left.
   - `R`: Turn right.
   - `S`: Stop.
   - `K`: Activate the servo motor for kicking.

## Modes and Commands
### Autonomous Mode (`A`)
- The robot navigates automatically using sensor input:
  - **Left**: Turn left if the left sensor detects an obstacle.
  - **Right**: Turn right if the right sensor detects an obstacle.
  - **Forward**: Move forward if the path is clear.
  - **Stop**: Stops if the IR sensor detects an obstacle.
  
### Remote Controlled Mode (`K`)
- The robot can be manually controlled with the following commands:
  - `F`: Move forward.
  - `B`: Move backward.
  - `L`: Turn left.
  - `R`: Turn right.
  - `S`: Stop.
  - `K`: Activate the servo motor for kicking.

## Troubleshooting
- **Robot not responding**: Check the wiring and ensure the Arduino is powered correctly.
- **Servo not moving**: Ensure the servo is correctly connected and that the correct pin is specified.
- **Bluetooth connection issues**: Ensure the Bluetooth module is properly paired with the smartphone and check the correct serial communication settings.
- **Motors not working**: Verify that the motor drivers are wired correctly and are receiving power.


## License
This project is open-source under the MIT License.

