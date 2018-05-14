//Bài 12.4 Nhập dữ liệu các sinh viên từ file vào chương trình
#include<iostream>//in-out stream
#include<string>
#include<fstream>// file stream
using  namespace std;
int main()
{
    fstream f;//Gán biến cho file
    f.open("17020370.txt", ios::in);//Mở file (in là nhập dữ liệu vào chương trình)
    int n;
    cout<<"Nhap so luong sinh vien: ";
    cin>>n;
    string dulieu[n], hoTen[n], ngayTNS[n], que[n];
    for(int i=0;i<n;i++)
    {
    cout<<"Sinh vien thu: ["<<i+1<<"]"<<endl;
    f>>hoTen[i]>>ngayTNS[i]>>que[i];
    cout<<hoTen[i]<<"  "<<ngayTNS[i]<<"    "<<que[i]<<endl;
    cout<<"---------------------------------------\n";
    }
        f.close();//Đóng file
}


