#include <stdio.h>

int main() {
    const float PI = 3.14159; 
    float banKinh, chuVi, dienTich;
    
    printf("Nhap ban kinh hinh tron: ");
    scanf("%f", &banKinh);

    chuVi = 2 * PI * banKinh;

    dienTich = PI * banKinh * banKinh;

    printf("Chu vi hinh tron = %.2f\n", chuVi);
    printf("Dien tich hinh tron = %.2f\n", dienTich);

    return 0;
}
