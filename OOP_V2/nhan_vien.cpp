#include <iostream>
#include <string>

using namespace std;

// lop cha - base class
class NhanVien
{
    protected:
        string ho_ten;
        double luong_co_ban;

    public: NhanVien(string name, double luong)
    {
        // construct
        ho_ten = name;
        luong_co_ban = luong;
    }
    public: void hien_thi_thong_tin()
    {
        cout << " Ho Ten: " << ho_ten << " | Luong CB : " << luong_co_ban << endl;
    }

}; // ket thuc class