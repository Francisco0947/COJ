# include <iostream>

using namespace std;

int  main()
{
    int a, contador=0,b;
    cin>>a;
    int y[a];
    for(int i=0; i<a;i++)
    {
      cin>>b;
      y[i] = b;
      if(y[i]%4==0 && y[i]!=0)
        {
            cout<<"YES"<<endl;
        }else cout<<"NO"<<endl;
    }
  return 0;
}
