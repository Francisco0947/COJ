# include <iostream>

using namespace std;

int main()
{
    string a,b;
    cin>>a>>b;
    unsigned long long tamA = a.length(), tamB = b.length();
    unsigned long long sum = 0;
    for(unsigned long long i = 0; i< tamA; i++)
    {
        for(unsigned long long j = 0;j<tamB;j++)
        {
            int p,q;
            p = a[i] -48;
            q = b[j] -48;
            sum += p*q;
        }
    }
    cout<<sum<<"\n";
    return 0;
}
