#include <stdio.h>

void floatPointTypes(void) {
    puts("The size of the floating point types:");
    
    printf("The size of float %lu bytes \n", sizeof(float));
    printf("The size of double char %lu bytes \n", sizeof(double));
    printf("The size of long double char %lu bytes \n", sizeof(long double));
    
    float floatNumber = 2.0/3.0;
    double doubleNumber = 2.0/3.0;
    long double longDoubleNumber = 2.0/3.0;
    
    puts("Print out results:"); // 6 decimals default
    printf("The float number is %f\n", floatNumber);
    printf("The double number is %lf\n", doubleNumber);
    printf("The long double number is %Lf\n", longDoubleNumber);
    
    puts("Print out 4 decimals: ");
    printf("The float number is %1.4f\n", floatNumber);
    printf("The double number is %1.4lf\n", doubleNumber);
    printf("The long double number is %1.4Lf\n", longDoubleNumber);
    
    puts("Print out 10 decimals, the precise changes ");
    printf("The float number is %1.10f\n", floatNumber);
    printf("The double number is %1.10lf\n", doubleNumber);
    printf("The long double number is %1.10Lf\n", longDoubleNumber);
    
    puts("Print out 30 decimals, the precise changes ");
    printf("The float number is %1.30f\n", floatNumber); //precision 6 decimals
    printf("The double number is %1.30lf\n", doubleNumber); //precision 15 decimals
    printf("The long double number is %1.30Lf\n", longDoubleNumber); //precision 19 decimals

}
