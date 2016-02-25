# include <iostream>
# include <string>
# include <cmath>
using namespace std;
int main()
{
   string a;
   cin>>a;
   int b = a.length(), d=0;
   unsigned long long c=0;
   for (int i=b;i>=0;i--)
   {
           if(a[i-1]=='1')
           {
               c+=powl(2, d);
           }
           d++;
           cout<<d<<": c " <<c<<endl;
   }
    cout<<"  c: " <<c;
    return 0;
}
