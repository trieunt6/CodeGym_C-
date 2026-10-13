#include <iostream>

using namespace std;

int main()
{
    int numbers[3][3] = {
        {5, 6, 2}, // r = 0, c = 2 == r + c = n - 1 (n = 3 so dong hay so cot)
        {1, 8, 3}, // r = 1, c = 1 == r + c = n - 1
        {9, 4, 7} // r = 2, c = 0 == r + c = n - 1
    };
    // tính tổng các phần trên đường chéo chính của mảng 2 chiều : 5 + 8 + 7
    // tính tổng các phần trên đường chéo phụ của mảng 2 chiều : 2 + 8 + 9
    // cac phan tu nam tren duong cheo chinh i = j (so hang == so cot)
    int main_diag_sum = 0; // tong cac phan tu tren duong cheo chinh
    int sub_diag_sum = 0; // tong cac phan tu tren duong cheo phu
    // duyet mang 
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            if(i == j)
            {
                main_diag_sum += numbers[i][j]; // tong duong cheo chinh
                // main_diag_sum = main_diag_sum + numbers[i][j];
            }
            if( i + j == 2)
            {
                sub_diag_sum += numbers[i][j]; // tong duong cheo phu
            }
        }
    }
    cout << "Tong cac so tren duong cheo chinh  = " << main_diag_sum << endl;
    cout << "Tong cac so tren duong cheo phu = " << sub_diag_sum << endl; 
    // van mang ben tren : Tim phan tu co gia tri nho nhat trong mang ? cho biet vi tri cua phan tu nam o dong so may va cot so may ?
    // numbers[0][0]
    // lam tuong tu cho phan tim phan tu Lon nhat trong mang ? cho biet vi tri cua phan tu nam o dong so may va cot so may ?
    // --------------- Them bai tap ve nha ------------------------
    // Tao 1 mang 2 chieu tu ban phim(xem lai code da lam)
    // tinh tong cac so tren 1 dong bat ky nhap tu ban phim
    // tinh tong cac so tren 1 cot bat ky nhap tu ban phim
    // Tim dong co tong cac so cos gia tri lon nhat (nam dong so may ) ? tuong tu lam cho cot.



    return 0;
}