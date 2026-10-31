#include <iostream>
#include "my_class.cpp"

using namespace std;

int MySettings::count = 100; // su dung ten class de truy cap vao thuoc tinh static
// :: cu phap truy cap vao thuoc tinh static
// int MySettings::get_count(); // loi
int main()
{
    MySettings setting(100, 200);
    int dt = setting.calculate_area(); // non-static
    cout << " DT la : " << dt << endl;
    // int c = setting.count = 10; // count : thuoc tinh static nen khong duoc dung doi tuong de truy cap.
   // int c = MySettings::count = 10; // c++17 tro len
    cout << "count = " << MySettings::count << endl;
    
    int my_count = MySettings::get_count(); // phuong thuc static - khong can su dung doi tuong de truy cap
    // setting.get_count(); // khong lam nhu the nay
    cout << my_count << endl;

    return 0;
}