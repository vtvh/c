#include <stdio.h>

int main() {
    int ithang;
    printf("Nhap vao thang: ");
    scanf("%d", &ithang);

    if (ithang > 0 && ithang <= 12)
        switch (ithang) {
        case 1:
        case 2:
        case 3:
            printf("quy1 \n");
            break;

        case 4:
        case 5:
        case 6:
            printf("quy2 \n");
            break;

        case 7:
        case 8:
        case 9:
            printf("quy3 \n");
            break;

        case 10:
        case 11:
        case 12:
            printf("quy4 \n");
            break;

        default:
            break;
        }
}
