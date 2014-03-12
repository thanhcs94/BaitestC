#include"HOCSINH.cpp"
#include"MONHOC.cpp"
#include"thuvieneditds.h"
#include<stdlib.h>

EditDanhSachMH::EditDanhSachMH()
{

}


EditDanhSachMH::EditDanhSachMH(int n, int smh, int shs)
{
    mh= new MONHOC[100];
    for(int i=0;i<n;i++)
    {
        mh[i] = MONHOC();
    }
     hs= new HOCSINH[shs];

    for(int i=0;i<shs;i++)
    {
        hs[i] = HOCSINH();
    }



    soMonHoc = smh;
   // soHocSinh =shs;

}


void EditDanhSachMH::themHocSinh(string ms, int n)
{
    soHocSinh=n;
    for(int i=0;i<soHocSinh;i++)
    {

        hs= new HOCSINH[n];
        for(int i=0;i<n;i++)
        {
            hs[i] = HOCSINH();
            hs[i].nhapsv();
        }

    }
}


void EditDanhSachMH::nhapmonhoc(int n)
{
     for(int i=0;i<n;i++)
    {
        mh[i] = MONHOC();
        mh[i].nhapMH();
    }

}


void EditDanhSachMH::getchitietMonhoc()
{
     for(int i=0;i<soMonHoc;i++)
    {
      mh[i].toString();
      mh[i].gethocsinh(soHocSinh);
    }


}
void EditDanhSachMH::getMonhoc()
{
     for(int i=0;i<soMonHoc;i++)
    {
      mh[i].toString();
    }


}



void EditDanhSachMH::indssvofMH()
{
    int n;
    cout<<"ssv muon them ";
    cin>>n;
    for(int i=0;i<5;i++)
    {
        if(mh[i].getmaMH()=="olala")
        {
            mh[i].gethocsinh(3);
        }
        else
        {
            cout<<"not found";
        }
    }
}


