#include <iostream>

using namespace std;

int main(){
    // kiem tra do dai cua 3 canh co tao thanh mot tam giac hay khong ?
    // a, b, c : a + b > c && b + c > a && a + c > b (**)
    // input : du lieu dau vao ? doi dai 3 canh
    int canh_thu_nhat = 3;
    int canh_thu_hai = 4;
    int canh_thu_ba = 5;
    // output ? thong bao co tao thanh 1 tam giac hay ko ?
    // thuat toan(cach giai quyet van de) (**)
    if ( canh_thu_nhat + canh_thu_hai > canh_thu_ba
        && canh_thu_hai + canh_thu_ba > canh_thu_nhat
        && canh_thu_nhat + canh_thu_ba > canh_thu_hai) {
        cout << "Do dai 3 canh tren tao thanh mot tam giac " << endl;
    } else {
        cout << "Do dai 3 canh tren khong tao thanh 1 tam giac " << endl;
    }
    // kiem tra 1 nam duong lich co phai la nam nhuan hay ko ?
    // 1 nam duong lich : co 366 ngay - ngay 29/02.
    // chu ky : cu 4 nam thi lap lai 1 lan
    // thuat toan : 1 nam ma chia het cho 400 => nam nhuan DL hoac
    // 1 nam chia het cho 4 nhung khong chia het cho 100 => nam nhuan DL
    // input : nhap vao 1 nam duong lich de kiem tra
    // output : thong bao xem nam do co phai la nam nhuan DL hay ko?
    int year = 2032;
    if ( (year % 400 == 0) || (year % 4 == 0 && year % 100 != 0) ) {
        cout << "Nam " << year << " la nam nhuan DL " << endl;
    } else {
        cout << "Nam " << year << " khong phai la nam nhuan DL " << endl;
    }
    // viet chuong trinh kiem tra 1 so la so chan hay so le ?
    // phai su dung den if...else
    // alias cua if...else : ban chat la cach viet khac cua if...else
    int number1 = 9;
    int number2 = 10;
    int number3 = (number2 - number1 < number1 - number2) ? number1 : number2;
    // toan tu dieu kien trong C++(toan tu 3 ngoi)
    cout << number3 << endl; // 10
    int number4;
    if (number2 - number1 < number1 - number2) {
        number4 = number1;
        // xu ly logic o day ?
    } else {
        number4 = number2;
    }
    cout << number4 << endl; // 10

    int a = 4;
    int b = 5;
    int c = (a % b > b % a) ? ( a+b < b+a ? a : b) : ( b-a > a-b ? b : a);
    //  c = 5
    cout << c << endl;
    // bieu dien lai bang su dung  if...else
    int d;
    if (a % b > b % a) {
        if (a+b < b+a) {
            d = a;
        } else {
            d = b;
        }
    } else {
        if (b-a > a-b) {
            d = b;
        } else {
            d = a;
        }
    }
    cout << d << endl;

    return 0;
}