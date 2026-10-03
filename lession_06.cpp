#include <iostream>
#include <cmath> // thu vien toan hoc

using namespace std;

int main ()
{
    // 1 - xu ly ve vong lap for ...
    // hien thi cac so lan luot tu 1 den 10
    for (int run = 1; run <= 10; run++) 
    {
        // toan bo logic xu ly cua vong lap for nam o day
        // int run = 1 : diem bat dau cua vong lap
        // run <= 10 : diem ket thuc cua vong lap
        // run++ : buoc nhay cua vong lap (de vong sau do - tiep theo dc xay la phai thoa man nhu the nao)
        // run : coi la 1 bien chay tu 1 den 10
        cout << "Gia tri cac so : " << run << endl;
    }
    // hien thi cac so tu 10 ve den 1
    for (int i = 10; i >= 1; i--)
    {
        cout << "Gia tri cua i " << i << endl;
    }
    // su dung vong lap for : in ra cac so chia het cho 3 va 5 trong pham vi tu 10 den 30
    // 3 phut lam bai tap
    // goi y : ket cac kien thuc ve if...else de xu ly
    for (int j = 10; j <= 30; j++)
    {
        // duyet lan luot qua cac so tu 10 den 30(dem qua)
        // ap dung if..else vao trong vong lap for
        // chi in ra cac so chia cho 3 va 5
        if (j % 3 == 0 && j % 5 == 0)
        {
            cout << "Cac so chia het cho 3 va 5 la : " << j << endl;
        }
    }
    // su dung tu khoa break trong vong lap for
    // tu khoa brek : giup thoat khoi vong vap for (theo 1 dieu kien), vong lap for se bi dung - khong xu het toan bo.
    // tu 1 den 20 tim ra so dau tien cho het cho 6 la so be nhat (chi in ra do dau tien)
    for (int number = 1; number <= 20; number++)
    {
        if (number % 6 == 0)
        {
            cout << number << endl;
            break; // thoat khoi vong lap - vong lap khong chay nua
        }
        
    }
    // tu khoa continute : Bo qua phan con lai cua vong lap(luot lap) hien tai va chuyen ngay sang vong lap(luot lap) tiep theo
    // in ra cac so tu 1 den 5 nhung bo qua so 3 khong can in
    // 1, 2, 4, 5
    for (int i = 1; i <= 5; i++)
    {
        if (i == 3)
        {
            continue; // bo qua cac doan code phia duoi, nhay sang vong lap tiep theo i = 4
        }
        cout << "Gia tri i : " << i << endl;
    }

    // viet chuong trinh kiem tra 1 so co phai so nguyen to hay khong ?
    // su dung if..esle + vong lap (for)
    // ap dung tu khoa break
    bool isPrime = true; // flag(co) kiem tra (mac dinh la dung)
    int my_number = 21;
    if(my_number <= 1)
    {
        // ket luan sai luon - ko can dung vong lap nua
    }
    if (my_number == 2)
    {
        // ket luan dung luon - khong can dung vong lap nua
    }
    for (int i = 2; i <= sqrt(my_number); i++)
    {
        // sqrt : ham tinh can bac hai cua 1 so
        if (my_number % i == 0)
        {
            isPrime = false;
            break; // tiet kiem vong lap - dung vong lap
        }
    }
    if (isPrime)
    {
        cout << my_number << " la so nguyen to" << endl;
    }
    else
    {
        cout << my_number << " khong phai la so nguyen to" << endl;
    }

    return 0;
}