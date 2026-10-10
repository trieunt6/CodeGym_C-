#include <iostream>

using namespace std;

int main()
{
    // tim hieu ve mang trong C++
    // co 2 loai : mang 1 chieu va mang da chieu(2 chieu)
    // Tim hieu ve mang 1 chieu truoc 
    // dinh nghia : mang la 1 tap hop cac gia tri cung kieu du lieu trong 1 bien, duoc luu tru o cac o nho lien tiep nhau trong bo nho cua may tinh (RAM)
    // Mỗi một phần tử trong mảng được định danh(đánh dấu) bằng một chỉ số (index) bắt đầu từ 0 đến n - 1 (với n là số lượng phần tử của mảng). Phần tử đầu tiên trong mảng có chỉ số (vị trí - index) là  0. Phần tử cuối cùng trong mảng có chỉ số (vị trí - index) là n-1

    // ========== Khai bao va khoi tao mang (Array) 1 chieu ==========/
    int numbers[5]; // khai bao 1 mang se chua 5 phan tu la so nguyen (chua gan gia tri)
    int scores[3] = {7, 8, 9}; // mang chua 3 so nguyen va da duoc gan gia tri cu the
    int ages[] = {20,21,22,23,24,25}; // khong khai bao san kich thuoc(so luong phan) cho mang. Tu dong dem so luong phan tu da duoc gan de xac dinh kich thuoc cua mang

    // ======= Truy cap va duyet mang(vong lap) mang ========//
    // de thao tac(truy cap) voi tung phan tu trong mang nho cu phap
    // ten_mang[chi_so]; // chi so vi tri cua phan tu nam trong mang
    int my_age = ages[2]; // 22
    cout << "my age : " << my_age << endl;
    int my_score = scores[0]; // 7
    cout << "my score : " << my_score << endl;
    cout << "gia tri : " << numbers[1] << endl; // mac dinh gia tri 0 (kieu int)
    int my_number[9] = {1,2,3,4,5,6,7,8,9};
    // dung vong lap for
    for (int i = 0; i < 9; i++)
    {
        cout << "Chi so : " << i << " - Gia tri : " << my_number[i] << endl;
    }

    // thao tac nhap mang 1 chieu tu ban phim va in ra mang
    int arr_size; // kich thuoc : so luong phan tu cua mang
    // kich thuoc toi thieu 3 phan tu va toi da 10 phan tu 
    // kich thuoc la so nguyen duong > 0
    do 
    {
        cout << "Nhap so luong phan tu cua mang : " << endl;
        cin >> arr_size;
        if (cin.fail() || arr_size < 3 || arr_size > 10)
        {
            cout << "Mang toi thieu 3 phan va toi da 10 phan tu" << endl;
        }
        
    } while (arr_size < 3 || arr_size > 10);
    cout << "Nhap cac phan tu cho mang : " << endl;
    int arr[arr_size]; // khai bao mang tinh chua co gia tri
    for(int i = 0; i < arr_size; i++){
        cout << "arr[" << i << "] = ";
        cin >> arr[i]; // nhap du lieu tu ban phim
    }
    // in mang vua nhap tu ban phim 
    cout << "\nMang vua nhap la : "; // \n : ky tu xuong duong
    for (int i = 0; i < arr_size; i++)
    {
        cout << arr[i] << " ";// in tung phan tu , cach nhau boi khoang trang
    }
    cout << endl;

    return 0;
}