#include <stdio.h>
#include <stdlib.h>

#define MAX 100

int main() {
    int n;
    int a[MAX];

    do {
        printf("Input total number of array: ");
        scanf("%d", &n);
        if (n <= 0 || n > MAX)
            printf("The total number is between %d and %d\n", 1, MAX);
    } while (n <= 0 || n > MAX);

    for (int i = 0; i < n; i++) {
        printf("a[%d]: ", i);
        scanf("%d", &a[i]);
    }

    printf("Print out the element of array\n");
    for (int i = 0; i < n; i++) {
        printf("%5d", a[i]);
    }

    int eleMinPosition=0;
    for(int i=0;i<n;i++){
        if (a[i]<a[eleMinPosition])
            eleMinPosition=i;
    }

    int eleMaxPosition=0;
    for(int i=0;i<n;i++){
        if (a[i]>a[eleMaxPosition])
            eleMaxPosition=i;
    }

    printf("\n The position of min element is %d",eleMinPosition);
    printf("\n The position of max element is %d",eleMaxPosition);

    return 0;
}
