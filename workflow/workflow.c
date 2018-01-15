//
// Created by wvv on 2018-1-15.
//

#include "../core/public.h"

static pFun _action;
void set_next_action(pFun p)
{
    _action = p;
}
