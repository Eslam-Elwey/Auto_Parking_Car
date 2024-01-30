
#ifndef MOTOR_CFG_H_
#define MOTOR_CFG_H_
#include "MOTOR_Int.h"

#define TOTAL_MOTORS				2

static const motor_control_t motor_arr[TOTAL_MOTORS] = {{PINB0,PINB1},
														{PINB5,PINB6},
														};



#endif /* MOTOR_CFG_H_ */