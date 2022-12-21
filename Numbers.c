#include <stdio.h>

int main()
{
    float lbs, kgs;
    int lower, upper, step;

    lower = 0; // lower limit of conversion table
    upper = 300;
    step = 20;

    // 1 lb = 0.453492 kg
    // 1 kg = 2.20562 lb

    lbs = lower;
    while (lbs <= upper){
        kgs = lbs * 0.453592;
        // how it prints lbs
        // at least 6 characters wide with 0 characters after the decimal point
        printf("%6.0f\t%6.2f\n", lbs, kgs);
        lbs = lbs + step;
    }
    printf("\n");


    return 0;
}