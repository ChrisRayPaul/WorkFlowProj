//
// Created by wvv on 2018-1-15.
//
#include "workflow.h"
void task1_step1(u32 p);
void task1_step2(u32 p)
{
    set_next_action(task1_step1);
}
void task1_step1(u32 p)
{
    set_next_action(task1_step2);
}