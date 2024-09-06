#include <stdio.h>

enum DayRoutine 
{
    SLEEP,
    EAT,
    WORK
};

enum NoPlan
{
    NO_PLAN = 42,
    PLAN = 12
};

int main()
{
    printf("Enums are list with constants. First constant has value 0, second has value 1 and so on.\n");
    enum DayRoutine start = SLEEP;
    printf("DayRoutine.SLEEP = %d\n\n", start);

    printf("You can change the values of the enum constants.\n");
    enum NoPlan plan = PLAN;
    printf("NoPlan.PLAN = %d\n", plan);
}

