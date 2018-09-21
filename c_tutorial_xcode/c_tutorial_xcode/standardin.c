#include <stdio.h>

int standardin(void) {
    int aNumber;
    
    printf("Please enter a number: ");
    scanf("%d", &aNumber);
    printf("You enter: %d\n", aNumber);
    getchar(); 
    
    return 0;
}
