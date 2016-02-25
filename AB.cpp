# include <iostream>

using namespace std;

int main()
{
    int a,b;
    cin>>a>>b;
    int y[5];
    y[0] = a+b;
    y[1] = a-b;
    y[2] = a*b;
    y[3] = a/b;
    y[4] = a%b;
    for (int i=0; i<5;i++)
    {
        cout<<y[i]<<endl;
    }
    return 0;
}
