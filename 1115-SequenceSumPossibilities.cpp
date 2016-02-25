# include <iostream>
using namespace std;

int main()
{
    long long casos;
    cin>>casos;
    for(long long j = 0;j<casos;j++)
    {
        long long n, sum=0, c=0, ini =1,i;
        cin>>n;
        cin>>n;
        while(ini<n)
        {
            for(i = ini; sum<n; i++)
            {
                sum += i;
                if(sum == n)c++;
            }
            ini++;
            sum = 0;
        }
        cout<<j+1<<" "<<c<<endl;
    }
return 0;
}
