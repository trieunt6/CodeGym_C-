#include <iostream>

using namespace std;

int main()
{
    // yeu cau : viet chuong trinh nhap vao diem so cua sinh vien ( 0 <= p <= 10)
    // neu nhap sai bat nhap lai den khi nao he thi thoi ?
    float diem_hs;
    do
    {
        cout << "Nhap diem thi ( 0 - 10 )" << endl;
        cin >> diem_hs;
        if (cin.fail() || diem_hs < 0 || diem_hs > 0) 
        {
            cout << "Diem khong hop le - vui long nhap lai" << endl;
        }
    } while (diem_hs < 0 || diem_hs > 10);

    // Bài Tập : Giả sử 1 bé A sinh ngày 29/02/2020. Hỏi từ năm sinh đến năm 2069 bé A tổ chức sinh nhật đúng ngày bao nhiêu lần ?
    // viêt chương trình trả lời câu hỏi trên ? 
    // kiểm tra từ năm 2020 - 2069 co bao nhieu nam la nam nhuan ? thi co bay nhiêu lần đc tổ chức sinh nhật đúng ngày. ??? chính xác được bao nhiêu lần tổ chức
    
    return 0;
}