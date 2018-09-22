#include <stdio.h>

int standardin(void) {
    int aNumber;
    float aFloat;
    double aDouble;
    
    printf("Please enter a number: ");
    scanf("%d", &aNumber);
    printf("You enter: %d\n", aNumber);
    getchar();
    
    printf("Please enter a float number: "); // 0.11
    scanf("%f", &aFloat);
    printf("You enter: %f\n", aFloat);  // Float default 6 decimals, 0.110000
    getchar();
    
    printf("Please enter a number: "); // 3.1415926
    scanf("%lf", &aDouble);
    printf("You enter: %lf\n", aDouble); // Double default 6 decimals, rounded, 3.141593
    getchar();
    return 0;
}
