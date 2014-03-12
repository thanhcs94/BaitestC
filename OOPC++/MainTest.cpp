//#include"EditDanhSach.cpp"
#include"HOCSINH.cpp"
#include"MONHOC.cpp"
#include<conio.h>
#include<stdlib.h>

void mauTest(MONHOC monHoc[])//test mau de dua vao chuong trinh !
{
    HOCSINH h1[5];
    h1[0] =HOCSINH("1a", "Nguyen Van Thanh");
    h1[1] =HOCSINH("2a", "Hoang Van Son");
    h1[2] =HOCSINH("3a", "Nguyen Van Be");
    h1[3] =HOCSINH("4a", "Bung Van Bu");
    h1[4] =HOCSINH("5a", "Moi Thi Mat Roi");

    HOCSINH h2[5];
    h2[0] =HOCSINH("1a", "Nguyen Van Teo");
    h2[1] =HOCSINH("2b", "Hoang Son");
    h2[2] =HOCSINH("3b", "Nguyen Van");
    h2[3] =HOCSINH("4b", "Bung  Bu");

     HOCSINH h3[5];
    h3[0] =HOCSINH("1c", " Van Teo");
    h3[1] =HOCSINH("2c", "Hoang Son");
    h3[2] =HOCSINH("3c", "Nguyen");

     HOCSINH h4[5];
    h4[0] =HOCSINH("1d", " Van Teo");
    h4[1] =HOCSINH("2d", "Son Thi");

    HOCSINH h5[5];
    h5[0] =HOCSINH("1e", "Teo");




   monHoc[0] =MONHOC("TRR", "Toan Roi Rac", 5, h1);
   monHoc[1] =MONHOC("CTDL", "Cau Truc Du Lieu", 4, h2);
   monHoc[2] =MONHOC("VL", "Vat Ly", 3, h3);
   monHoc[3] =MONHOC("MCB", "Mang Can Ban", 2, h4);
   monHoc[4] =MONHOC("HDH", "He Dieu Hanh", 1, h5);



}





int main()
{
    int sohocsinh;
    int chon;
    int somonhoc;
    int flag;
    MONHOC *monHoc;

    do
    {
        system("cls");
        cout<<"---------------Quan Li Mon Hoc------------\n";
        cout<<"\t\t1.Nhap danh sach mon hoc.\n";
        cout<<"\t\t2.In toan bo thong tin cac mon hoc.\n";
        cout<<"\t\t3.Them hoc sinh vao 1 Mon Hoc.\n";
        cout<<"\t\t4.Xuat danh sach hoc sinh cua 1 Mon Hoc.\n";
        cout<<"\t\t5.Them mon hoc.\n";
        cout<<"\t\t6.Xoa 1 sinh vien cua mon hoc.\n";
        cout<<"\t\t7.Sua thong tin mon hoc\n";
        cout<<"\t\t8.Sua thong 1 hoc sinh\n";
        cout<<"\t\t9.Xem lop hoc cua 1 hoc sinh!\n";
        cout<<"\n\nNhap su lua chon (-1 de thoat)";


        cin>>chon;
        switch(chon)
        {
            case 1:
            {
                monHoc = new MONHOC[100];
                mauTest(monHoc);
                somonhoc=5;
                cout<<"\n\nEm da nhap san bo test!\n\tenter va nhan 2 de kiem tra!)";
                getch();

            };break;


              case 2: {
                for(int i=0;i<somonhoc;i++)
                {
                    cout<<"\n\t"<<i+1<<", "; // in ra so thu tu mon hoc
                    monHoc[i].xuatMonHoc();//xuat tona bo thong tin mon hoc+ hoc sinh
                }


                getch();
            };break;

              case 3: {
                  string a,b;
                  int dem;
                  string masomh;
                  cout<<"\nNhap ma so mon hoc can them  HS : ";
                  cin>>masomh;
                  for(int i=0;i<somonhoc;i++)
                  {
                     if(monHoc[i].getmaMH()==masomh)
                    {
                        monHoc[i].themHocSinh();
                    }
                  }

                getch();

            };break;
             case 4: {
                string text;
                cout<<"\n\nNhap ma 1  Mon Hoc Can Xem DS HS : ";
                cin>>text;
                for(int i=0;i<somonhoc+5;i++)
                {
                   if(monHoc[i].getmaMH()==text)
                    {
                       monHoc[i].getDShHocSinh();
                    }
                }
                getch();
            };break;
              case 5: {
                  int n, temp;
                  cout<<"Nhap so Mon Hoc muon them : ";
                  cin>>temp;
                  n = somonhoc+temp;
                  for(int i=somonhoc;i<n;i++)
                  {
                      monHoc[i] =MONHOC("","");
                      monHoc[i].nhapMH();
                  }
                  somonhoc =n;
                  cout<<somonhoc<<"\n";
                  getch();

            };break;
              case 6: {
                string mamh, mahs;
                cout<<"\n\nNhap ma Mon Hoc : ";
                cin>>mamh;
                for(int i=0;i<somonhoc+5;i++)
                {
                   if(monHoc[i].getmaMH()==mamh)
                    {
                       monHoc[i].getDShHocSinh();
                        cout<<"\n\nNhap ma Hoc Sinh Muon xoa : ";
                        cin>>mahs;
                        monHoc[i].xoamotHocSinh(mahs);
                    }
                }




            };break;
             case 7: {
                string maso;
                    cout<<"\n\nNhap ma so Mon Hoc can sua : ";
                    cin>>maso;
                    for(int i=0;i<somonhoc;i++)
                    {
                        if(monHoc[i].getmaMH()==maso)
                        {
                            string temp1, temp2;
                            cout<<"\nNhap Ma So Mon Hoc :";cin>>temp1;
                            cout<<"\nNhap Ten Mon Hoc :";cin>>temp2;\
                            monHoc[i].setmaMH(temp1);
                            monHoc[i].setTenMH(temp2);
                        }
                    }
                   getch();
            };break;

             case 8:
                {
                   getch();
                };break;
             case 9: {
                    string maso; int temp=0;
                    cout<<"\n\nNhap ma so Hoc Sinh Can Xem : ";
                    cin>>maso;
                    for(int i=0;i<somonhoc;i++)
                    {
                        if(monHoc[i].timthongtinsinhvien(maso)==1)
                            cout<<monHoc[i].getTenMH()<<"\n";
                    }
                 getch();
            };break;
        }
    }while(chon!=0);





  //  sosanh(mhh);

}
