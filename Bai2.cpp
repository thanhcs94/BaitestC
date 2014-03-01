//2. Viết chương trình đệ quy in ra console phân tích 1 số bất kỳ > 2 ra thành các thừa số nguyên tố.
//vd: 16 = 2*2*2*2, 15 = 3*5, 36 = 2*2*3*3

#include<iostream>
#include<math.h>
#include<conio.h>

using namespace std;
int i=2;
void phantichso(int n)
{

    if(n>1)
    {

         if(n%i!=0)
        {
            i++;
            phantichso(n);
        }
        else
        if(n%i==0)
        {
            cout<<i<<" ";
            phantichso(n/i);
        }
    }

}

int main()
{
    phantichso(18);
    getch();
    return 0;
}
