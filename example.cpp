#include <iostream>
#include "example01.cpp" // su dung file khac

using namespace std;

int main()
{
    // trong nay chi co ham main de chay
    // khong xu ly logic o day
    // day la file chay chinh chuong trinh
    int arr[] = {1,2,3,4,5};
    int count = 5;
    nhan_doi_mang(arr, count);
    for (int i = 0; i < count; i++)
    {
        cout << "arr[" << i << "] = " << arr[i] << "; ";
    }
    cout << endl;

    int number[] = {-2, 5, -8, 3, -11};
    int n = 5;
    xu_ly_so_am_trong_mang(number, n);
    for (int i = 0; i < n; i++)
    {
        cout << "number[" << i << "] = " << number[i] << "; ";
    }
    cout << endl;
}
