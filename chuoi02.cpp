#include <iostream>
#include <string>

using namespace std;

int main()
{
    // cac ham quan trong(hay dung) voi chuoi trong C++
    // 1 : them, xoa, thay the chuoi
    string str1 = "I love C++";

    // them gia tri vao 1 vi tri trong chuoi
    str1.insert(2, "really ");
    cout << str1 << endl;

    str1.erase(2, 7); // xoa tu vi tri so 2 va xoa di 7 ky tu
    cout << str1 << endl;

    str1.replace(7, 3, "Java"); // thay the tu vi tri so 7 bang 3 ki tu khac la ki tu java
    cout << str1 << endl;

    // 2 : Cat chuoi(tach chuoi) con
    string my_str = "Hello World";
    cout << my_str.substr(6) << endl; // cat chuoi con tu vi tri so 6 cho den het chuoi
    cout << my_str.substr(0, 5) << endl; // 0 vi tri can cat chuoi, 5 so luong ky tu can cat

    // 3 : tim kiem chuoi
    string str2 = "banana";
    string s = "hello";
    size_t pos = str2.find(s); // tim kiem ky tu nam trong chuoi
    cout << pos << endl; // xuat hien 2 lan trong chuoi
    if (pos == string::npos) // tim kiem - so sanh
    {
        cout << "Khong tim thay chuoi '" << s << "'" << endl; 
    }
    else
    {
        cout << "Tim thay '" << s << "' va so lan xuat hien = " << pos << endl;
    }
    // 4 - chuyen doi giua chuoi va so
    // 4.1 - chuyen chuoi ve so
    string my_age = "20"; // trong chuoi chi chua cac gia tri la so
    int age = stoi(my_age); // chuyen chuoi ve so : stoi == string to integer
    string my_money = "100.89"; // trong chuoi chi chua cac so
    double money = stod(my_money); // chuyen chuoi ve so thuc
    // stod == string to double
    // 4.2 - chuyen so ve chuoi
    string s1 = to_string(age); // convert int to string
    string s2 = to_string(money); // convert double to string

    return 0;
}