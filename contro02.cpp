#include <iostream>

using namespace std;

// con tro lam viec voi tham so trong ham
// viet ham doi cho thu tu cua 2 so
// nhap vao ham 2,3 chay ham in ra 3,2 (doi vi tri)
// su dung tham so kieu tham tri
void doi_cho_v1(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
    // tham tri nen chi xu ly trong noi bo trong ham
}
void doi_cho_v2(int* n, int* m)
{
    // tham so la con tro : n, m
    int t = *n;
    *n = *m;
    *m = t;
    // doi cho cho n va m
}
// viet ham - tinh tong cac so trong mang 1 chieu bang con tro
int tinh_tong_cac_so(int* my_arr, int n)
{
    // tham so truyen vao trong ham se co la con tro
    int sum  = 0;
    for(int i = 0; i < n; i++)
    {
        sum += *(my_arr + i);
    }
    return sum;
}
// 3 Bài tập về nhà.
// bài 1: Tìm phân từ lớn nhất trong mảng 1 chiều chứa các số bằng con trỏ. // max
// bài 2: Tìm phân từ nhỏ nhất trong mảng 1 chiều chứa các số bằng con trỏ. // min
// bài 3: Đảo ngược thứ tự các số trong mảng 1 chiều bằng con trỏ. {1,2,3} => {3,2,1}
int main()
{
    int arr[5] = {10, 20, 30, 40, 50};
    int sum = tinh_tong_cac_so(arr, 5);
    cout << "Tong cac so trong mang la : " << sum << endl;

    int x = 1, y = 2;
    doi_cho_v1(x, y);
    cout << x << " - " << y << endl; // xem x va y co bi doi cho nhau theo logic trong ham khong ? // khong vi tham so truyen vao theo kieu tham tri

    doi_cho_v2(&x, &y); // truyen la dia cua bien - khong phai truyen vao gia tri
    cout << x << " - " << y << endl;
    // bien x va bien y bi thay doi theo logic trong ham

    return 0;
}