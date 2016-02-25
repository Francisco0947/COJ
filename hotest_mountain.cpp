#include <iostream>

using namespace std;

int main()
{
    int casos, mayor=0, index=0;
    cin>>casos;
    float y[casos], a;
    for(int o=0; o<casos;o++)
    {
        cin>>a;
        y[o]=a;
    }
    for(int i=0; i<casos; i++)
    {
        if(y[i]>mayor)
        {
            index=i;
            mayor =y[i];
        }else if(y[i]==mayor)
        {
            index=i;

        }
    }
    cout<<index+1;
    return 0;
}
