#include <stdio.h>

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

  
    printf("Left shift by 1: %d << 1 = %d\n", num, num << 1);

    
    printf("Left shift by 2: %d << 2 = %d\n", num, num << 2);


    printf("Right shift by 1: %d >> 1 = %d\n", num, num >> 1);

    
    printf("Right shift by 2: %d >> 2 = %d\n", num, num >> 2);

    return 0;
}

