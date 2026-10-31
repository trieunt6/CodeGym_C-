#include <iostream>

using namespace std;

class HinhHoc
{
    public: virtual double dien_tich() = 0; // empty method
    public: virtual double chu_vi() = 0;

    // tranh bi ro ri bo nho khi huy con tro cua lop cha
    public: virtual ~HinhHoc(){} // destruct rong
};// ket thuc class