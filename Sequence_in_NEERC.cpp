#include <iostream>

using namespace std;
# define N

int validar(int t)
{
    if(t<1000 and t>100)
    {
        int c,d,u;
        c=t/100;
        d=t/10;
        d=d-c*10;
        u=t-c*100-d*10;
        N=3;
        long *arreglo = long [N];


    }
    return t;
}

int main()
{
    int i,a;
    int b=1;

    cin>>a;
    for(i=1;i<a;i++)
    {
        b=b*2;
        b=validar(b);
    }
    cout<<b;
    return 0;
}
