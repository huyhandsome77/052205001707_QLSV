#include "SinhVien.h"
#include<iostream>
using namespace std;

double SinhVien::tinh_diem_qua_trinh() const {
    if (so_buoi_vang <= 5) {
        return (10 - so_buoi_vang * 2) * 0.2 + diem_TH * 0.3 + diem_GK * 0.5;
    }
    else {
        return 0;
    }
}