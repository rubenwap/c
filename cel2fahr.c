#include <stdio.h>

main() 

{
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;
    upper = 100;
    step = 10;

    celsius = lower;
    printf("C\tF\n");
    while (celsius <= upper) {
        fahr = (celsius * 1.8) + 32.0;
        printf("%3.0f\t%6.1f\n", celsius, fahr);
        celsius = celsius + step;
    }
}
