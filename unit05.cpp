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

    int my_numbers[2][3] = {
        {5, 7, 8}, // row = 0
        {3, 9, 6} // row = 1
    //  c0  c1 c2
    };
    // tinh tong cac so tren 1 dong bat ky
    int target_row = 1; // dong thu nhat
    int target_col = 0; // cot thu nhat
    int row_sum = 0; // tong cac so mac dinh
    int col_sum = 0;
    int cols = 3; // so cot mang da khai bao
    int rows = 2; // so dong mang da khai bao
    for (int j = 0; j < cols; j++) 
    {
        row_sum += my_numbers[target_row][j];
    }
    cout << "Tong cac so tren dong so " << target_row << " = " << row_sum << endl;
    for (int i = 0; i < rows; i++)
    {
        col_sum += my_numbers[i][target_col];
    }
    cout << "Tong cac so tren cot so " << target_col << " = " << col_sum << endl;

    
    int arr_numbers[4][3] = {
        {5, 7, 8}, // 0
        {3, 9, 6}, // 1
        {13, 29, 40}, // 2
        {10, 15, 20} // 3
    };
    int max_sum_row = -1; // tim so dong (chua co dong nao ca)
    int max_row_val = -1e9; // so am vo cung lon (gia tri lon nhat) = -1 ty
    for (int i = 0; i < 4; i++)
    {
        int current_row_sum = 0;
        for (int j = 0; j < 3; j++)
        {
            current_row_sum += arr_numbers[i][j];
        }
        if (current_row_sum > max_row_val)
        {
            max_row_val = current_row_sum;
            max_sum_row = i;
        }
    }
    cout << "Dong co tong lon nhat la dong so : " << max_sum_row << " Tong = " << max_row_val << endl;




    return 0;
}