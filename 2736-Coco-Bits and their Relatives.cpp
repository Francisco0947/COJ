# include <iostream>

using namespace std;

char vale(int p)
{
    if(p == 1)return '1';
    else if(p == 0)return '0';
}


int main()
{
    string a, resp;
    cin>>a;
    int active = 2,y;
    while(active > 1)
    {
        active = 0;
        for(int b = 0; b < a.length();b++) if(a[b]=='1')active++;
        int aux = active;
        int f[active];
        for(y = 0; aux!=0;y++)
        {
            f[y]=aux%2;
            aux = aux/2;
            cout<<f[y];
            //cout<<"y:"<<y<<endl;
        }
        cout<<endl;
        int u = 0;
        a = "";
        for(y=y-1; y>=0; y--)
        {
            a[u] = vale(f[y-1]);
            cout<<a[u];
            u++;
            //cout<<"y:"<<y<<endl;
        }
        cout<<endl;
    }
    return 0;
}

