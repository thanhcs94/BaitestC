#include<iostream>
#include<string>
using namespace std;

class HOCSINH
{
    public:
		string maSo;
		string ten;
	public:
		HOCSINH();
		HOCSINH(string, string);
		void setmaSo(string);
		string getmaSo();
		void setTen(string);
		string getTen();
		void nhapsv();
		friend void sosanh(HOCSINH p1,HOCSINH p2);
		void toString();


};
