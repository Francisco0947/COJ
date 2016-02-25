# include <iostream>

using namespace std;

int main()
{
    int grupo, tam, tamAux;
    string x;
    cin>>grupo;
    while(grupo>0)
    {
        cin>>x;
        tam = x.length();
        tamAux = tam/grupo;
        int u = 0;
        for(int i=1;i<=grupo; i++)
        {
            int f = i*(tamAux);
             f--;
            cout<<"f: "<<f<<endl;
            cout<<"u: "<<u<<endl;
            while(u != f)
            {
                char ini, fin;
                ini = x[u];
                fin = x[f];

                x[u] = fin;
                x[f] = ini;
                u++;
                f--;
                cout<<"x:"<<x<<endl;
            }
            u = i*(tamAux);
        }
        cout<<x<<endl;
        cin>>x;
    }

    return 0;
}
