#include <iostream>
#include <string>

using namespace std;

#define BASIC_SALARY 300
// #define: keyword khai bao hang so
// BASIC_SALARY: Ten cua hang so
// 300 : gia tri cua hang so
// Hang so : gia tri cuano khong bi thay doi trong suot qua trinh thuc thi.

int main(){
    // xy ly logic code o day
    // khai bao 1 bien luu tru ho ten
    string full_name, first_name = "Nguyen Thanh Trieu";
    // khai bao 1 bien luu tru tuoi
    int my_age = 20;
    // khai bao 1 bien de luu tru dia chi
    string my_address = "Ha Noi"; // su dung nhay kep
    // int a; // khong nen viet
    // int b; // khong nen viet
    bool checking = true;
    char letter = 'A'; // su dung dau nhay ''
    float my_point = 8.9; // so thuc
    double my_money = 100.534; // so thuc

    cout << full_name << endl; // in ho ten
    cout << my_money << endl; // in so tien
    cout << "Luong co ban : " << BASIC_SALARY << endl;
    // su dung tu khoa constant de khai bao hang so
    const double PI = 3.14; // hang so
    cout << "Gia tri cua so PI : " << PI << endl;
    // PI = 3.56; // error : khong duoc phep thay doi gia tri cua hang so
    // uu tien su dung tu khoa const khai bao hang so (han che dung #define)

    int number1 = 4;
    int number2 = 9;
    int result = number2 % number1; // phep chia lay phan du (chi ap dung cho so nguyen)
    cout << result << endl;
    cout << (number1 + number2) << endl; // phep cong
    cout << (number2 - number1) << endl; // phep tru
    // = : phep gan gia tri
    // == : phep so sanh
    bool kiem_tra = number1 == number2; // so sanh so number1 co bang so number2 ko?
    cout << kiem_tra << endl; // 0 - false : bang nhau la sai
    bool kiem_tra2 = number1 != number2; //
    cout << kiem_tra2 << endl; // 1 - true : dung la khong bang nhau
    int number3 = 9;
    int number4 = 10;
    bool kiem_tra3 = (number1 > number2) && (number3 < number4); // AND => 0 == false
    bool kiem_tra4 = (number1 > number2) || (number3 < number4); // OR => 1 == true
    cout << kiem_tra3 << endl; // 0 == false
    cout << kiem_tra4 << endl; // 1 == true

    return 0;
}