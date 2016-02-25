# include <iostream>

using namespace std;

int main()
{
    int museos;
    cin>>museos;
    while(museos >= 0)
    {
        int pato = 0, veces = 0;
        for(int i = 0;i<museos;i++)
        {
            int aux;
            cin>>aux;
            pato+=aux;
            if(pato % 100 == 0)veces++;
        }
        cout<<veces<<"\n";
        cin>>museos;
    }
    return 0;
}
