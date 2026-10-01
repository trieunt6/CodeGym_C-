#include <iostream>

using namespace std;

int main() {
    // tim hieu ve cau truc switch ... case
    // kiem tra 1 thang co bao nhieu ngay
    int month = 9; // thang co the thay doi tu 1 den 12
    switch(month) {
        case 1: // so sanh month == 1 ?
        cout << "31 days" << endl; // logic xu ly ???
        break; // dung(khong thuc cau lenh ben duoi) thoat khoi khoi lenh switch
        case 2: // so sanh month == 2 ?
        cout << "28 days" << endl;
        break;// dung(khong thuc cau lenh ben duoi) thoat khoi khoi lenh switch
        // cac thang khac
        case 12: // so sanh month == 12 ?
        cout << "31 days" << endl;
        break;// dung(khong thuc cau lenh ben duoi) thoat khoi khoi lenh switch
        default: // khong roi cac truong ben tren thi mac dinh chay vao day(default)
        cout << "Thang chi ton tai tu 1 den 12, ban nhap ko dung" << endl;
        break;// dung(khong thuc cau lenh ben duoi) thoat khoi khoi lenh switch
    }
    // duyet - chay lan luot tu 1 den 10;
    // anh kiem tra dau la so dau tien chia het cho 3 va in ra ngay (khong can in cac so khac)
    for(int run = 1; run <= 10; run++){
        if (run % 3 == 0){
            cout << run << endl;
            break; // thoat khoi vong lap - khong chay cau lenh ben duoi trong vong lap for
        }
        cout << run << endl; // 1, 2;
        // khong bao gio in ra 4,5,....
    }


    return 0;
}