# include <iostream>

using namespace std;

int  main()
{
    int y, t=0;
    cin>>y;
    if(0<y)
    {
        for(int o=1; o<=y;o++)
        {
            t+=o;
        }
        cout<<t;
    }else

    {
    for(int o=-1;o>=y;o--)
        {
            t+=o;
        }
        t=t+1;
        cout<<t;
    }
  return 0;
}
/*int a, contador=0,b;
    cin>>a;
    int y[a];
    for(int i=0; i<a;i++)
    {
      cin>>b;
      y[i] = b;
    }

    for(int i=0;i<a;i++)
    {
        if(y[i]%4==0)
        {
              cout<<"YES"<<endl;
        }else cout<<"NO"<<endl;
    }*/
