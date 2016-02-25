# include <cstdio>
# include <iostream>

using namespace std;

int main()
{
    long long a=0,b=0,c=0;
    do
    {
        cin>>a>>b>>c;
        if(a == 0 && b == 0 && c == 0) break;
        else if((a*a)+(b*b) == (c*c))printf("right\n");
        else printf("wrong\n");
    } while(a != 0 || b != 0 || c != 0);
    return 0;

}
