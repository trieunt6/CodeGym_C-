#include <iostream>
#include "hinh_chu_nhat.cpp"

using namespace std;

int main()
{
    HinhChuNhat hcn; // () chay ham khoi tao khi co tham so
    // khi tao doi tuong - lap tuc constructor se chay
    HinhChuNhat hcn_v2(10, 20);
    // 10 : gia tri cho tham so dai
    // 20 : gia tri cho tham so rong
    HinhChuNhat hcn_v3(5, 6, 7); // 5,6,7 gia tri cua 3 tham so a,b,c
    // goi phuong thuc
    hcn.hien_thi();

    
    return 0;
}
