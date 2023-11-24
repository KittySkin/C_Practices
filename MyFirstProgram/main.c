#include "test.h"

int main(const int argc, char** argv) {
    for (int i = 1; i < argc; ++i) {
        if (test_PrintMyName(argv[i]) != 0) return 1;
    }
    return 0;
}
