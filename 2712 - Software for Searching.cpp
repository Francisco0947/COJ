# include <iostream>
# include <map>

using namespace std;

map<int, string>cinta;
int busqueda(string h, int tam)
{
    int g = 0;
    for(int i = 0; i<tam;i++)
    {
        if(h==cinta[i])g++;
    }
    return g;
}

int main()
{
    int primeraCiudad;
    cin>>primeraCiudad;
    for(int aux = 0; aux < primeraCiudad; aux++)
    {
        string a, h = " ";
        bool ban = false;
        cin>>a;
        cout<<"entro"<<endl;
        int tam = a.length();
        cout<<"a"<<a<<"su tama;o"<<tam<<endl;
        for(int aux1 = 0; aux1 < tam; aux1++)
         {
             if(ban == true) h += a[aux1];
             if(a[aux1]==' ')ban = true;
             cout<<"h: "<<h<<endl;
         }
        cinta[aux] = h;
        cout<<cinta[aux]<<" "<<aux<<endl;
    }
    cout<<"q pedo"<<endl;
    int segCity, coin;
    cin>>segCity;
    cout<<"ni p idea"<<endl;
    for(int i = 0; i<segCity; i++)
    {
        string a, h = " ";
        bool ban = false;
        getline(cin,a);
        int tam = a.length();
        for(int aux1 = 0; aux1 < tam; aux1++)
        {
             if(ban == true) h += a[aux1];
             if(a[aux1]==' ')ban = true;
        }
        coin = busqueda(h, primeraCiudad);
        cout<<coin<<"\n";
    }
    return 0;
}
