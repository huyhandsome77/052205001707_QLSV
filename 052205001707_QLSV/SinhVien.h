#pragma once
#include <string>
#include<vector>
using namespace std;
class SinhVien {
private:
    string ma_so;
    string ho_ten;
    int so_buoi_vang;
    float diem_TH;
    float diem_GK;

public:
    SinhVien(string ma_so, string ho_ten, int so_buoi_vang, float diem_TH, float diem_GK)
        : ma_so(ma_so), ho_ten(ho_ten), so_buoi_vang(so_buoi_vang), diem_TH(diem_TH), diem_GK(diem_GK) {}

    string getMaSo() const {
        return ma_so;
    }

    string getHoTen() const {
        return ho_ten;
    }

    int getSo_buoi_vang() const {
        return so_buoi_vang;
    }
    float getDiem_TH() const {
        return diem_TH;
    }
    float getDiem_GK() const {
        return diem_GK;
    }
    double tinh_diem_qua_trinh() const;
};
