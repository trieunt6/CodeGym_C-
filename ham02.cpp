#include <iostream>
#include <string>

using namespace std;

void say_hello(string message)
{
    cout << message << endl;
    // khong can tu khoa return vi dung void
}
void xuat_mang(int array[], int n)
{
    // tham so truyen vao ham la 1 mang
    // n : so luong phan tu trong mang
    for (int i = 0; i < n; i++)
    {
        cout << "array[" << i << "] = " << array[i] << endl;
    }
}
const int COL_COUNT = 3;
void xuat_mang(int array[][COL_COUNT], int rows, int cols = COL_COUNT)
{
    // function overloading
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << "array[" << i << "][" << j << "] = " << array[i][j] << endl;
        }   
    }
}

int main()
{
    say_hello("Hello");
    say_hello("Xin chao");
    int numbers[] = {1,2,3,4,5,6,7,8,9};
    int my_number[2][COL_COUNT] = {
        {1,2,3},
        {4,5,6}
    };
    xuat_mang(numbers, 9);
    xuat_mang(my_number, 2, COL_COUNT);
    return 0;
}