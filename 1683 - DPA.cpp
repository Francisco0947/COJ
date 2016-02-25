# include <iostream>

using namespace std;

int main()
{
    int casos, n;
    cin>>casos;
    for(int a = 0; a<casos;a++)
    {
        cin>>n;
        int lol = 0;
        for(int i = 1; i<n;i++)
        {
            if(n%i==0)lol+=i;
        }
        if(lol<n)cout<<"Deficient"<<"\n";
        else if(lol == n)cout<<"Perfect"<<"\n";
        else cout<<"Abundant"<<"\n";
    }
    return 0;
}
