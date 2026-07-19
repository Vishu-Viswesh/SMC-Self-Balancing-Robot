# 🤖 SMC-Based Two-Wheeled Self-Balancing Mobile Robot

> ⚡ An autonomous self-balancing mobile robot designed using **Sliding Mode Control (SMC)** for robust stability, real-time balancing, and intelligent navigation.

---

## 📌 Overview

This project presents a **Two-Wheeled Self-Balancing Mobile Robot** controlled using the **Sliding Mode Control (SMC)** algorithm. The robot continuously estimates its tilt angle using the **MPU6050 IMU** and adjusts motor speeds through an **L298N motor driver** to maintain balance.

The system is built on **Arduino Mega**, providing real-time control for dynamic stabilization and future autonomous navigation.

---

## 🚀 Features

- ⚖️ Sliding Mode Control (SMC)
- 🤖 Self-balancing on two wheels
- 🎯 Real-time angle estimation
- 📈 Kalman Filter for sensor fusion
- ⚡ High-speed feedback control
- 🔄 PID parameter tuning support
- 📷 Camera integration for navigation
- 🛣️ Ready for ROS/Nav2 integration

---

## 🛠 Hardware Components

| Component | Purpose |
|------------|----------|
| 🧠 Arduino Mega | Main Controller |
| 📡 MPU6050 | IMU Sensor |
| ⚙️ L298N | Motor Driver |
| 🔋 DC Gear Motors | Motion Control |
| 🔌 Li-ion Battery | Power Supply |
| 🎥 Camera Module | Object Detection & Navigation |
| 🛞 Two Wheels | Mobility |

---

## 🧠 Sliding Mode Control

The controller minimizes the tilt error using a nonlinear Sliding Mode Control law.

### Control Equation

```text
u = -K × sign(S)
```

where

```text
S = λe + ė
```

- e → Tilt Angle Error
- ė → Angular Velocity Error
- λ → Sliding Surface Gain
- K → Control Gain

---

## 🔄 System Workflow

```text
MPU6050
    │
    ▼
Read Accelerometer + Gyroscope
    │
    ▼
Kalman Filter
    │
    ▼
Compute Tilt Angle
    │
    ▼
Sliding Mode Controller
    │
    ▼
PWM Generation
    │
    ▼
L298N Driver
    │
    ▼
DC Motors
    │
    ▼
Robot Balancing
```

---

## 📂 Project Structure

```text
Arduino Code
      │
      ▼
Sensor Reading
      │
      ▼
Kalman Filter
      │
      ▼
SMC Controller
      │
      ▼
Motor Driver
      │
      ▼
Robot Motion
```

---

## 📊 Results

✔ Stable Balancing

✔ Fast Disturbance Rejection

✔ Smooth Motor Control

✔ Low Oscillation

✔ Robust Against External Disturbances

---

## 📷 Hardware Setup

(Add pictures here)

---

## 🎥 Demonstration

(Add balancing video)

---

## 📈 Future Improvements

- 🤖 ROS2 Integration
- 🛣️ Nav2 Path Planning
- 📷 YOLO Object Detection
- 🧠 Reinforcement Learning
- 📡 ESP32 Wireless Monitoring
- ☁️ IoT Dashboard
- 🗺️ SLAM Mapping
- 🚗 Autonomous Navigation

---

## 🛠 Software Used

- Arduino IDE
- C++
- MATLAB
- ROS2
- PlatformIO
- Serial Plotter

---

## 👨‍💻 Author

Your Name

---

<h3 align="center">
⭐ If you found this project interesting, don't forget to Star the repository!
</h3>
