#include "test.h"
#include <stdio.h>

int test_PrintMyName(char name[]) {
    // Early return in case of null arguments with error code 1
    if (!name) return 1;

    printf("Hello, my name is %s", name);
    return 0;
}
