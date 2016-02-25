# include <iostream>
# include <cstdio>
# include <algorithm>
using namespace std;

int main()
{
   int t[10], a;
   for(int i=0; i < 10;i++)
   {
       cin>>a;
       t[i]=a;
   }
    for(int i=0; i < 10;i++)
   {
       cout<<t+i;
   }

    return 0;
}

/*int car;
    int cuenta=0;
    while((car = getchar())!=EOF)
    {
        if(car=='t')++cuenta;
    }
    cout<<"Letras t: "<<cuenta<<endl;*/
