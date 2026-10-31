#include <iostream>
#include "hinh_hoc.cpp"

using namespace std;

class HinhVuong : public HinhHoc
{
    private: double canh;
    public: HinhVuong(double canh)
    {
        this->canh = canh;
        // construct
    }
    // tinh da hinh
    public: double dien_tich() override
    {
        // ghi de lai phuong thuc cua lop cha
        return canh * canh;
    }
    public: double chu_vi() override
    {
        return canh * 4;
    }

}; // ket thuc class