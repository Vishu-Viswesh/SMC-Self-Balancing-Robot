#ifndef MOTOR_H
#define MOTOR_H

class Motor
{
public:

    void begin();

    void move(int leftPWM, int rightPWM);

    void stop();

private:

    void driveLeft(int pwm);

    void driveRight(int pwm);

};

#endif
