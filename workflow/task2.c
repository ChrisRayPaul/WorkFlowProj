//
// Created by wvv on 2018-1-15.
//

#include "workflow.h"
void task2_step1(u32 p);
void task2_step4(u32 p)
{
    set_next_action(task2_step1);
}
void task2_step3(u32 p)
{
    set_next_action(task2_step4);
}
void task2_step2(u32 p)
{
    set_next_action(task2_step3);
}
void task2_step1(u32 p)
{
    set_next_action(task2_step2);
}