# include <iostream>

using namespace std;

int main()
{
    int casos,a,b,c;
    double aa,bb,cc;
    cin>>casos;
    while(casos>0)
    {
        cin>>aa>>bb>>cc;
        a= aa;
        b= bb;
        c= cc;
        if(a==0 && b==0 && c != 0)cout<<"NO"<<"\n";
        else if(aa+bb==c)cout<<"YES"<<"\n";
        else if(aa-bb==c)cout<<"YES"<<"\n";
        else if(aa*bb==c)cout<<"YES"<<"\n";
        else if(b == 0)cout<<"NO"<<"\n";
        else if(aa/bb==c)cout<<"YES"<<"\n";
        else if(a%b==c)cout<<"YES"<<"\n";
        else cout<<"NO"<<"\n";
        casos--;
    }
    return 0;
}
