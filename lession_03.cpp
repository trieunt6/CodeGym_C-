#include <iostream>

using namespace std;

int main(){
    // Tim hieu ve cau truc dieu kien trong C++
    // ban chat la yeu cau may tinh ra duoc cac quyet dinh xu ly cac tinh huong khac nhau
    int my_age = 16;
    if(my_age >= 18){
        cout << "Ban du tuoi de hoc lai xe may va oto " << endl;
    } else {
        cout << "Ban chua du tuoi de duoc phep dang ky hoc lai xe may va oto" << endl;
    }
    // if : keyword(tu khoa - bat buoc phai ghi nho va viet chinh xac)
    // () : cu phap bieu dien dieu cho if : my_age >= 18 (bieu thuc dieu kien)
    // { } : cu phap xu ly logic cho dieu kien
    // Neu bieu thuc dieu kien la DUNG(true) thi se thuc thi lenh ben trong dau {}
    // Neu bieu thuc dieu kien la SAI(false) thi se khong thuc thi lenh ben trong dau {}
    // else : keyword (tu khoa) va se thuc thi lenh ben trong {} neu ma bieu thuc dieu kien trong if la SAI (false)

    float my_point = 17.5;
    // thong bao xep loai hoc luc cua sinh vien : kem - trung binh - kha - gioi
    // 0 - < 5.0 : kem
    // 5. 0 < 7.0 : trung binh
    // 7.0 < 9.0 : kha
    // >= 9.0 : gioi
    // xu ly if..else dang bac thang (if .. else nhieu dieu kien re nhanh)
    if (my_point < 5.0 && my_point >= 0) {
        cout << "Hoc luc Kem" << endl;
    } else if (my_point >= 5.0 && my_point < 7.0) {
        cout << "Hoc luc trung binh" << endl;
    } else if (my_point >= 7.0 && my_point < 9.0) {
        cout << "Hoc luc kha" << endl;
    } else if (my_point >= 9.0 && my_point <= 10) {
        cout << "Hoc luc gioi" << endl;
    } else {
        cout << "Diem nhap vao kiem tra khong hop le" << endl;
    }
    // if.. else long nhau (nested)
    // xu ly giai bai tap phuong trinh bac nhat : ax + b = 0
    float hsa = 3;
    float hsb = -6;
    // 3x - 6 = 0;
    if (hsa == 0) {
        // 0x + b = 0;
        if (hsb == 0) {
            // if long nhau (nested)
            // 0x + 0 = 0
            cout << "PT Vo so nghiem" << endl;
        } else {
            // hsb != 0 ~ 0x +b = 0
            cout << "PT Vo nghiem" << endl;
        }
    } else {
        // hsa != 0
        float result = -hsb / hsa;
        cout << "Phuong trinh co nghiem la : " << result << endl;
    }

    return 0;
}