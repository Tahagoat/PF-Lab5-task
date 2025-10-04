#include <stdio.h>

int main() {
    int i, j;

    printf("Enter what do you want to select \n1. Mobile \n2. Laptop\n");
    scanf("%d", &i);

    switch (i) {
        case 1:  // Mobile
            printf("Enter which mobile company you will prefer\n1. Samsung\n2. Apple\n");
            scanf("%d", &j);

            switch (j) {
                case 1:
                    printf("Samsung smartphones are good\n");
                    break;
                case 2:
                    printf("Apple smartphones are better\n");
                    break;
                default:
                    printf("Invalid selection\n");
                    break;
            }
            break;

        case 2:  // Laptop
            printf("Enter which laptop company you will prefer\n1. Dell\n2. HP\n");
            scanf("%d", &j);

            switch (j) {
                case 1:
                    printf("Dell laptops are good\n");
                    break;
                case 2:
                    printf("HP laptops are better\n");
                    break;
                default:
                    printf("Invalid selection\n");
                    break;
            }
            break;

        default:
            printf("Invalid selection\n");
            break;
    }

    return 0;
}

