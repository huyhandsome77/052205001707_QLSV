#include "dsSinhVien.h"
#include"SinhVien.h"
#include<vector>
#include <iostream>
#include<algorithm>
using namespace std;

void dsSinhVien::themSinhVien(const SinhVien& sinh_vien) {
    danh_sach.push_back(sinh_vien);
    cout << endl;
}


void dsSinhVien::in_danh_sach_du_dieu_kien() const {
    cout << "Danh sach sinh vien du dieu kien du thi:\n";
    for (auto i = danh_sach.begin(); i != danh_sach.end(); ++i) {
        if (i->tinh_diem_qua_trinh() >= 3) {
            cout << "Ma so SV: " << i->getMaSo() << ", Ho ten: " << i->getHoTen() << endl;
        }
    }
}


void dsSinhVien::in_danh_sach_sinh_vien_nguyen() const {
    cout << "Danh sach sinh vien co ho la 'Nguyen':\n";
    for (const auto& sinh_vien : danh_sach) {
        if (sinh_vien.getHoTen().find("Nguyen") != string::npos) {
            cout << "Ma so SV: " << sinh_vien.getMaSo() << ", Ho ten: " << sinh_vien.getHoTen() << endl;
        }
    }
}

void dsSinhVien::in_danh_sach_sinh_vien_trung_ten() const {
    cout << "Danh sach sinh vien co cung ten voi mot sinh vien khac:\n";
    vector<string> ten_sinh_vien;
    for (const auto& sinh_vien : danh_sach) {
        ten_sinh_vien.push_back(sinh_vien.getHoTen());
    }
    sort(ten_sinh_vien.begin(), ten_sinh_vien.end());
    for (size_t i = 0; i < ten_sinh_vien.size() - 1; ++i) {
        if (ten_sinh_vien[i] == ten_sinh_vien[i + 1]) {
            cout << "Ho ten: " << ten_sinh_vien[i] << endl;
        }
    }
}
void dsSinhVien::nhap_danh_sach_sinh_vien(dsSinhVien& ds) {
    int n;
    cout << "Nhap so luong sinh vien: ";
    cin >> n;
    for (int i = 0; i < n; ++i) {
        string ma_so, ho_ten;
        int so_buoi_vang;
        float diem_TH, diem_GK;
        cout << "Nhap ma so sinh vien: ";
        cin >> ma_so;
        cout << "Nhap ho va ten sinh vien: ";
        cin.ignore();
        getline(cin, ho_ten);
        cout << "Nhap so buoi vang: ";
        cin >> so_buoi_vang;
        cout << "Nhap diem thuc hanh: ";
        cin >> diem_TH;
        cout << "Nhap diem giua ky: ";
        cin >> diem_GK;
        SinhVien sinh_vien(ma_so, ho_ten, so_buoi_vang, diem_TH, diem_GK);
        ds.themSinhVien(sinh_vien);
    }
}

