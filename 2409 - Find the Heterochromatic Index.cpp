# include <iostream>

using namespace std;

int main()
{
    string x;
    int dif, a,b;
    cin>>x;
    cin>>a>>b;

    dif = a - b;
    if(dif<0)dif = dif * -1;
    cout<<x<<" "<<dif;
    return 0;
}
