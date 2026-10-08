#include <iostream>
#include <cmath>

using namespace std;

// viet ham kiem tra xem mot chuoi co phai la chuoi so hop le khong ?
bool is_number(const string& str)
{
    // nhap vao la 1 chuoi "1234bcd" => kiem tra xem co phai chi cac con so hay ko?
}

int main()
{
    // giai phuong trinh bac hai
    // he so nhap tu ban phim
    cout << "===== Giai PTBH ======" << endl;
    double a, b, c;
    // yeu cau nguoi dung so tu ban phim
    // bat nguoi dung phai nhap la so cho 3 he so cua PT, nhap sai bat nhap lai
    cout << "Moi nhap he so a :" << endl;
    cin >> a;
    cout << "Moi nhap he so b : " << endl;
    cin >> b;
    cout << "Moi nhap he so c : " << endl;
    cin >> c;
    // kiem tra chac chan nhap so
    if (cin.fail())
    {
        cout << "Nhap he so phai la cac so " << endl;
    }
    else
    {
        // nhap dung thi bat dau giai PT
        if (a == 0)
        {
            /* khong phai la ptbh */
            // 0x2 + bx + c = 0 // phuong trinh bac nhat
            cout << "Vui long nhap he so a phai khac 0" << endl;
        }
        else
        {
            // phuong trinh bac hai
            double delta = (b * b) - (4 * a * c);
            if (delta < 0)
            {
                cout << "PT vo nghiem" << endl;
            }
            else if (delta == 0)
            {
                cout << "PT co nghiem kep x1 = x2 = " << (-b/2*a) << endl;
            }
            else
            {
                double x1 = (-b + sqrt(delta)) / (2*a);
                double x2 = (-b - sqrt(delta)) / (2*a);
                cout << "PT co 2 nghiem phan biet x1 = " << x1 << " va x2 = " << x2 << endl;
            }
            
        }
        
    }
    return 0;
}