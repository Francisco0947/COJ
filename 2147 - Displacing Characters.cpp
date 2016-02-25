# include <iostream>

using namespace std;

int main()
{
    int casos;
    cin>>casos;
    while(casos>0)
    {
        string s;
        int k, aux = 1;
        cin>>s>>k;
        int tam = s.length();

        if(k>tam)
        {
            aux = k/tam;
            aux = k-(aux * tam);//aux dice cuanto hay que moverse realmente
        }
        string r = s;
        int cont = 0, aux1;
        if(aux == 1) aux1 = k;
        else aux1 = aux;
        for(int i = 0; i<tam * aux1;i++)
        {
            if(cont+1 == tam)
            {
                char bob = s[cont];
                cont = 0;
                r[cont] = bob;
                s = r;
            }else {r[cont+1] = s[cont]; cont++;}
        }
        cout<<r<<endl;
        casos--;
    }

    return 0;
}
