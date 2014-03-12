#include "thuvienHOCSINH.h"
int n;
HOCSINH::HOCSINH()
{

}

HOCSINH::HOCSINH(string ms, string tenSV)
{
   maSo = ms;
   ten = tenSV;
}

void HOCSINH::setmaSo(string ms)
{
    maSo =ms;
}

void HOCSINH::setTen(string name)
{
    ten = name;
}

string HOCSINH::getmaSo()
{
    return maSo;
}
string HOCSINH::getTen()
{
    return ten;
}




void HOCSINH::nhapsv()
{
        cout<<"Nhap MS : "; cin>>maSo;
        cout<<"Nhap Ten : ";cin>>ten;

}

void HOCSINH::toString()
{
        cout<<"HOCSINH:[ "<<maSo<<" ; "<<ten<<" ]\n";
}

