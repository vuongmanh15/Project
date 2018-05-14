//Bài 12.3 Nhập dữ liệu thông tin từng sinh viên một vào trong file
#include<iostream>//in-out stream
#include<string>
#include<fstream>// file stream
using  namespace std;
int main()
{
	int n;
	cout << "Nhap so luong sinh vien: ";
	cin >> n;
	fstream f;//Gán biến cho file
	f.open("17020370.txt", ios::out);//Mở file
	string dulieu[n], hoTen[n], ngayTNS[n], que[n];
	cout << "Nhap vao man hinh thong tin sinh vien: \n";
	cout << "======================================\n";
	for (int i = 0; i < n; i++)
	{
		cout << "Sinh vien thu: [" << i + 1 << "]" << endl;
		cout << "Ten sinh vien:\n";
		cin >> hoTen[i];
		cout << "Ngay sinh:\n";
		cin >> ngayTNS[i];
		cout << "Que quan;\n";
		cin >> que[i];
		f << hoTen[i] << "  " << ngayTNS[i] << "    " << que[i] << endl;
		cout << "---------------------------------------\n";
	}
    f.close();//Đóng file
}


