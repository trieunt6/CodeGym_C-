#include <iostream>

using namespace std;

int main()
{
    // mang đa chiều - trong không gian 2 chiều (mảng 2 chiều)
    // mảng 2 chiều là 1 tập hợp các phần tử cùng kiểu dữ liệu, được sắp theo dạng bảng (ma trận) bao gồm các hàng và các cột.
    // trong C++, mảng 2 chiều được lưu trữ trong một khối bộ nhớ liên tục tuyến tính theo thứ tự từng hàng (bộ nhớ RAM)
    // cú pháp khai báo : data_type array_name[Rows][Cols]
    int numbers[2][3] = {
        {1, 2, 3}, // row 1 - vi tri 0
        {4, 5, 6} // row 2 - vi tri 1
    };
    // khai bao thanh cong mang 2 chieu
    // 2 : so dong cua mang (2 chieu)
    // 3 : so cot cua mang (2 chieu)
    // trong mang 2 chieu thi co khai niem : chi so theo dong va chi so theo cot de bieu dien vi tri cua phan tu
    // dong dau tien trong mang 2 chieu : 0
    // cot dau tien trong mang 2 chieu : 0
    // Truy cap vao gia tri cua 1 phan tu nam trong mang 2 chieu
    int my_number = numbers[0][2]; // 3
    cout << "number : " << my_number << endl;
    // duyet mang 2 chieu : truy cap vao tat cac phan tu nam trong mang
    for (int i = 0; i < 2; i++)
    { // vong lap de duyet qua cac hang(rows) trong mang 2 chieu
        for (int j = 0; j < 3; j++)
        {// vong lap de duyet qua cac cot (cols) trong mang 2 chieu
            cout << "numbers[" << i << "][" << j << "] = " << numbers[i][j] << endl;
        }
    }
    // cho nhap mang 2 chieu tu ban phim, sau do in mang vua nhap ra !
    int rows; // so dong cua mang 2 chieu can nhap
    int cols; // so cot cua mang 2 chieu can nhap
    cout << "==== Nhap so hang va so cot cua mang 2 chieu =====" << endl;
    // rows : > 0 (1-10); cols > 0 (1- 10)
    cout << "Xu ly nhap so dong cho mang 2 chieu " << endl;
    do 
    {
        cout << "Nhap so dong (1-10)" << endl;
        cin >> rows;
        if(cin.fail() || rows < 0 || rows > 10)
        {
            cout << "So dong tu 1 - 10" << endl;
        }
    } while(rows < 0 || rows > 10);
    cout << "Xu ly nhap so cot cho mang 2 chieu " << endl;
    do
    {
        cout << "Nhap so cot (1-10)" << endl;
        cin >> cols;
        if(cin.fail() || cols < 0 || cols > 10)
        {
            cout << "So cot tu 1 - 10" << endl;
        }
    } while(cols < 0 || cols > 10);
    int my_arr[rows][cols]; // khoi tao mang chua gan gia tri
    // cho nhap mang tu ban phim
    cout << "Nhap cac gia tri phan tu vao trong mang " << endl;
    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < cols; j++)
        {
            cout << "my_arr[" << i << "][" << j << "] = "; 
            cin >> my_arr[i][j]; // nhap tu ban phim
        }
    }
    // xuat mang vua nhap
    cout << "Mang vua nhap la : " << endl;
    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < cols; j++)
        {
            cout << "my_arr[" << i << "][" << j << "] = " << my_arr[i][j] << endl; 
        }
    }
    return 0;
}