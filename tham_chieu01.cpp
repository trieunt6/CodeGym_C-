#include <iostream>

using namespace std;

// viet ham doi cho 2 so bang tham chieu va bang con tro
// 1 - su dung tham chieu
void doi_cho_bang_tham_chieu(int &n, int &m)
{
    int t = n;
    n = m;
    m = t;
    // doi duoc 2 so
}
// 2 - su dung con tro
void doi_cho_bang_con_tro(int *p1, int *p2)
{
    int t = *p1; // con tro (* dung truoc con tro de lay gia tri)
    *p1 = *p2;
    *p2 = t;
}

// viet ham dem so ky tu trong chuoi bang con tro
// "hello you" ??? co bao nhieu ky tu = 9
int tim_do_dai_chuoi(const char *str)
{
    // con tro str : kieu du lieu la char(ki tu)
    const char *p = str;
    while (*p != '\0')
    {
        p++; // dich chuyen con tro sang ki tu tiep theo
    }
    return p - str; // xem khoang cach dia chi cuoi va dau cua chuoi la bao nhieu?
}

int main()
{
    const char *s = "Lap trinh C++";
    int count = tim_do_dai_chuoi(s);
    cout << "Chuoi: '" << s << "' Co : " << count << " ki tu" << endl; 

    // tim hieu cac kien thuc ve tham chieu
    // Tham chiếu là gì ? 
    // Tham chiếu là 1 bí danh(alias), tên gọi thứ 2 (khác) của 1 biến đã tồn tại
    int number = 10; // 1 bien thong thuong
    int& my_number = number; // int &my_number = number // 2 cach viet giong nhau
    // my_number: là biến sử dụng chung địa chỉ ô nhớ lưu trữ giá trị của biên number.
    // my_number va number tuy 2 biến có tên gọi khác nhau thực chất chúng là 1.
    cout << &my_number << "   " << &number << endl;
    // in ra dia chi cua 2 bien do => 2 dịa chi nay GIONG NHAU
    my_number = 50; // number cung se bi thay doi theo
    cout << my_number << "   " << number << endl; // in gia tri

    int a = 10;
    int b = 20;
    doi_cho_bang_tham_chieu(a, b); // truyen gia tri cua bien vao cho tham chieu
    cout << a << "  --  " << b << endl; // doi a = 20; b = 10
    int c = 10;
    int d = 20;
    doi_cho_bang_con_tro(&c, &d); // truyen dia chi cua bien vao cho con tro
    cout << c << "  --  " << d << endl; // doi c = 20; d = 10;


    return 0;
}