#include <stdio.h>

#include "foo.h"

#define LOG_TAG "CMAKE-PROJECT-00"

int main()
{
    printf("[%s] main\n", LOG_TAG);
    foo_func_1();
    foo_func_2();
    return 0;
}
