#include <stdio.h>

int main() {
    int number, result;
    printf("Enter a number: ");
    scanf("%d", &number);
    result = number % 2;
    if (result == 0) {
        printf("Even");
    } else {
        printf("Odd");
    }
}
