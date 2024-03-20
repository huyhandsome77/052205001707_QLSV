#pragma once
#include "SinhVien.h"
#include<vector>
class dsSinhVien {
private:
    vector<SinhVien> danh_sach;

public:
    void themSinhVien(const SinhVien& sinh_vien);

    void in_danh_sach_du_dieu_kien() const;

    void in_danh_sach_sinh_vien_nguyen() const;

    void in_danh_sach_sinh_vien_trung_ten() const;

    void nhap_danh_sach_sinh_vien(dsSinhVien& ds);
};