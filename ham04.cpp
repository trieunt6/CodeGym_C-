#include <iostream>

using namespace std;

// thuc hanh kien thuc Mang + Ham
// ky thuat sap xep mang trong C++
// thuat toan : sap xep noi bot (Bubble Sort)
// Nội dung của thuật toán(cách hoạt động) : Thuật này sẽ liê tục so sánh 2 phần tử cạnh nhau. Nếu chúng đứng sai thứ tự(VD : phần tử trước lớn hơn phần tử sau), ta tiến hành đổi chỗ chúng cho nhau. Công việc cứ lặp đi lặp lại đến khi nào mảng được sắp xếp theo 1 trật tự logic.

// tien hanh sap xep cho mang 1 chieu trong C++
void bubble_sort(int arr[], int n)
{
    // arr : mang can sap xep thu tu
    // n : so luong phan trong mang arr
    for (int i = 0; i < n - 1; i++) 
    {
        // duyet tu dau mang den phan tu gan cuoi cung
        bool swapped = false; // mang da duoc sap xep xong hay chua ?
        // vòng lặp duyệt qua các phần tử chưa được sắp xếp
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j+1]) 
            {
                // phan tu dung truoc lon hon phan tu dung sau thi doi cho(sap xep tang dan)
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                swapped = true; // doi vi tri xong
            }
        }
        // neu nhu khong con viec doi cho thu tu cac phan tu nua thi thoat vong lap
        if(!swapped)
        {
            break;
        }
    }
}

// thuat toan tim kiem phan tu trong mang
// Tim kiem tuyen tinh : tim vi tri cua phan tu trong mang ( 0 - (n-1))
// cac hoat dong: duyet mang, kiem tra xem cac phan tu trong mang co bang phan tu can tim hay khong va tra ve vij tri cua phan tu do.
int tim_kiem_tuyen_tinh(int arr[], int count, int element)
{
    // arr : mang chua cac phan tu
    // element : phan tu can kiem tra xem no co nam trong mang hay ko ?
    // count : so luong phan tu trong mang
    int postion = -1; // vi tri cua phan tu can tim trong mang 
    // duyet mang de kiem tra xem phan can tim co nam trong mang khong ?
    for (int i = 0; i < count; i++)
    {
        if (arr[i] == element)
        {
            postion = i; // tim vi tri cua phan tu
            break; // thay roi khong tim nua va thoat vong lap
        }
    }
    return postion; // tra ve -1 : khong tim thay phan tu
}

int main()
{
    int my_arr[] = {64, 25, 12, 22, 10, 40};
    // ky thuat : kiem tra tu dong so luong phan tu trong mang
    int count_element = sizeof(my_arr) / sizeof(my_arr[0]); // mang co bao nhieu phan tu
    bubble_sort(my_arr, count_element);
    cout << "Mang sau khi duoc sap xep la " << endl;
    for(int i = 0; i < count_element; i++)
    {
        cout << my_arr[i] << " "; // in tren 1 dong, cach phan tu cach nhau khoang trang
    }
    cout << endl;

    int my_arr2[] = {64, 25, 12, 22, 10, 40};
    int count = sizeof(my_arr2) / sizeof(my_arr2[0]);
    int element = 12;
    int pos = tim_kiem_tuyen_tinh(my_arr2, count, element);
    if(pos == -1)
    {
        cout << "Phan tu " << element << " khong tim thay trong mang" << endl;
    }
    else 
    {
        cout << "Phan tu " << element << " tim thay trong mang o vi tri " << pos << endl;
    }
    return 0;
}