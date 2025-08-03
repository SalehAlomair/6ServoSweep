# Arduino 6-Servo Control Project

This project demonstrates how to control **six servo motors** using an **Arduino Uno** and a **breadboard** for power distribution. The system is programmed to sweep all six servos from 0° to 180° and back continuously.

<img width="2327" height="1071" alt="image" src="https://github.com/user-attachments/assets/74967f9f-09d6-4f10-850d-0501c2d4f6a3" />

## 🔌 Hardware Components
- 1x Arduino Uno
- 6x SG90 Servo Motors
- 1x Breadboard
- Jumper Wires
- USB Cable for Arduino

## ⚙️ Connections
| Arduino Pin | Connected To |
|-------------|--------------|
| D2          | Servo 1 Signal |
| D3          | Servo 2 Signal |
| D4          | Servo 3 Signal |
| D5          | Servo 4 Signal |
| D6          | Servo 5 Signal |
| D7          | Servo 6 Signal |
| GND         | Breadboard GND rail |
| 5V          | Breadboard Power rail |

All servos share the same power and ground from the breadboard rails.

> ⚠️ Make sure your power supply can handle the total current drawn by all 6 servos.

## 💻 Software
- Arduino IDE
- `Servo.h` library (pre-installed with the Arduino IDE)

## 🚀 How It Works
1. Each servo is attached to a dedicated digital pin.
2. The loop moves all servos gradually from 0° to 180°, then back.
3. This creates a synchronized sweeping motion across all servos.

## 🛠️ Applications
- Multi-joint robotic arms
- Animatronics
- Servo calibration and testing rigs
