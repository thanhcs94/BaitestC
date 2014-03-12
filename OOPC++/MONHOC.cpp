#include"thuvienMONHOC.h"

MONHOC::MONHOC()
{
    sohs=0;
    hs= new HOCSINH[100];
}

MONHOC::MONHOC(string mamh, string tenmh)
{
    maMH =mamh;
    tenMH =tenmh;
    sohs=0;
    hs= new HOCSINH[100];
}

MONHOC::MONHOC(string mamh, string tenmh,int shs,  HOCSINH hs2[100])
{
    maMH =mamh;
    tenMH =tenmh;
    sohs = shs;
    hs= new HOCSINH[100];
    for(int i=0;i<shs;i++)
    {
        hs[i]= HOCSINH();
        hs[i]=hs2[i];
    }

}

void MONHOC::nhapMH()
{
    cout<<"\nNhap ma Mon Hoc : "; cin>>maMH;
    cout<<"\nNhap Ten Mon Hoc : ";cin>>tenMH;
}

void MONHOC::setmaMH(string mamh)
{
    maMH = mamh;
}

string MONHOC::getmaMH()
{
    return maMH;
}

void MONHOC::setTenMH(string tenmh)
{
    tenMH =tenmh;
}

string MONHOC::getTenMH()
{
    return tenMH;
}


void MONHOC::setSoHocSinh(int n)
{
    sohs = n;
}

int MONHOC::getSoHocSinh()
{
    return sohs;
}

void MONHOC::xuatMonHoc()
{
    cout<<"MONHOC:[ "<<maMH <<" ; "<<tenMH<< "]\n";
    if(sohs==0)
  {
      cout<<"List danh sach Hoc Sinh rong !";
  }
  else{
      cout<<"\t\t\nDanh Sach Hoc Sinh:"<<sohs<<"\n";
    for(int i=0;i<sohs;i++)
    {
        cout<<"\t\t\n"<<hs[i].getmaSo()<<" ; "<<hs[i].getTen();
    }
  }
  cout<<"\n=========================================\n";

}



void MONHOC::nhapDSHocSinh()
{
    hs= new HOCSINH[100];
    for(int i=0;i<sohs;i++)
    {

       hs[i]= HOCSINH();
       hs[i].nhapsv();
    }
}

void MONHOC::getDShHocSinh()
{
 // cout<<"\t\t\nMONHOC:[ "<<maMH <<" ; "<<tenMH<< "]\n";
  if(sohs==0)
  {
      cout<<"List danh sach Hoc Sinh rong !";
  }
  else{
      cout<<"\t\t\nDanh Sach Hoc Sinh:"<<sohs<<"\n";
    for(int i=0;i<sohs;i++)
    {
        cout<<"\t\t\n"<<hs[i].getmaSo()<<" ; "<<hs[i].getTen();
    }
  }
  cout<<"\n=========================================\n";
}

  void MONHOC::themHocSinh()
  {
      int n,temp;
      cout<<"\nNhap so Hoc Sinh muon them : ";
      cin>>temp;
        n= sohs+temp;
        for(int i= sohs;i<n;i++)
        {
            cout<<sohs<<"\n";
            cout<<n<<"\n";
        hs[i]= HOCSINH("oo", "lala");
        hs[i].nhapsv();
        }
        sohs=n;


  }

int MONHOC::timthongtinsinhvien(string maso)
{
    int temp=0;
    for(int i=0;i<sohs;i++)
    {
        if(hs[i].getmaSo()==maso)
         temp =1;
    }
    return temp;
}

void MONHOC::xoamotHocSinh(string mahs)
{
    int temp=0;
    for(int i=0;i<sohs;i++)
    {
        if(hs[i].getmaSo()==mahs)
        {
            for(temp=i;temp<sohs;temp++)
            {
                hs[temp]=hs[temp+1];
            }
            sohs--;
        }
    }
}



