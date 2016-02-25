# include <iostream>

using namespace std;

int main()
{
    int a,b;
    unsigned long long suma;
    cin>>a>>b;
    suma=a+b;
    suma+=a-b;
    suma+=b+a;
    suma+=b-a;
    cout<<suma<<endl;
    return 0;
}

