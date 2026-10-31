#include <iostream>
#include <string>
#include "nhan_vien_chinh_thuc.cpp"

using namespace std;

int main()
{
    NhanVienChinhThuc nv1("Nguyen Van A", 300, 150);
    NhanVienChinhThuc nv2("Nguyen Van B", 450, 200);
    nv1.xuat_thong_tin();
    nv2.xuat_thong_tin();
    double thu_nhap_nv1 = nv1.tinh_thu_nhap();
    double thu_nhap_nv2 = nv2.tinh_thu_nhap();
    cout << "Thu nhap cua NV1 : " << thu_nhap_nv1 << endl;
    cout << "Thu nhap cua NV2 : " << thu_nhap_nv2 << endl;


    return 0;
}