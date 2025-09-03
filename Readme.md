# Voice Controlled Rover

This project implements a **voice-controlled rover** using an Arduino UNO, an HC-05 Bluetooth module, and a motor driver (L293D / L298N).  
Voice commands are given through an Android app. The app sends text commands over Bluetooth to the HC-05, and the Arduino controls the motors accordingly.

---

## Features
- Control rover using simple voice commands:  
  - `forward` / `f`  
  - `back` / `b`  
  - `left` / `l`  
  - `right` / `r`  
  - `stop` / `s`  
  - `speed <0-255>` (set motor speed)

- Modular code for easy customization.
- Can be extended with ultrasonic/IR sensors for obstacle detection.

---

## Hardware Used
- Arduino UNO  
- HC-05 Bluetooth module  
- L293D or L298N motor driver  
- 2 DC motors (geared)  
- Motor power supply (separate from Arduino)  
- Connecting wires, chassis, wheels, battery  

*(Optional: Ultrasonic + IR sensors if obstacle avoidance is added.)*

---

## Wiring (default pins in code)
- **HC-05**:  
  - TX → Arduino pin 10 (SoftwareSerial RX)  
  - RX → Arduino pin 11 (TX via voltage divider)  
  - Vcc → 5V  
  - GND → GND  

- **Motor Driver (L298N example)**:  
  - IN1 → Arduino 2  
  - IN2 → Arduino 3  
  - IN3 → Arduino 4  
  - IN4 → Arduino 7  
  - ENA → Arduino 5 (PWM)  
  - ENB → Arduino 6 (PWM)  
  - Motor supply → External battery (e.g., 7.4–12V depending on motors)  
  - Common GND with Arduino  

---

## How It Works
1. Android app captures your speech → converts to text.  
2. Text command sent over Bluetooth to HC-05.  
3. Arduino receives command, parses it, and drives motors.  
4. Rover moves in the given direction until `stop` or a new command is received.

---

## Getting Started
1. Upload `VoiceRover.ino` to Arduino UNO.  
2. Pair HC-05 with Android device (default PIN `1234` or `0000`).  
3. Open a **Bluetooth Voice Control app** (or a simple Bluetooth terminal).  
4. Speak commands like *forward*, *left*, *stop* and see the rover respond.

---


