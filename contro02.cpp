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

// Chua bai tap ve nha //
void find_min_max(const int* a, int n, int &min, int &max)
{
    // a : contro tro vao dia chi cua 1 mang
    // n : so luong phan tu cua mang
    // &min : tham so(tham chieu) de tim phan tu nho nhat trong mang
    // &max : tham so(tham chieu) de tim phan tu lon nhat trong mang
    min = max = *a; // gan min va max bang phan tu dau tien cua mang :  *(a+i)
    // n >= 1 : mang phai co it nhat 1 phan tu
    // duyet con tro : 
    for (const int* p = a + 1; p != a + n; ++p)
    {
        if (*p < min)
        {
            min = *p;
        }
        if (*p > max)
        {
            max = *p;
        }   
    }
}
void dao_nguoc_mang(int* my_arr, int count)
{
    // int* a; int *a // 2 cach giong nhau de khai bao con tro
    // int &n; int& n // 2 cach giong nhau de khai bao tham chieu
    // khai bao 1 con tro - tro vao phan tu dau tien trong mang (con tro trai)
    int* left = my_arr;
    // khai bao 1 con tro - tro vao phan tu cuoi trong mang (con tro phai)
    int* right = my_arr + count - 1;
    while (left < right)
    {
        // doi cho cac phan tu trong con tro
        int temp = *left; // cac phan tu dau cua mang(ben trai)
        *left = *right;
        *right = temp;
        ++left;
        --right;
    }
}

int main()
{
    int my_arr_number[] = {1,2,3,4,5,6,7,8,9};
    dao_nguoc_mang(my_arr_number, 9); // dao nguoc thu tu cac phan tu trong mang
    for (int i = 0; i < 9; i++)
    {
        cout << "my_arr_number["<< i << "] = " << my_arr_number[i] << endl;
    }
    int arr_number[5] = {7, 3, 9, -2, 5};
    int mn, mx;
    find_min_max(arr_number, 5, mn, mx); 
    // mn, mx la tham chieu nen se bi thay doi theo logic trong ham
    cout << "min = " << mn << " va max = " << mx << endl;

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