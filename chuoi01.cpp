#include <iostream>
#include <string> // xu ly va lam viec voi chuoi

using namespace std;

int main()
{
    // lam viec voi chuoi - string trong c++
    // de khai bao chuoi trong C++ chung ta co 2 cach co ban
    char my_string[] = "hello"; // cach 1 - su dung mot mang chua tung ky tu trong chuoi de luu tru - thuc te cach nay it dung(khuyen cao khong dung nhieu)
    cout << sizeof(my_string) << endl; // kiem tra doi dai cua chuoi
    // 6 ky tu : bao gom tinh ca ky tu null '\0' de bao hieu la het chuoi
    string my_name = "Trieu"; // bat buoi su dung dau nhay kep ""
    cout << my_name.size() << endl; // ham size : kiem tra do dai cua chuoi(bao nhieu ky tu)
    // khai bao va tao chuoi voi thu vien <string>
    string my_email; // khai bao 1 chuoi rong
    string my_phone = "+84 975091304"; 
    string my_add("Ha Noi"); // cach viet khac
    string my_charater(5, '*'); //***** (5 ky tu *)
    string your_phone = my_phone;
    // sao chep ra thanh 1 bien moi doc lap khong anh huong den bien cu(my_phone)
    string test_phone(my_phone,1,2); // copy - lay gia tri tu bien my_phone bat dau tu vi tri so 1 va lay ra 2 ky tu
    cout << test_phone << endl;
    // ky thuat C++11 tro len
    // string my_love{"my wife"}; // khai bao chuoi
    // nhap xuat chuoi tu ban phim
    /*
    string full_name;
    cout << "Moi nhap ho ten : " << endl;
    cin >> full_name; // cho phep nhap ca khoang trang
    cin.ignore(); // xoa bo ky tu '\n'(xuong dong) trong bo nho dem
    getline(cin, full_name); // doc toan gia tri cua chuoi
    cout << "Xin chao ban : " << full_name << endl;
    */
    // truy cap vao cac ky tu ben trong chuoi
    string phone = "0975091304";
    cout << phone.at(3) << endl; // truy cap vao ky tu o vi tri so 3 trong chuoi
    cout << phone[3] << endl; // khong nen dung - co loi thi trinh bien dich no se bo loi va dung chuong trinh
    cout << phone.front() << endl; // ky tu dau tien trong chuoi 
    cout << phone.back() << endl; // ky tu cuoi cung trong chuoi
    cout << phone.size() << endl; // kiem tra chuoi co boa nhieu ky tu
    cout << phone.empty() << endl; // chuoi rong khong - true(1) rong va nguoc lai
    // thay doi gia tri 1 ky tu nam trong chuoi
    phone.at(2) = '8'; // ky tu dung nhay don
    cout << "my phone " << phone << endl;
    // duyet qua tat ca cac ky tu trong chuoi
    string subject = "Hoc lap trinh C++";
    // cach 1
    int size = subject.size(); // so luong ky tu thi dem tu 1 - vi tri cac ky tu thi dem tu 0
    for(int i = 0; i < size; i++)
    {
        cout << subject[i] << " "; // in tren 1 hang, cac ky tu cach nhau khoang trang
    }
    cout << endl;
    // cach 2
    for (char sub : subject)
    {
        cout << sub;
    }
    cout << endl;
    // Noi chuoi(ghep chuoi) va so sanh chuoi
    string str1 = "Hello", str2 = "World"; // 2 bien kieu string
    string str3 = str1 + " " + str2; // + : toan tu ghep chuoi (khong phai toan tu trong toan hoc) // Operator overloading(nap chong toan tu)
    cout << str3 << endl;
    str3.append(" C++"); // them nhieu ky tu(chuoi con) vao cuoi chuoi
    cout << str3 << endl;
    str3.push_back('?');// ky tu dung dau nhay don, them 1 ky tu vao cuoi chuoi
    cout << str3 << endl;
    // so sanh chuoi
    string str4 = "apple,lemon", str5 = "banana", str6 = "apple";
    cout << (str4 == str5) << endl; // == : so sanh bang voi chuoi
    // 0 : false => khong bang nhau
    cout << (str4 == str6) << endl;
    // 1 : true => bang nhau
    cout << str4.compare(str5) << endl; // compare : so sanh dc ca 3 truong hop > == <

    return 0;
}