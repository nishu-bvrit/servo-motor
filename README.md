<div align="center">

# 🤖 Servo Motor Control using Arduino UNO

<img src="https://img.shields.io/badge/Arduino-UNO-00979D?style=for-the-badge&logo=arduino&logoColor=white">
<img src="https://img.shields.io/badge/Language-C++-00599C?style=for-the-badge&logo=cplusplus&logoColor=white">
<img src="https://img.shields.io/badge/Library-Servo.h-success?style=for-the-badge">

### ✨ A simple Arduino project demonstrating servo motor angle control using the Servo library.

---

</div>

## 📖 Project Overview

This project controls a **Servo Motor** using an **Arduino UNO**.

The servo rotates automatically between three predefined angles:

🔹 **0°** → Initial Position

🔹 **90°** → Mid Position

🔹 **180°** → Maximum Position

Each position is held for **3 seconds**, and the cycle repeats continuously.

---

# 🛠 Components Required

| Component | Quantity |
|-----------|----------|
| Arduino UNO | 1 |
| Servo Motor (SG90/MG90S) | 1 |
| Jumper Wires | 3 |
| USB Cable | 1 |

---

# 🔌 Circuit Connections

| Servo Pin | Arduino UNO |
|-----------|-------------|
| Signal (Orange/Yellow) | D9 |
| VCC (Red) | 5V |
| GND (Brown/Black) | GND |

---

# ⚙ Working Principle

The project uses Arduino's built-in **Servo.h** library to generate the PWM signal required by the servo motor.

The program performs the following sequence:

```
0°
 │
 ▼
Wait 3 Seconds
 │
 ▼
90°
 │
 ▼
Wait 3 Seconds
 │
 ▼
180°
 │
 ▼
Wait 3 Seconds
 │
 ▼
Repeat Forever 🔄
```

---

# 📄 Arduino Code

```cpp
#include <Servo.h>

Servo motor1;

void setup() {
  motor1.attach(9);
}

void loop() {
  motor1.write(0);
  delay(3000);

  motor1.write(90);
  delay(3000);

  motor1.write(180);
  delay(3000);
}
```

---

# 💡 Code Explanation

### 📌 `#include <Servo.h>`

Imports the Servo library required to control the servo motor.

---

### 📌 `Servo motor1;`

Creates a servo object named **motor1**.

---

### 📌 `setup()`

Runs only once when the Arduino starts.

```cpp
motor1.attach(9);
```

Connects the servo motor to **Digital Pin 9**.

---

### 📌 `loop()`

Runs continuously.

```cpp
motor1.write(0);
```

Moves the servo to **0°**.

```cpp
delay(3000);
```

Waits for **3 seconds**.

The same process is repeated for:

- 90°
- 180°

After reaching 180°, the loop starts again.

---

# 🎯 Output

✅ Servo moves to **0°**

⏳ Waits **3 seconds**

✅ Moves to **90°**

⏳ Waits **3 seconds**

✅ Moves to **180°**

⏳ Waits **3 seconds**

🔄 Repeats indefinitely

---

# 📂 Project Structure

```
Servo-Motor-Control/
│
├── Servo_Motor.ino
├── README.md
└── circuit_diagram.png (Optional)
```

---

# 🚀 Future Improvements

- 🎛 Control servo using a potentiometer
- 📱 Bluetooth-based servo control
- 🌐 Wi-Fi controlled servo using ESP8266
- 🤖 Servo control with joystick
- 📟 Display servo angle on an LCD
- 🎮 Control using IR Remote

---

# 📚 Concepts Used

- Arduino Programming
- Servo Motor
- PWM (Pulse Width Modulation)
- Servo.h Library
- Digital Output
- Embedded Systems

---

# ⭐ Learning Outcomes

By completing this project, you will learn:

✔ How servo motors work

✔ How PWM controls servo position

✔ Using the Servo library

✔ Arduino programming basics

✔ Hardware interfacing

---

<div align="center">

### 🌟 If you found this project useful, don't forget to ⭐ Star the repository!

**Made with ❤️ using Arduino UNO**

</div>
