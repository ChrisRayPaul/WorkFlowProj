#include "units/units_test.h"
#include "proj.h"
int main() {
#if TEST_ENABLE == 1
    units_test();
#else
    system_start();
#endif
    return 0;
}