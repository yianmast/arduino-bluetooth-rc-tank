# Arduino Bluetooth RC Tank 🤖📱

Control a DIY tank using your smartphone and Bluetooth! This project is based on the original [Instructables guide](https://www.instructables.com/Arduino-Bluetooth-RC-Tank/) and allows you to build a remote-controlled tracked vehicle using an Arduino and HC-05 Bluetooth module.

---

## 🚀 Features

- Full directional control via Bluetooth app
- Dual motor driver for tank-style movement
- Reusable chassis with optional 3D-printed components
- Works with Android Bluetooth controller apps

---

## 🧰 Bill of Materials

| Item                        | Quantity | Notes                              |
|-----------------------------|----------|------------------------------------|
| Arduino Uno or Nano         | 1        | Microcontroller                    |
| HC-05 Bluetooth Module      | 1        | Or HC-06                           |
| L298N Motor Driver          | 1        | Dual H-Bridge                      |
| DC Geared Motors + Wheels   | 2        | For tank treads or wheels          |
| Chassis / Base Plate        | 1        | 3D printable or custom             |
| Battery Pack (6-12V)        | 1        | Depending on motor voltage         |
| Jumper Wires                | —        |                                    |
| Optional: 3D Printed Parts  | —        | See `3d-files/` folder             |

---

## 🔌 Circuit Diagram

Find the circuit in `images`

**Connection Summary:**

| Component               | Arduino Pin |
|------------------------|-------------|
| HC-05 TX               | RX (via voltage divider) |
| HC-05 RX               | TX          |
| Motor A IN1/IN2        | D5, D6      |
| Motor B IN3/IN4        | D10, D11    |
| Enable Pins            | +5V         |
| Motors Power           | External Battery |

---

## 🧠 How It Works

The Arduino receives commands via Bluetooth (HC-05) from an Android app. Based on the received character (`'F'`, `'B'`, `'L'`, `'R'`, `'S'`), the Arduino sets motor directions via the L298N module to move the tank.

---

## 📲 Bluetooth App

You can use apps like:

- **Bluetooth Terminal HC-05**
- **Arduino Bluetooth Controller**
- **Bluetooth RC Controller** (recommended)

Buttons in the app send single-character commands like:

| Command | Action     |
|---------|------------|
| `F`     | Forward    |
| `B`     | Backward   |
| `L`     | Turn Left  |
| `R`     | Turn Right |
| `S`     | Stop       |

![App Controls](images/app_controls.jpg)

---

## 🔧 Assembly Instructions

1. Connect all components per the circuit diagram.
2. Upload the code from `arduino/robot.ino` using the Arduino IDE.
3. Power the motors and Arduino (separately if needed).
4. Pair the HC-05 module with your smartphone (default PIN is `1234` or `0000`).
5. Open the app and start driving!

---

## 🧱 3D Files

Located in the [`3d-files/`](./3d-files/) directory:

- `tank_body.stl`: Base frame for motors
- `motor_mount.stl`: Motor holders or brackets

Print with PLA or PETG. M3 screws recommended for assembly.

---

## 📜 License

This project is licensed under the [MIT License](LICENSE).

---

## 🙌 Credits

Original design published on [Instructables](https://www.instructables.com/Arduino-Bluetooth-RC-Tank/)
