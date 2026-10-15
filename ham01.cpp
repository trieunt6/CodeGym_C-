#include <iostream>

using namespace std;

// khai bao nguyen mau ham : ham khong co logic(than ham - khoi lenh) de xu ly
int substract_number(int number1, int number2);

// tu dinh nghia mot ham
// dinh nghia ham tinh tong hai so nguyen bat ky
int sum_number(int number1, int number2 = 100)
{
    // int number2 = 100 : gan gia tri mac dinh cho tham so
    // gia tri mac dinh nay se co hieu luc khi khong ton tai gia tri thuc truyen vao ham trong luc goi ham ra su dung.
    // gia tri mac dinh luon gan cho tham so nam phia cuoi tinh tu trai qua phai trong ham
    // logic se xu ly trong nay
    return number1 + number2; // return : tra ket qua ve cho ham, thoat khoi ham, cac cau lenh ben duoi se khong duoc thuc thi nua
    // cout << number1; // khong thuc thi duoc lenh nay vi da goi return roi
}

// viet ham tinh luy thua cua mot so nguyen bat ky. Mac dinh tinh la se tinh luy thua 2 
int luy_thua(int co_so, int so_mu = 2)
{
    // 3 ^ 4: 3 co so; 4 so mu = 3 * 3 * 3 * 3
    int ket_qua = 1;
    for (int i = 0; i < so_mu; i++)
    {
        ket_qua *= co_so; // ket_qua = ket_qua * co_so
    }
    return ket_qua;
}

int sum_number(int number1, int number2, int number3)
{
    // function overloading
    return number1 + number2 + number3;
}

int main ()
{
    // main : chinh la 1 ham - no co ten goi la main
    // Hàm : là một khối lệnh thực hiện một nhiệm vụ cụ thể nào đó, có thể nhân các  trị đầu vào (tham số) và có thể trả về một kết quả nếu cần (có thể không cần trả về gì)
    // { } khoi lenh : than ham - noi dung ham nam ben trong
    // () : truyen tham so vao ham neu co
    // int : quy dinh ham phai tra ve mot gia tri co kieu du lieu la so nguyen(int)
    // void : quy dinh ham khong phai tra ve gia tri nao ca. (ko can return trong ham)

    // De chay - thuc thi ham da dinh nghia thi chay no trong ham main
    int sum = sum_number(10, 20); // goi ham ra su dung
    cout << "Tong 2 so la : " << sum << endl;

    int sum2 = sum_number(3,4,5); // function overloading
    cout << "Tong 3 so la : " << sum2 << endl;

    int sub = substract_number(50, 30);
    cout << "Hieu 2 so la : " << sub << endl;

    cout << "3^4 = " << luy_thua(3) << endl; // 3^2
    cout << "2^3 = " << luy_thua(2) << endl; // 2^2 vi thieu tham so truyen vao cho so_mu

    return 0; // tra ve ket qua cho ham
}

int substract_number(int number1, int number2)
{
    // xu ly logic
    return number1 - number2;
}
// function overloading - nap chong ham
// co 2 ham voi ten giong het nhau nhung khac nhau ve so luong tham so truyen vao ham hoac khac nhau ve kieu du lieu cua tham so truyen vao ham