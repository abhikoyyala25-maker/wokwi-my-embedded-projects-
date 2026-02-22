Wheather Station using Aruduino uno
# 🌦 Arduino Weather Station (BMP180 + I2C LCD)

## 📌 Project Overview

This project implements a basic weather monitoring system using Arduino Uno and the BMP180 barometric pressure sensor.  
The system reads real-time temperature and atmospheric pressure data and displays the results on a 16x2 I2C LCD.

The project is simulated using Wokwi and written in Embedded C (Arduino framework).

---

## 🛠 Hardware Used

- Arduino Uno
- BMP180 Barometric Pressure Sensor (I2C)
- 16x2 LCD Display (I2C)

---

## 🔌 Circuit Connections

### BMP180 Connections
| BMP180 | Arduino Uno |
|---------|-------------|
| VCC     | 3.3V        |
| GND     | GND         |
| SDA     | A4          |
| SCL     | A5          |

### LCD (I2C) Connections
| LCD | Arduino Uno |
|------|-------------|
| VCC  | 5V          |
| GND  | GND         |
| SDA  | A4          |
| SCL  | A5          |

Note: Both devices share the same I2C bus (A4 & A5).

---

## ⚙ Features

- Temperature measurement (°C)
- Atmospheric pressure measurement (hPa)
- Altitude estimation
- LCD display output
- Serial monitor debugging

---

## 🧠 Technical Concepts Covered

- I2C Communication Protocol
- Multi-device I2C bus configuration
- Sensor interfacing
- Embedded C programming
- Real-time data acquisition
- LCD interfacing

---

## ▶ How to Run (Wokwi Simulation)

1. Open Wokwi
2. Add Arduino Uno
3. Add BMP180 (I2C)
4. Add 16x2 LCD (I2C)
5. Connect according to the table above
6. Paste the provided `.ino` code
7. Start simulation

---

## 🎯 Learning Outcome

This project demonstrates practical knowledge of:
- Hardware interfacing
- Embedded firmware development
- Sensor data processing
- Display integration in embedded systems

---

## 👨‍💻 Author
WOKWI Project LINK
https://wokwi.com/projects/456633338911466497
Abhi  
B.Tech – Electronics & Communication Engineering
