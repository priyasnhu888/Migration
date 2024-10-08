/**
 * -------------------------------------------- COPYRIGHT NOTICE ---------------------------------------------------\n
 * Copyright (C) 2023 Octobotics Tech Pvt. Ltd. All Rights Reserved.\n
 * Do not remove this copyright notice.\n
 * Do not use, reuse, copy, merge, publish, sub-license, sell, distribute or modify this code - except without\n
 * explicit, written permission from Octobotics Tech Pvt. Ltd.\n
 * Contact connect@octobotics.tech for full license information.\n
 * -------------------------------------------- COPYRIGHT NOTICE ---------------------------------------------------
 *
 *
 * @file x10_reg.h
 * @author vaibhav
 * @brief
 * @date 2023-04-07
 *
 *
 */

#pragma once
#ifndef BASE_X10_REG_H
#define BASE_X10_REG_H


#include <stdint.h>

#define DATA_MAX (8)
#define RS485_MAX (8 + 5)

class X10_REG
{
protected:
private:
public:
    uint8_t a_Motor_function[DATA_MAX] = { 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 };

    uint8_t a_Motor_read_pid[DATA_MAX] = { 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 };
    uint8_t a_Write_pid_RAM[DATA_MAX] = { 0x31, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 };
    uint8_t a_Write_pid_ROM[DATA_MAX] = { 0x32, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 };

    uint8_t a_Read_Accel[DATA_MAX] = { 0x42, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 };
    uint8_t a_Write_Accel[DATA_MAX] = { 0x43, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 };

    uint8_t a_multi_turn_current_pos[DATA_MAX] = { 0x60, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 };
    uint8_t a_multi_turn_original_pos[DATA_MAX] = { 0x61, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 };
    uint8_t a_multi_turn_zero_off_pos[DATA_MAX] = { 0x62, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 };
    uint8_t a_Write_code_zero_ROM[DATA_MAX] = { 0x63, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 };
    uint8_t a_Write_NOWcode_zero_ROM[DATA_MAX] = { 0x64, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 };

    uint8_t a_Motor_mode[DATA_MAX] = { 0x70, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 };
    uint8_t a_Motor_power[DATA_MAX] = { 0x71, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 };
    uint8_t a_Motor_reset[DATA_MAX] = { 0x76, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 };
    uint8_t a_OPEN_RlyCtrlRslt[DATA_MAX] = { 0x77, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 };
    uint8_t a_CLOSE_RlyCtrlRslt[DATA_MAX] = { 0x78, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 };
    uint8_t a_Motor_RS485ID[DATA_MAX] = { 0x79, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 };

    uint8_t a_Motor_shut_down[DATA_MAX] = { 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 };
    uint8_t a_Motor_stop[DATA_MAX] = { 0x81, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 };

    uint8_t a_enc_single_turn[DATA_MAX] = { 0x90, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 };
    uint8_t a_Motor_motorAngle_many[DATA_MAX] = { 0x92, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 };
    uint8_t a_Motor_motorAngle_single[DATA_MAX] = { 0x94, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 };
    uint8_t a_Motor_state1[DATA_MAX] = { 0x9a, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 };
    uint8_t a_Motor_state2[DATA_MAX] = { 0x9c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 };
    uint8_t a_Motor_state3[DATA_MAX] = { 0x9d, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 };

    uint8_t a_Motor_torque[DATA_MAX] = { 0xa1, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 };
    uint8_t a_speedControl[DATA_MAX] = { 0xa2, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 };
    uint8_t a_Motor_torque_control[DATA_MAX] = { 0xa3, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 };
    uint8_t a_abs_pose_control[DATA_MAX] = { 0xa4, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 };

    uint8_t a_single_turn[DATA_MAX] = { 0xa6, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 };
    uint8_t a_Motor_add[DATA_MAX] = { 0xa8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 };

    uint8_t a_Motor_time[DATA_MAX] = { 0xb1, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 };
    uint8_t a_Motor_edition[DATA_MAX] = { 0xb2, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 };
    uint8_t a_Motor_comm_time[DATA_MAX] = { 0xb3, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 };
    uint8_t a_Motor_baudrate[DATA_MAX] = { 0xb4, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 };
    uint8_t a_Motor_model[DATA_MAX] = { 0xb5, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 };

    //not done (nothing is given in datasheet)
    uint8_t a_speed_control_place[DATA_MAX] = { 0xa5, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 };
};


#endif // BASE_X10_REG_H
