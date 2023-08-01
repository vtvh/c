#include <stdio.h>
#include <stdlib.h>

#define ARR_LEN 3

int main() {
    int array[ARR_LEN];
    int i, total, high;

    for (i = 0; i < ARR_LEN; i++) {
        printf("Nhap phan tu thu %d: ", i + 1);
        scanf("%d", &array[i]);
    }

    // TIm so lon nhat trong mang
    high = array[0];
    for (i = 1; i < ARR_LEN; i++)
        if (array[i] > high)
            high = array[i];

    printf("so lon nhat: %d",high);

    // TInh gia tri trung binh cua mang
    for ( i = 0,total=0; i < ARR_LEN; i++)
        total+=array[i];

    printf("\ngia tri trung binh cua mang: %.1f", (float) (total/ARR_LEN));


    return 0;
}
