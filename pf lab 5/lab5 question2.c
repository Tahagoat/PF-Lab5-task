#include <stdio.h>

int main() {
    int age;
    char gender;

    printf("Enter age: ");
    scanf("%d", &age);

    printf("Enter gender (m/f): ");
    scanf(" %c", &gender);  

    if (age >= 18) {
        if (gender == 'm' || gender == 'M') {
            printf("Adult Male\n");
        } else if (gender == 'f' || gender == 'F') {
            printf("Adult Female\n");
        } else {
            printf("Invalid gender input\n");
        }
    } else {
        printf("Minor\n");
    }

    return 0;
}

