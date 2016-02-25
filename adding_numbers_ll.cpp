# include <iostream>
# include <string>
# include <iomanip>
# include <locale>
# include <sstream>

using namespace std;

int validar(int a, char tama, char t)
{
    string Rest = static_cast<ostringstream*>( &(ostringstream() << a) )->str();
    int tam=Rest.length();
    for(int i=0;i<tam;i++)
    {
        if(Rest[i]==tama)
        {
            Rest[i]=t;
        }
    }
    istringstream(Rest) >> a;
    return a;
}

int main()
{
    int a, b, sum, sum2;
    cin>>a>>b;
    a = validar(a, '5','6');
    b = validar(b, '5','6');
    sum=a+b;
    a = validar(a, '6','5');
    b = validar(b, '6','5');
    sum2=a+b;
     if(sum>=sum2){cout<<sum2<<" "<<sum;}
     else cout<<sum<<" "<<sum2;
    return 0;
}
