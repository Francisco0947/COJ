# include <iostream>

using namespace std;
int main()
{
    int casos;
    long long x;
    cin>>casos;
    for(int i = 0; i<casos;i++)
    {
        cin>>x;
        if(x == 0)cout<<"NO"<<"\n";
        else if(x%6 == 0)cout<<"YES"<<"\n";
        else cout<<"NO"<<"\n";
    }
    return 0;
}
