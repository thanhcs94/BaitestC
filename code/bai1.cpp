#include<iostream>
using namespace std;
#include <conio.h>

void inchinhphuong(int n,int i)
{
    static int temp;
    if (i==1) temp=0;
    if (temp<n)
    {

        temp = i*i;
        cout<<temp<<" ";
        inchinhphuong(n,i+1);

    }

}

int main()
{
    inchinhphuong(2000, 2);
    getch();
}
