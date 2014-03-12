#include<iostream>
#include<string>
using namespace std;

class EditDanhSachMH
{
private:
    MONHOC *mh;
    HOCSINH *hs;
    int soMonHoc, soHocSinh;
public:
    EditDanhSachMH();
    EditDanhSachMH(int, int, int);
    void themHocSinh(string, int );//ma lop + so hoc sinh nhap vao !
    void nhapmonhoc(int);
    void getchitietMonhoc();
    void getMonhoc();
    void indssvofMH();

};
