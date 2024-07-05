// Description: This file contains the MPU6050 HAL Driver functions declarations and constants definitions.
// [C]2018 - 2023 Nick Computer,

//INCLUDES
#include "stm32f4xx_hal.h" //fxx is the family of the microcontroller
#include "stm32f4xx_hal_i2c.h" //change this to your microcontroller family Eg: stm32f1xx_hal_i2c.h


//CONSTANTS & VARIABLES
#define MPU6050_I2C_ADDR            0xD0
#define MPU6050_I2C_TIMEOUT         0xFF

#define MPU6050_ON                 0x00


//INITIALIZATION REGISTERS
#define MPU6050_WHO_AM_I           0x75

#define MPU6050_PWR_MGMT_1         0x6B
#define MPU6050_SAMPLE_RATE_DIV    0x19
#define MPU6050_CONFIG             0x1A
#define MPU6050_GYRO_CONFIG        0x1B
#define MPU6050_ACCEL_CONFIG       0x1C

//DATA REGISTERS

#define MPU6050_ACCEL_XOUT_H       0x3B
#define MPU6050_ACCEL_XOUT_L       0x3C
#define MPU6050_ACCEL_YOUT_H       0x3D
#define MPU6050_ACCEL_YOUT_L       0x3E
#define MPU6050_ACCEL_ZOUT_H       0x3F
#define MPU6050_ACCEL_ZOUT_L       0x40

#define MPU6050_TEMP_OUT_H         0x41
#define MPU6050_TEMP_OUT_L         0x42

#define MPU6050_GYRO_XOUT_H        0x43
#define MPU6050_GYRO_XOUT_L        0x44
#define MPU6050_GYRO_YOUT_H        0x45
#define MPU6050_GYRO_YOUT_L        0x46
#define MPU6050_GYRO_ZOUT_H        0x47
#define MPU6050_GYRO_ZOUT_L        0x48

//DEFALUT VALUES
#define MPU6050_PWR_MGMT_1_DEF 0x00
#define MPU6050_SAMPLE_RATE_DIV_DEF 0x07
#define MPU6050_CONFIG_DEF 0x06
#define MPU6050_GYRO_CONFIG_DEF 0x18
#define MPU6050_ACCEL_CONFIG_DEF 0x01

void MPU6050_INIT(I2C_HandleTypeDef hi2c1);
int16_t MPU6050_UPDATE(I2C_HandleTypeDef hi2c1);
int16_t* MPU_6050_GET_DATA(void);
