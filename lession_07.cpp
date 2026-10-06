#include <iostream>
#include <string>

using namespace std;

int main ()
{
    // tim hieu ve vong lap while
    // in ra bang cuu chuong cua so tu nhien 1 - 10;
    int k = 8; // hien bang cuu chuong cua 5
    // ban chat thuc thi cac phep nhan tu 1 den 10 voi 5
    int i = 1; // bien chay : giong nhu diem bat dau trong vong lap for
    // vong lap kiem tra dieu kien truoc. (phai kiem tra dieu kien truoc, xem dieu kien co thoa man khong roi moi thuc hien thuc thi vong lap)
    // so lan lap toi da : vo cung (vo han - bieu thuc dieu kien luon luon dung)
    // so lan lap toi thieu : 0 (bieu thuc dieu kien sai ngay tu dau)
    while (i <= 10)
    {
        /* 
        +/ i <= 10 : dieu kien de thuc thi vong lap
        +/ Neu dieu kien dung thi vong lap moi duoc thuc thi va nguoc lai
        */
       cout << k << " x " << i << " = " << k * i << endl; // in bang cuu chuong
       i++; // tang gia tri sau moi lan thuc hien vong lap(bat buoc phai co)
    }
    // tinh tong cac so tu nhien tu 1 den N : N la so tu nhien duong bat ky (N*(N+1))/ 2
    // n = 10 : 1 + 2 + ...+ 9 + 10;
    // su dung vong lap while de giai quyet bai toan
    int number = 100;
    int run = 1;
    int sum = 0;
    while (run <= number)
    {
        sum += run; // sum = sum + run;
        run++;
    }
    cout << "Tong cac so tu 1 den " << number << " = " << sum << endl;

    /////////////////////////// DO ... WHILE /////////////////////
    // do .. while : vong lap kiem tra dieu kien sau (luon luon thuc hien truoc it nhat 1 lan lap roi sau do kiem tra lai dieu kien - neu dieu kien dung thuc thi tiep vong lap va nguoc lai)
    // so lan lap toi da : giong nhu while
    // so lan lap toi thieu : 1

    // kiem tra xem nguoi dung nhap mat khau dang nhap he thong co dung khong ?
    const string MY_PASSWORD = "TrieuNT6@"; // mat khau chinh xac cua nguoi dung da dang ky luu vao he thong
    string password; // mat khau nguoi se nhap khi dang nhap vao he thong
    // neu nhap mk sai qua 3 lan - tai khoan bi khoa
    int count = 0;
    bool checkPass = true;
    do
    {
        cout << "Nhap mat khau " << endl;
        cin >> password; // nhap tu ban phim
        if(password != MY_PASSWORD) // so sanh khong bang nhau
        {
            cout << "Mat khau khong dung, vui long thu lai" << endl;
            count++; // dem so lan nhap sai
        }
        if(count > 3)
        {
            checkPass = false;
            break; // thoat khoi vong lap
        }

    } while (password != MY_PASSWORD);
    // xu ly ngoai vong lap do...while
    if(checkPass)
    {
        cout << "Dang nhap thanh cong " << endl;
    }
    else
    {
        cout << "Dang nhap sai qua 3 lan, tai khoan tam thoi bi khoa" << endl;
    }
    // tinh giai thua cua 1 so tu nhien duong bat ky
    // su dung vong lap do ... while
    // giai thua : tich (nhan)cua cac so tu nhien lien tiep : n!
    // 0! == 1! == 1
    // 3! = 1x2x3 = 6
    // tim uoc so chung lon nhat cua 2 so tu nhien nguyen duong bat ky

    int number1;
    int number2;
    do 
    {
        cout << "Nhap so nguyen duong A : " << endl;
        cin >> number1; // nhap tu ban phim
        cout << "Nhap so nguyen duong B : " << endl;
        cin >> number2;
        if (number1 < 0 || number2 < 0)
        {
            cout << "so nguyen duong A va B khong duoc am : " << endl;
        }
    } while(number1 < 0 || number2 < 0);
    // tim USCLN cua number1 va number2
    int a = number1;
    int b = number2;
    while (b != 0)
    {
        int r = a % b;
        a = b;
        b = r;
    }
    int uscln = a;
    cout << "USCLN cua " << number1 << " va " << number2 << " = " << uscln << endl;
    

    return 0;
}