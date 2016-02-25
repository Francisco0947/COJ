#include <iostream>
#include <sstream>
#include <string>
#include <cstdlib>
#include <cstdio>

#define optimizar_io ios_base::sync_with_stdio(0);cin.tie(0);

using namespace std;

long long convertidor(long long a)
{
    string save= "";
    unsigned long long aux, p;
    p=a;
    for(int i=0;a>0;i++)
    {
          stringstream stream;
          aux = a%2;
          a = a/2;
          stream<<aux;
          save += stream.str();
    }
    int y = save.length();
    string n="";
    aux = 0;
    for(int i = y-1;i>=0;i--)
    {
        n+=save[i];
        aux++;
    }
     aux=atoll(n.c_str());
    return aux;
}

int main()
{
    unsigned long long pop = 0;
    int casos = 0;
    cin>>casos;
    bool ok;
    for(int i=0;i<casos;i++)
    {
        unsigned long long a = 0;
        cin>>a;
        if(a == 1)
        {
            pop = 1;
            ok = true;
        }else ok =false;
        for(int lol=2;ok==false;lol++)
        {
            pop=convertidor(lol);
            if(pop%a==0 || a == 1)ok =true;
        }
    cout<< pop<<"\n";
    }
    return 0;
}
