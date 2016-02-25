#include <iostream>
using namespace std;
int main()
{
 int a,b,c, mayor, suma;
 do{
    cin>>a;
    if(a!=0)
    {
    cin>>b>>c;
    mayor=a;
        if(mayor<b)
        {
            mayor=b;
        }
        if(mayor<c)
        {
            mayor=c;
        }
    suma=a*a;
    suma+=b*b;
    suma+=c*c;
    suma-=mayor*mayor;
    mayor= mayor*mayor;
    if(mayor!=suma)
    {
          cout<<"wrong"<<endl;
    }else cout<<"right"<<endl;
    }
   }while(a!=0);
 return 0;
}
