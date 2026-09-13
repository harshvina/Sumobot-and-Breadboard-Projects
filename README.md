Autonomous Sumobot & Embedded C System:

An autonomous 2-wheel Sumobot and microcontroller testing platform built with Arduino. Demonstrates H-bridge motor actuation, ultrasonic closed-loop sensing, and custom indicator routines.

System Architecture:

Microcontroller: Arduino Uno (ATmega328P)

Actuation: Dual DC Gearbox Motors via H-Bridge Driver

Sensors: HC-SR04 Ultrasonic Distance Sensor

Interfacing: Multi-LED status indicators, active-low toggle safety switch (INPUT_PULLUP)
Sumbot Module Breakdown:

08_SumobotWallbouncerDistanceSensing.ino (Closed-Loop Obstacle Evasion): Uses real-time HC-SR04 polling to bounce between boundaries. Drives forward until reading <10cm, triggering an automated reverse and turn maneuver.

00_FinalSumobotProject.ino (Autonomous Navigation Routine):Combines closed-loop ultrasonic targeting with H-bridge differential drive control. Continuously scans for opponent targets, triggering full-power forward engagement upon detection while executing search sweeps when clear.

Quick Start:

Clone repo: git clone [https://github.com/harshvina/Sumobot-and-Breadboard-Projects.git]

Open target .ino file in Arduino IDE 2.x.

Board: Arduino Uno | Port: Select active COM/Serial port.

Compile and upload.
