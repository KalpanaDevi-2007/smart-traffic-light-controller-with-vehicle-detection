# 🚦 Smart Traffic Light Controller with Vehicle Detection

## 📌 Project Overview

This project implements a Smart Traffic Light Controller using Arduino Uno and HC-SR04 Ultrasonic Sensors. The system detects the presence of vehicles on two roads and automatically controls the traffic lights based on vehicle availability.

Unlike a conventional traffic light system that changes signals after fixed time intervals, this smart system provides priority to the road where vehicles are detected, reducing unnecessary waiting time and improving traffic flow.

The project was designed and simulated using Tinkercad.

---

# 🎯 Objectives

- Automate traffic signal control.
- Detect vehicles using ultrasonic sensors.
- Reduce unnecessary waiting time.
- Improve traffic management efficiency.
- Learn Arduino programming and embedded systems.

---

# 🛠 Components Used

| Component | Quantity |
|------------|----------|
| Arduino Uno | 1 |
| HC-SR04 Ultrasonic Sensor | 2 |
| Red LED | 2 |
| Yellow LED | 2 |
| Green LED | 2 |
| 220Ω Resistors | 6 |
| Breadboard | 1 |
| Jumper Wires | As Required |
| USB Cable (Simulation) | 1 |

---

# ⚙ Working Principle

The system continuously monitors two roads using HC-SR04 ultrasonic sensors.

- Each ultrasonic sensor measures the distance of nearby vehicles.
- When a vehicle is detected within the predefined distance, the Arduino processes the input.
- The controller gives the green signal to the road where vehicles are present.
- The opposite road remains at the red signal.
- Before switching signals, the yellow LED glows to indicate a transition.
- If no vehicles are detected on one road, priority is given to the other road.

This intelligent control system minimizes traffic congestion compared to conventional timer-based traffic lights.

---

# ✨ Features

- Vehicle detection using ultrasonic sensors
- Automatic traffic signal control
- Real-time decision making
- Reduced waiting time
- Arduino Uno based implementation
- Tinkercad simulation
- Low-cost prototype

---

# ▶ How to Run

1. Open the circuit in Tinkercad.
2. Connect all components as shown in the circuit diagram.
3. Upload the Arduino code.
4. Start the simulation.
5. Place an object in front of either ultrasonic sensor.
6. Observe the traffic lights automatically switching according to vehicle detection.

---

# 📊 System Workflow

Vehicle Detection
⬇
Arduino Reads Sensor Data
⬇
Compare Vehicle Presence
⬇
Select Priority Road
⬇
Green Signal ON
⬇
Yellow Signal Transition
⬇
Switch Traffic Signal

---

# 🌍 Applications

- Smart Cities
- Intelligent Traffic Management
- Highway Intersections
- Educational Arduino Projects
- Embedded Systems Learning
- IoT Prototype Development

---

# 🚀 Future Improvements

- Emergency vehicle priority
- GSM notification
- IoT monitoring using ESP8266
- Camera-based vehicle counting
- AI-based traffic prediction
- Solar-powered traffic controller

---

# 👩‍💻 Author

**Name:** Kalpana Devi A

**Intern ID:** CITS2602

---

# 📄 License

This project is developed for educational and internship purposes.
