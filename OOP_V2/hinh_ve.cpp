#include <iostream>
#include "hinh_vuong.cpp"

using namespace std;

int main()
{
    HinhVuong hv(10); // khoi tao doi tuong va truyen tham so vao construct
    double s = hv.dien_tich();
    double c = hv.chu_vi();
    cout << "S = " << s << " va C = " << c << endl;
    return 0;
}