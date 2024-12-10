#include <stdio.h>
int factorial(int n) {
    int result = 1;
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    return result; 
}
int main() {
    int num;
    printf("Nhap so nguyen: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Khong the tinh giai thua cua so am.\n");
    } else {
        printf("Giai thua cua %d la: %d\n", num, factorial(num));
    }
    return 0;
}

