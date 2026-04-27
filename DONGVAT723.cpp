#include <stdio.h>

int main() {
    int choice;
    float money, total = 0;
 // NEW: lưu danh sách chi tiêu
    float expenses[100];
    int count = 0;
    do {
        printf("\n===== QUAN LY CHI TIEU =====\n");
        printf("1. Them chi tieu\n");
        printf("2. Xem tong chi tieu\n");
        printf("0. Thoat\n");
        printf("Chon: ");
        scanf("%d", &choice);

        if (choice == 1) {
            printf("Nhap so tien: ");
            scanf("%f", &money);
            total = total + money;
        }
        else if (choice == 2) {
            printf("Tong chi tieu: %.2f\n", total);
        }

    } while (choice != 0);

    return 0;
}
