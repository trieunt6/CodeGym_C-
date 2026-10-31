#include <iostream>
#include <string>
#include "nhan_vien.cpp"

using namespace std;

// tao lop con ke thua lop cha
class NhanVienChinhThuc : public NhanVien
{
    private: double thuong;
    // goi construct cua class cha khi khai bao construct cua class con
    public: NhanVienChinhThuc(string name, double luongCB, double thuong) : NhanVien(name, luongCB)
    {
        this->thuong = thuong;
    }

    // tinh tong luong thuc linh
    public: double tinh_thu_nhap()
    {
        return luong_co_ban + thuong;
        // thuoc tinh luong_co_ban : goi tu class - khong can phai khai bao lai o class con
    }
    public: void xuat_thong_tin()
    {
        hien_thi_thong_tin(); // cua class cha
        cout << "Thuong nhan vien : " << thuong << endl;
    }

};// ket thuc class