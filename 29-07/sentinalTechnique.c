#include <stdio.h>

int main() {
    int number;

    printf("Enter a series of numbers (enter -1 to stop):\n");

    while (1) {
        scanf("%d", &number);

        if (number == -1) {
            break;  // Exit the loop when -1 is entered
        }

        // Process the number
        printf("You entered: %d\n", number);
    }

    printf("End of program.\n");

    return 0;
}
