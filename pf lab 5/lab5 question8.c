#include <stdio.h>

int main() {
    int num, result;

    printf("Enter a number: ");
    scanf("%d", &num);


    result = num ^ (1 << 1);

    printf("Number after toggling 2nd bit: %d\n", result);

    return 0;
}

