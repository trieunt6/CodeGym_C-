#include <iostream>

using namespace std;

int main()
{
    int numbers[9] = {1,5,7,4,3,8,2,9,6};
    // tinh tong cac so le va chan trong mang?
    // ap dung cac kien thuc ve mang + vong lap + cau truc dieu kien
    // tinh trung binh cong cac so chan va le trong mang ???

    int ages[7] = {20,43,64,99,18,30,90};
    // tim so tuoi lon nhat trong mang
    // gia su tim duoc so tuoi lon nhat chinh la phan tu dau tien cua mang
    int max_age = ages[0];
    // kiem tra lan luot gia tri(so tuoi) nay voi so tuoi con lai trong mang, neu co so tuoi khac lon hon thi gan lai. Cu lap lai dieu nay den khi kiem tra het cac so tuoi trong mang
    int min_age = ages[0];
    for(int i = 0; i < 7; i++)
    {
        if(max_age < ages[i])
        {
            // nhung gia tri khac lon hon max age ban dau thi gan lai gia tri cho max age
            max_age = ages[i];
        }
        if (min_age > ages[i])
        {
            // nhung gia tri khac nho hon min age ban dau thi gan lai gia tri cho min age
            min_age = ages[i];
        }
    }
    cout << "So tuoi lon nhat trong mang la " << max_age << endl;
    cout << "So tuoi nho nhat trong mang la " << min_age << endl;

    return 0;
}