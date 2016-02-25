# include <iostream>
# include <cstdio>

using namespace std;

int main()
{
    string x;
    cin>>x;
    if(x == "circle")
    {
        double radio;
        cin>>radio;
        radio = 3.14*(radio* radio);
        cout<<radio;

    }else if(x == "triangle")
    {
        double base,altura;
        cin>>base>>altura;
        base = (base * altura)/2;
       cout<<base;

    }else if(x == "rhombus")
    {
        double a,b;
        cin>>a>>b;
        a = (a*b)/2;
        cout<<a;
    }
    return 0;
}
