#include<iostream>
#include "dsSinhVien.h"
using namespace std;

int main() {
	dsSinhVien dssv;
	cout << "=====MENU=====" << endl;
	cout << "-----052205001707_Nguyen Anh Huy-----" << endl;
	int choice;
	
	while (true)
	{
		cout << "1. Nhap danh sach sinh vien" << endl;
		cout << "2. In danh sach du dieu kien" << endl;
		cout << "3. In danh sach sinh vien ho Nguyen" << endl;
		cout << "4. In danh sach sinh vien trung ten " << endl;
		cout << "5. Thoat " << endl;
		cout << "Nhap lua chon cua ban : ";
		cin >> choice;
		switch (choice)
		{
		case 1:
			dssv.nhap_danh_sach_sinh_vien(dssv);
			break;
		case 2: 
			dssv.in_danh_sach_du_dieu_kien();
			break;
		case 3 : 
			dssv.in_danh_sach_sinh_vien_nguyen();
			break;
		case 4:
			dssv.in_danh_sach_sinh_vien_trung_ten();
			break;
		case  5:
			return false;
		default:
			cout << "Vui long nhap lai !" << endl;
			break;
		}
	}

}