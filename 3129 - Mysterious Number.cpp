#include<iostream>
#include<map>

using namespace std;

map <int, int> cinta;
int main()
{
    int casos, n, p;
    string s;
    cin>>casos;
    for(int i = 0; i < casos;i++)
    {
        cin>>n;
        cin>>s;
        cin>>p;
        int cont = 0;
        for(int u = 1; u<=n; u++)
        {
                 if(s == "odd")//sacar todos los impares desde 1 hasta N
                 {
                     if(u % 2 == 0)
                        {
                            cinta[cont] = u;
                            //cout<<cinta[cont]<<endl;}
                            cont++;
                        }
                 }else{
                     if(u % 2 != 0)
                        {
                            cinta[cont] = u;
                            cont++;
                        }
                 }
        }
        cout<<cinta[p-1]<<"\n";
    }
    return 0;
}
