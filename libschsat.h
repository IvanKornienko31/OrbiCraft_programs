/* This file was automatically generated.  Do not edit! */
#ifndef LIBSCHSAT_H_
#define LIBSCHSAT_H_
#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>
#include <string.h>
#include <math.h>
#include <sys/time.h>
#define LSS_OK 0
#define LSS_ERROR 1
#define LSS_BREAK 2
float battery_get_charge(void);
float battery_get_charging_current(void);
float battery_get_discharging_current(void);
int accelerometer_get_state(uint16_t num);
int accelerometer_request_raw(uint16_t num,int16_t *pRAW_dataX,int16_t *pRAW_dataY,int16_t *pRAW_dataZ);
int accelerometer_request_reset(uint16_t num);
int accelerometer_turn_off(uint16_t num);
int accelerometer_turn_on(uint16_t num);
int arduino_send(const uint16_t num,const uint16_t msg_id,char *args,char *answer, const uint16_t timeout);
int arm_get_state(uint16_t num);
int arm_request_reset(uint16_t num);
int arm_set_value(uint16_t num,uint8_t value,uint8_t *confirm);
int arm_turn_off(uint16_t num);
int arm_turn_on(uint16_t num);
int bus_setup(void);
int camera_get_state(void);
int camera_take_photo(uint16_t num);
int camera_turn_off(void);
int camera_turn_on(void);
int cobs_command(const uint8_t *z,int n);
int cobs_request(const uint8_t *z,int n,uint8_t **zz,int *nn);
int cobs_single_request(const uint8_t *z,int n,uint8_t **zz,int *nn);
int coil_get_state(uint16_t num);
int coil_request_reset(uint16_t num);
int coil_set_value(uint16_t num,int16_t PWM,int16_t *confirm);
int coil_turn_off(uint16_t num);
int coil_turn_on(uint16_t num);
int engine_get_state(uint16_t num);
int engine_request_reset(uint16_t num);
int engine_set_value(uint16_t num,int16_t value,int16_t *confirm);
int engine_turn_off(uint16_t num);
int engine_turn_on(uint16_t num);
int fan_get_state(uint16_t num);
int fan_request_reset(uint16_t num);
int fan_request_speed(uint16_t num,int16_t *pRPM);
int fan_set_speed(uint16_t num,int16_t RPM,int16_t *confirm);
int fan_turn_off(uint16_t num);
int fan_turn_on(uint16_t num);
int gyro_get_state(uint16_t num);
int gyro_request_raw(uint16_t num,int16_t *pRAW_dataX,int16_t *pRAW_dataY,int16_t *pRAW_dataZ);
int gyro_request_reset(uint16_t num);
int gyro_turn_off(uint16_t num);
int gyro_turn_on(uint16_t num);
int hyro_get_state(uint16_t num);
int hyro_request_raw(uint16_t num,int16_t *pRAW_dataX,int16_t *pRAW_dataY,int16_t *pRAW_dataZ);
int hyro_request_reset(uint16_t num);
int hyro_turn_off(uint16_t num);
int hyro_turn_on(uint16_t num);
int instrument_attach(const char *name,uint16_t port);
int instrument_detach(void);
int instrument_measure(char *buf,int len,char **pa,int *pi,int secs);
int light_sensor_get_state(uint16_t num);
int light_sensor_request_maxraw(uint16_t num,uint16_t *pMAXRAW_data);
int light_sensor_request_raw(uint16_t num,uint16_t *pRAW_data);
int light_sensor_request_reset(uint16_t num);
int light_sensor_set_calibrate(uint16_t num,uint8_t mode);
int light_sensor_set_minvalue(uint16_t num,uint16_t value);
int light_sensor_turn_off(uint16_t num);
int light_sensor_turn_on(uint16_t num);
int magnetometer_get_state(uint16_t num);
int magnetometer_request_raw(uint16_t num,int16_t *pRAW_dataX,int16_t *pRAW_dataY,int16_t *pRAW_dataZ);
int magnetometer_request_reset(uint16_t num);
int magnetometer_turn_off(uint16_t num);
int magnetometer_turn_on(uint16_t num);
int motor_get_state(uint16_t num);
int motor_request_reset(uint16_t num);
int motor_request_speed(uint16_t num,int16_t *pRPM);
int motor_set_speed(uint16_t num,int16_t RPM,int16_t *confirm);
int motor_turn_off(uint16_t num);
int motor_turn_on(uint16_t num);
int sun_sensor_get_state(uint16_t num);
int sun_sensor_request_maxraw(uint16_t num,uint16_t *pMAXRAW_data1,uint16_t *pMAXRAW_data2);
int sun_sensor_request_raw(uint16_t num,uint16_t *pRAW_data1,uint16_t *pRAW_data2);
int sun_sensor_request_reset(uint16_t num);
int sunsensors_angle(uint16_t positive,uint16_t negative,uint16_t ambient,double *angle);
int sun_sensor_set_minvalue(uint16_t num,uint16_t value);
int sun_sensor_turn_off(uint16_t num);
int sun_sensor_turn_on(uint16_t num);
int transceiver_get_state(uint16_t num);
int transceiver_request_buff(uint16_t num,uint8_t *data);
int transceiver_request_reset(uint16_t num);
int transceiver_send(uint16_t tx_num,uint16_t rx_num,const uint8_t *data,uint16_t len);
int transceiver_turn_off(uint16_t num);
int transceiver_turn_on(uint16_t num);
int transmitter_get_state(uint16_t num);
int transmitter_request_reset(uint16_t num);
int transmitter_transmit_photo(uint16_t num,uint16_t nPhoto);
int transmitter_turn_off(uint16_t num);
int transmitter_turn_on(uint16_t num);
void dump_buffer(uint8_t *buf,size_t len);
void mSleep(int msec);
void Sleep(int sec);
#endif
