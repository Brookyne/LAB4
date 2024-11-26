/*
 * scheduler.h
 *
 *  Created on: Nov 20, 2024
 *      Author: USER
 */

#ifndef INC_SCHEDULER_H_
#define INC_SCHEDULER_H_
#include"stdint.h"

#define SCH_MAX_TASKS 40
#define NO_TASK_ID 0



#define RETURN_NORMAL 1
#define RETURN_ERROR 2

#define ERROR_SCH_CANNOT_DELETE_TASK 3
#define ERROR_SCH_TOO_MANY_TASKS 4

typedef struct{
	void (*pTask)(void);
	uint32_t Delay;
	uint32_t Period;
	uint8_t RunMe;
	uint32_t TaskID;
} sTask;

void SCH_Init();
void SCH_Update(void);
uint32_t SCH_Add_Task(void (*pFunction) (), unsigned int DELAY, unsigned int PERIOD);
void SCH_Dispatch_Tasks(void);
uint8_t SCH_Delete_Task(uint32_t TASK_INDEX);

#endif /* INC_SCHEDULER_H_ */
