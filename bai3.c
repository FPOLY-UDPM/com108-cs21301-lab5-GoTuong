/******************************************************************************
 * Họ và tên: [Lê Minh Tường]
 * MSSV :      [PS37909]
 * Lớp:       [CS21301]
 *****************************************************************************/

//  BÀI 3: XÂY DỰNG HÀM HOÁN VỊ
//  Input: Nhập vào từ bàn phím 2 giá trị a,b
//  Output: hoán vị 2 giá trị của a và b
//  Hướng dẫn thực hiện:
//  Xây dựng hàm hoán vị sử dụng con trỏ và gọi hàm theo tham chiếu

#include <stdio.h>

// Tạo hàm
void hamSwap(int *a, int *b)
{
    int thung = *a;
    *a = *b;
    *b = thung;
}

int main()
{
    int a, b;

    printf("Nhập a: ");
    scanf("%d", &a);

    printf("\nNhập b: ");
    scanf("%d", &b);
    // //Gọi hàm trong hàm main
    hamSwap(&a, &b);
    printf("\nSau hoán vị a = %d", a);
    printf("\nSau hoán vị b = %d", b);
    return 0;
}
