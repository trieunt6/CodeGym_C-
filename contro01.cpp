#include <iostream>

using namespace std;

int main()
{
    // Bộ nhớ và địa chỉ (bộ nhớ)
    // Bộ nhớ (RAM) : Giống như một dãy các ô tủ đựng đồ, mỗi một ô tủ (ô nhớ) có 1 số thứ tự duy nhất gọi là "Địa Chỉ". Mỗi một ô nhớ này thường có kích thước là 1 byte
    // Các biến thông thường: Lưu trữ giá trị trực tiếp tại các ô nhớ đó. (int a, string b)
    // Biến con trỏ : là một biến đặc biệt dùng để "lưu trữ địa chỉ của một biến khác" thay vì lưu trữ giá trị trực tiếp.

    int number = 10; 
    cout << "Gia tri : " << number << endl; // 10 : gia tri cua bien
    cout << "Dia chi cua bien number : " << &number << endl; // dia chi 

    // bien con tro
    int my_number = 5;
    int* p = &my_number; // p : la 1 bien con tro luu tru dia chi cua bien my_number
    cout << p << endl; // in ra dia chi cua bien ma no da luu tru
    cout << *p << endl; // lay ra gia tri cua bien ma no tro den dia chi.
    // thay doi gia tri cua bien thong qua con tro
    *p = 20; // thay doi gia tri cua bien ma no dang tro toi(dia chi)
    cout << "gia tri moi cua bien : " << my_number << endl; // 20;
    // phai co ky hieu * dung truoc : hieu la truy cap hay xu ly voi gia tri
    // khong co dau * dang truoc : chi lam viec voi dia chi cua bien

    // Kich thuoc cua con tro
    // moi con tro se co cung kich thuoc(8 byte tren HDH 64bit) bat ke kieu du lieu ma no tro toi
    cout << sizeof(int*) << endl;
    cout << sizeof(double*) << endl;
    cout << sizeof(char*) << endl;
    // 8 byte - 8 byte - 8 byte tren HDH 64 bit

    // luu y : khi khoi tao con tro
    // int* my_p; // tao 1 mot con tro - chua luu tru dia chi cua 1 bien nao
    // khong nen xu ly theo tinh huong nay vi gay rac bo nho chuong trinh
    int* my_p = nullptr; // null pointer - chua luu tru dia chi cua bien nao
    // chung ta luon luon nen kiem tra xem con tro da luu tru dia chi cua bien chua ?
    if (my_p != nullptr)
    {
        // moi xu ly lien quan den con tro
        cout << *my_p << endl;
    }
    // int* my_p1 = NULL; // khong nen dung vi o phien ban C chu khong phai C++
    // con tro va  mang
    int arr[5] = {10, 20, 30, 40, 50};
    int* my_pointer = arr; // tro toi dia chi cua phan tu dau tien nam trong mang
    // tuong duong : my_pointer = &arr[0]; // dia chi cua phan tu dau tien
    // lay ra gia tri cua phan tu dau tien thong qua con tro ???
    // arr[0] - mang // khong phai con tro
    cout << "gia tri phan tu dau tien : " << *my_pointer << endl;
    cout << "gi tri phan tu thu 2 : " << *(my_pointer + 1) << endl;
    // 1 : vi tri phan tu trong mang
    // *(p+i) : cu phap tong quat : truy cap vao gia tri cac phan tu trong mang thong qua con tro
    // duyet mang thong qua con tro
    for (int* mp = arr; mp != arr + 5; ++mp)
    {
        cout << *mp << " ";
    }
    cout << endl;
    // Con tro voi hang so (const)
    int x = 1, y = 2; // khai bao 2 bien
    const int* p2 = &x; // con tro p2 luu "dia chi" cua bien x;
    // *p2 = 5; // dang muon sua gia tri cua bien x1 thong qu con tro p2 NHUNG con tro p2 dang la hang so (const) nen khong duoc sua.
    // tu khoa const dung dang truoc khai bao con tro
    // muon con tro p2 chuyen huong sang dia chi chi bien khac
    p2 = &y; // duoc phep
    // *p2 = 10; // van loi khong duoc thay doi gia tri cua bien y
    int* const p3 = &x; // con tro p3 luu "dia chi" cua bien x
    // tu khoa const dung sau khai bao con tro
    *p3 = 10; // thay doi gia tri binh thuong cua bien
    cout << "gia tri bien x : " << x << endl; 
    // chuyen huong con tro p3 sang dia chi bien khac
    // p3 = &y; // khong cho phep
    const int* const p4 = &x;
    //*p4 = 10; // loi - khong cho phep
    //p4  = &y; // loi - khong cho phep
    return 0;
}