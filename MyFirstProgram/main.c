#include "test.h"

int main(const int argc, char** argv) {
    /*
    We iterate over every argument except the first one and print them calling the function with the argv as argument.
    We check for error codes and do an early return if something fails, or keep going until the 0 code.
    */
    for (int i = 1; i < argc; ++i) {
        if (test_PrintMyName(argv[i]) != 0) return 1;
    }
    return 0;
}
