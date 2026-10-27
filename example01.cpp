// day se la noi viet cac ham tien ich de cac noi khac goi sang su dung

// viet ham : nhan doi gia tri cac phan tu trong mang 1 chieu
// {2, 3, 4} => {4, 6, 8}
// su dung cac kien thuc ve : ham, mang, tham chieu, tham tri, con tro
void nhan_doi_mang(int number_arr[], int count)
{
    // su dung : tham chieu
    for (int i = 0; i < count; i++) 
    {
        // tao tham chieu toi cac phan tu trong mang
        int &value = number_arr[i]; // value ten bien khac cua number_arr[i];
        value *= 2; // value = value * 2;
    }
}

// viet ham chuyen doi cac phan tu co gia tri am(nho hon 0) tro thanh 0 trong mang 1 chieu su tham chieu
// { 2, -1, 5, -4, 3, -6 } => {2, 0, 5, 0, 3, 0}
void xu_ly_so_am_trong_mang(int arr[], int n)
{
    // arr : mang 1 chieu chua cac so
    // n : so luong phan tu cua mang arr
    for (int i = 0; i < n; i++)
    {
        int &val = arr[i]; // tham chieu : val bien thu 2 cua arr[i]
        if (val < 0)
        {
            val = 0;
        }
    }
}
