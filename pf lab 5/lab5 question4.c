#include <stdio.h>

int main() {
    int continent, country;

    printf("Select a continent:\n1. Asia\n2. Europe\n");
    scanf("%d", &continent);

    switch (continent) {
        case 1: 
            printf("Select a country in Asia:\n1. Pakistan\n2. India\n");
            scanf("%d", &country);

            switch (country) {
                case 1:
                    printf("You selected Pakistan (Asia)\n");
                    break;
                case 2:
                    printf("You selected India (Asia)\n");
                    break;
                default:
                    printf("Invalid country selection\n");
                    break;
            }
            break;

        case 2: // Europe
            printf("Select a country in Europe:\n1. France\n2. Germany\n");
            scanf("%d", &country);

            switch (country) {
                case 1:
                    printf("You selected France (Europe)\n");
                    break;
                case 2:
                    printf("You selected Germany (Europe)\n");
                    break;
                default:
                    printf("Invalid country selection\n");
                    break;
            }
            break;

        default:
            printf("Invalid continent selection\n");
            break;
    }

    return 0;
}


