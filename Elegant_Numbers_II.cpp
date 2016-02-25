# include <iostream>
# include <cstdlib>

using namespace std;

long long validar(string a)
{
    int tam = a.length();
    int aux;
    aux = a[0];
    a[0] = a[tam-1];
    a[tam-1] = aux;
    long long y = atoi(a.c_str());
    return y;
}

int main()
{
    string a;
    cin>>a;
    long long ini = atoi(a.c_str());
    long long fin =validar(a);
    if(fin >ini ){cout<<"YES"<<endl;}
            else cout<<"NO"<<endl;
return 0;
}
