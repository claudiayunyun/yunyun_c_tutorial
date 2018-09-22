#include <stdio.h>

void integerTypes(void) {
    puts("The size of the integer types:");
    
    printf("The size of char %lu bytes \n", sizeof(char));
    printf("The size of unsigned char %lu bytes \n", sizeof(unsigned char));
    printf("The size of signed char %lu bytes \n", sizeof(signed char));
    printf("The size of int %lu bytes \n", sizeof(int));
    printf("The size of unsigned int %lu bytes \n", sizeof(unsigned int));
    printf("The size of short %lu bytes \n", sizeof(short));
    printf("The size of unsigned short %lu bytes \n", sizeof(unsigned short));
    printf("The size of long %lu bytes \n", sizeof(long));
    printf("The size of unsigned long %lu bytes \n", sizeof(unsigned long));
    
    printf("The size of void %lu bytes \n", sizeof(void));
}
