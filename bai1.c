/******************************************************************************
 * Họ và tên: [Lê Minh Tường]
 * MSSV :      [PS37909]
 * Lớp:       [CS21301]
 *****************************************************************************/

//  BÀI 1: XÂY DỰNG CHƯƠNG TRÌNH TÌM GIÁ TRỊ LỚN NHẤT TRONG 3 SỐ
//  Input: Nhập từ bàn phím 3 số bất kỳ
//  Output: Xuất ra màn hình số lớn nhất trong 3 số
//  Hướng dẫn: Xây dựng hàm tìm giá trị lớn nhất trong 3 số. Hàm có giá trị trả về mà
//  giá trị lớn nhất giữa 3 số

#include <stdio.h>

// //Tạo hàm
// int tenHam(so1, so2, so3){
// int max;
// //Cách giải để tìm ra số lớn nhất
// return max;
// }

int soMax(int a, int b, int c)
{
    if (a >= b && a >= c)
    {
        return a;
    }
    else if (b >= a && b >= c)
    {
        return b;
    }
    else
    {
        return c;
    }
}

int main()
{

    // //Gọi hàm trong hàm main
    // //ví dụ
    // int soMax = temHam(3,5,10)
    int max;

    max = soMax(5, 6, 7);
    printf("Số lớn nhất trong 3 số là: %d", max);

    return 0;
}