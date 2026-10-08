#include <iostream>

using namespace std;

int main()
{
    // tao ra 1 menu nhieu lua chon don gian
    // yeu cau : viet chuong trinh tao menu tinh toan don gian.
    // chay lap di lap cho den khi nguoi dung chon thoat (bam phim so 0 tren ban phim)
    int lua_chon; // phim chon
    // nhap 1 : tinh tong 2 so
    // nhap 2 : tinh hieu 2 so
    // nhap 3 : tinh tich 2 so
    // nhap 4 : tinh thuong 2 so
    double number1, number2; // so nguoi dung nhap tu ban phim
    do
    {
        cout << "========== MENU TINH TOAN =============" << endl;
        cout << "1. Tinh tong hai so " << endl;
        cout << "2. Tinh hieu hai so " << endl;
        cout << "3. Tinh tich hai so " << endl;
        cout << "4. Tinh thuong hai so " << endl;
        cout << "0. Thoat chuong trinh " << endl;
        cout << "Moi ban bam chon cac phim chuc nang" << endl;

        cin >> lua_chon; // nhap tu ban phim cac so
        if (lua_chon == 0)
        {
            cout << "Thoat ung dung" << endl;
            break; // thoat khoi vong lap
        }
        cout << "Moi nhap so thu nhat " << endl;
        cin >> number1;
        cout << "Moi nhap so thu hai " << endl;
        cin >> number2;
        // kiem tra xem nguoi da bam phim nao ?
        switch(lua_chon)
        {
            case 1:
            cout << "Tong cua 2 so " << number1 << " + " << number2 << " = " << number1 + number2 << endl;
            break; // xu ly cho switch ...
            case 2:
            cout << "Hieu cua 2 so " << number1 << " - " << number2 << " = " << number1 - number2 << endl;
            break;
            case 3:
            cout << "Tich cua 2 so " << number1 << " x " << number2 << " = " << number1 * number2 << endl;
            break;
            case 4:
            cout << "Thuong cua 2 so " << number1 << " / " << number2 << " = " << number1 / number2 << endl;
            break;
            default:
            cout << "Lua chon cua ban khong hop le " << endl;
        }
        
    } while (lua_chon != 0); // khi bam so 0 thi dung vong lap

    return 0;
}