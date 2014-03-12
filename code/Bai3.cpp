
/*
n = 4
1   2   3    4
12  13  14   5
11  16  15   6
10  9   8    7
*/
#include<iostream>
#include<math.h>
#include<conio.h>

using namespace std;

int ngon=0;
int main()
{

    int t;
    cout<<"Nhap 1 so :";
    cin>>t;
    int a[t][t];

    int i=0, j=0;

    int batdau =0, ketthuc =t;

    int dem1=0, dem2=0;

   while(batdau <ketthuc)
    {
        i=batdau;
        for(j=batdau;j<ketthuc;j++)
        {

            ngon++;
            a[i][j]=ngon;
        }


        j=ketthuc-1;
        for(i=batdau+1;i<ketthuc;i++)
        {
             ngon++;
             a[i][j]=ngon;
        }

        i = ketthuc-1;

        for(j=ketthuc-2;j>=batdau;j--)
        {
             ngon++;
            a[i][j]=ngon;
        }


       batdau = batdau; j=batdau;
      for(i=ketthuc-2;i>batdau;i--)
        {
             ngon++;
            a[i][j]=ngon;
        }



   batdau++;
   ketthuc--;
    }

    for(i=0;i<t;i++)
    {
        for(j=0;j<t;j++)
        {
            cout<<a[i][j]<<"   ";
        }
        cout<<"\n";
    }




    getch();
    return 0;
}
