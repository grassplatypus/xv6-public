#include "types.h"
#include "user.h"
#include "stat.h"

int main() {
    int i;
    printf(1, "PID\tGETNICE\tSETNICE2'3'\tAFTERSETNICE\n");
    for (i = 0; i < 11; i++) {
        printf(1, "%d\t%d\t", i, getnice(i));
        printf(1, "%d\t", setnice(i, 3));
        printf(1, "%d\n", getnice(i));

    }
    printf(1, "this is PS()\n");
    ps(0);
    exit(); // must use exit(), not return 0;
}