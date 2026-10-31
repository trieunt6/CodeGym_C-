#include <iostream>
#include <string>

using namespace std;

class HinhChuNhat
{
    // 1 - hàm khởi tạo (constructor)
    // hàm này có tên trùng với tên class, không cần quy định kiểu dữ liệu trả về
    // hàm này sẽ tự động chạy khi đối tượng của class được tạo ra.
    // Được phép nạp chồng hàm (function overloding)
    private: double chieu_dai, chieu_rong; // khai bao thuoc tinh
    // khi ma khai bao phuong thuc khong chi dinh pham vi hoat dong thi mac dinh se la private
    /*
    public: HinhChuNhat()
    {
        cout << "Ham khoi tao da chay " << endl;
    }
    */
    public: HinhChuNhat() : chieu_dai(1), chieu_rong(1)
    {
        cout << "Ham khoi tao mac dinh : chieu dai = " << chieu_dai << " chieu rong = " << chieu_rong << endl;
        // gan thang gia mac dinh cho thuoc tinh
    }
    public: HinhChuNhat(double dai, double rong) : chieu_dai(dai), chieu_rong(rong)
    {
        // nap chong ham
        cout << "Ham khoi tao co tham so: Dai =  " << dai << " va Rong = " << rong << endl;
        // : chieu_dai(dai), chieu_rong(rong) : gan gia tri cho thuoc tinh
    }
    public: HinhChuNhat(double a, double b, double c)
    {
        // nap chong ham
        chieu_dai = a; // gan gia tri cho thuoc tinh
        chieu_rong = b;
        chieu_rong  = chieu_dai = c;
        cout << "Ham khoi tao co tham so dai = rong = " << c << endl;
    }

    // 2 - ham huy (destruct)
    // ~Ten_Lop : khong co tham so, khong co kieu du lieu tra ve, tu dong chay khi doi tuong cua class het vong doi hoat dong
    ~HinhChuNhat()
    {
        // ham huy
        cout << "Destruct cua class HCN da khoi chay" << endl;
    }
    // construct(khoi tao) thi tu dong chay dau tien khi khoi tao doi tuong
    // destruct(huy) thi tu dong chay cuoi cung khi doi tuong het vong doi hoat dong
    
    public: void hien_thi()
    {
        cout << " Hello " << endl;
    }

}; // cham phay de bao hieu la het class