#include <stdio.h>

#include "foo.h"

#define LOG_TAG "FOO_LIB"

void foo_func_1()
{
    printf("[%s] foo_func_1 call\n", LOG_TAG);
}

void foo_func_2()
{
    printf("[%s] foo_func_2 call\n", LOG_TAG);
}
