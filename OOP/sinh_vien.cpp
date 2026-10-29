#include <iostream>
#include <string>

using namespace std;

// khai bao class trong lap trinh huong doi tuong
// Lớp(class) : là tập hợp của nhiều các đối tượng lại với nhau, các đối tượng đó cùng chung (giống nhau) về các thuộc tính và phương thức
// thuộc tính : đặc điểm tính chất của đối tượng (miêu tả bằng tính từ và danh từ)
// phương thức : hành vi - hành động của đối tượng (miêu tả bằng các động từ)
// Đối tượng : là các thực thể tồn tại ngoài tự nhiên
class SinhVien 
{
    // class : tu khoa de khai bao 1 lop
    // SinhVien: ten lop(tu khai bao - viet hoa cac chu cai dau tien len)

    // khai bao thuoc tinh
    public:
        string ho_ten;
        int tuoi;
        double diem_thi;
    // ban chat thuoc tinh co the hieu la cac bien trong lap trinh
    // public : tu khoa de khai bao pham vi hoat dong cua thuoc tinh
    // tu khoa "public" : cho phep co the truy cap tu ben ngoai class vao thuoc tinh
    private:
        string my_love;
        double my_money;
    // private : tu khoa de khai bao pham vi hoat dong cua thuoc tinh - thuoc tinh chi duoc goi va su dung noi bo trong class ma thoi.
    protected:
        string email;
        string dia_chi;
    // protected: tu khoa de khai bao pham vi hoat dong cua thuoc tinh - thuoc tinh nay chi duoc goi va su dung noi bo trong class va cac class con ke thua no

    // khai bao phuong thuc
    public:
        void hien_thi_thong_tin()
        {
            cout << "Ho Ten : " << ho_ten << " - Tuoi : " << tuoi << " - Diem Thi :" << diem_thi << endl;
        }
        void set_my_love(string love)
        {
            // setter : gan gia tri cho thuoc tinh thong qua phuong thuc
            my_love = love;
        }
        string get_my_love()
        {
            // getter : lay gia tri cua thuoc tinh thong qua phuong thuc
            return my_love;
        }
    // phuong thuc ban chat co the hieu la ham thanh vien (member function)
    // public : tu khoa de khai bao pham vi hoat dong cua phuong thuc
    // tu khoa "public" : cho phep co the truy cap tu ben ngoai class vao phuong thuc

}; // khai bao thanh cong 1 class