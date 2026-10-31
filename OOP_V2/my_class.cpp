#include <iostream>
#include <string>

using namespace std;

class MySettings
{
    // khai bao thuoc tinh
    private: int width, height;
    public: static int count; // thuoc tinh

    public: MySettings(int width, int height)
    {
        // construct
        this->width = width;
        this->height = height;
        // gan gia tri cho thuoc tinh
        // this : object (doi tuong) noi tai trong lop
        // khong can khoi tao doi tuong ngay trong class
        // su dung this o day la phan biet thuoc tinh va tham khi bi trung ten voi nhau
    }
    public: int calculate_area()
    {
        return width * height; // khong can phai dung this de goi thuoc tinh
    }
    public: static int get_count()
    {
        return count;
    }

}; // ket thuc class