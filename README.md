# Auto_Parking_Car
Using MCU ATMEGA32
HAL : Servo Motor / LCD / UltraSonic / DC Motor
MCAL : Timers / External Interrupts / DIO
Services : Timer Services 
APP : Auto_Parking_APP



Timer1 Operates In FAST PWM 8 BIT Mode (Scaler 8) 
Timer2 Operates In Normal Mode to Set Interrupt Time (Scaler 1024) 

HardWare Used 
1.Two Indication Leds For Current Mode
2.Servo Motor To Control Front Wheels
3.Two DC Motors To Control Back Wheels
4.Four Ultrasonic Sensors 2 on each Side of The Car (Get Distance)
5.One Button To Switch Modes Connected To External Interrupt
There Are 2 Modes (DRIVE Mode / Auto_Parking Mode )



