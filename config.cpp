#ifndef CONFIG_H
#define CONFIG_H

// ------------------------------
// Motor Driver (L298N)
// ------------------------------

#define ENA 9
#define IN1 8
#define IN2 7

#define ENB 6
#define IN3 5
#define IN4 4

// ------------------------------
// MPU6050
// ------------------------------

#define MPU_ADDRESS 0x68

// ------------------------------
// Robot Parameters
// ------------------------------

const float WHEEL_RADIUS = 0.0325;      // meters
const float ROBOT_HEIGHT = 0.18;        // meters
const float ROBOT_WEIGHT = 1.4;         // kg

// ------------------------------
// SMC Parameters
// ------------------------------

const float lambda = 6.5;
const float gainK = 130.0;
const float boundaryLayer = 0.08;

// ------------------------------
// PWM Limits
// ------------------------------

const int MAX_PWM = 255;
const int MIN_PWM = 0;

// ------------------------------
// Control Loop
// ------------------------------

const float LOOP_TIME = 0.01;

// ------------------------------
// Kalman Parameters
// ------------------------------

const float Q_angle = 0.001;
const float Q_bias = 0.003;
const float R_measure = 0.03;

#endif
