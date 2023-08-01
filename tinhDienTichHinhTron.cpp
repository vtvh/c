#include <stdio.h>

#define PI 3.14

int main() {
    float chuVi, dienTich;

    printf("Moi nhap ban kinh hinh tron: ");
    scanf("%f", &chuVi);

    dienTich = PI * chuVi * chuVi;
    printf("Dien tich hinh tron la: %0.4f", dienTich);
    printf("\n");
}
