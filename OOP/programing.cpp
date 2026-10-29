#include <iostream>
#include "sinh_vien.cpp" // su dung class SinhVien

using namespace std;

int main()
{
    // khai bao - khoi tao doi tuong thuoc vao class SinhVien
    SinhVien sv_it; // doi tuong sinh vien CNTT
    SinhVien sv_ck; // doi tuong sinh vien Co Khi
    // co the tao nhieu doi tuong khaac nhau thuoc vao 1 class

    // truy cap vao thuoc tinh cua class SinhVien
    sv_it.ho_ten = "Nguyen Thanh Trieu"; // xu ly voi thuoc tinh(truy cap va gan gia tri)
    // sv_ck.ho_ten = "Nguyen Van B"; // hoan toan duoc
    sv_it.tuoi = 20;
    sv_it.diem_thi = 8.5;
    // vi cac thuoc tinh nay dang duoc khai bao o pham vi la "public" trong class SinhVien nen chung co the hoat dong hay cho phep truy cap tu ben ngoai class SinhVien

    // truy cap vao phuong thuc
    sv_it.hien_thi_thong_tin(); // () cu phap de chay ham(thuc thi ham)
    // pham vi hoat dong cua method (hien_thi_thong_tin) la public

    // sv_ck.my_love = "Thi No"; // loi - vi my_love la private
    // sv_ck.dia_chi = "Ha Noi"; // loi - vi dia_chi la protected
    // vi private va protected khong the cho truy cap tu ben ngoai class
    sv_ck.set_my_love("Thi No"); // setter
    string love = sv_ck.get_my_love(); // getter
    cout << "My love is " << love << endl;

    return 0;
}