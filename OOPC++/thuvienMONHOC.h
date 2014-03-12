#include<iostream>
#include<string>
using namespace std;

class MONHOC
{
    public:
		string maMH;
		string tenMH;
		int sohs;
		HOCSINH *hs;
	public:
		MONHOC();
		MONHOC(string, string);
		MONHOC(string, string,int , HOCSINH hs[100]);
		void nhapMH();

		void setmaMH(string);
		string getmaMH();

		void setTenMH(string);
		string getTenMH();

		void setSoHocSinh(int);
		int  getSoHocSinh();

        void nhapDSHocSinh();
		void getDShHocSinh();


		void themHocSinh();

		friend void sosanh(MONHOC p);
		void xuatMonHoc();
		int timthongtinsinhvien(string);
		void xoamotHocSinh(string);


};
