#include <iostream>

using namespace std;

// Truyền tham trị : kiến thức liên quan đến việc sử dung tham số cho hàm khi đang dinh nghĩa 
// Truyền Tham trị : Biến truyền vào hàm, không bị thay đổi giá trị theo logic xử lý ở trong hàm.
// Truyền Tham Chiếu : Biến truyền vào hàm sẽ bị thay đổi giá trị theo logic xử lý trong hàm.

void truyen_tham_trị(int number)
{
    // number : tham so - tham so dang truyen vao ham theo kieu tham tri
    number = number + 10; 
    // ban chat bien "number" duoc sao chep thanh 1 bien khac va no se bi thay doi theo logic xu ly trong ham. Ra khoi ham thi tham so(bien number) khong bi anh huong theo logic o trong ham nua.
    cout << "Bien xu ly trong ham tham tri : " << number << endl; // 15
}

// truyen tham chieu
void truyen_tham_chieu(int &number1)
{
    // number1 : tham so => dang duoc truyen vao ham theo kieu tham chieu (ky hieu & dung dang truoc tham so)
    // number1 : tham chieu den dia chi o nho luu tru gia tri cua bien ben ngoai ham(number2)
    number1 = number1 - 10;
}

int main()
{
    int my_number = 5;
    truyen_tham_trị(my_number); // goi ham ra chay va ket thuc
    cout << "Bien sau khi su dung tham tri " << my_number << endl; // 5
    // biến truyền vào hàm, sau khi ra kết thúc xử lý hàm nó không bị thay đổi(ảnh hưởng) theo logic xử lý ở trong hàm (truyền tham số kiểu tham trị).
    // my_number : van giu nguyen gia tri khong bi thay doi

    int number2 = 50;
    truyen_tham_chieu(number2);
    cout << "Bien sau khi truyen theo kieu tham chieu " << number2 << endl; // 40
    // bien number2 da bi thay doi gia tri theo logic trong ham.

    return 0;
}