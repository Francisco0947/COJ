# include <iostream>

using namespace std;

int main()
{
    string nom, ape;
    int K, Ra,n;
    double w,we,p,pro=0;
    cin>> nom;
    cin>> n;
    string a[n];
    int b[n];
    for(int i = 0; i< n; i++)
    {
        cin>>ape;
        cin>>Ra>>w>>we>>K;
        a[i] = ape;
        p = Ra + K*(w - we);
        int r  = int(p*1.0+.5)/1.0;
        b[i] = r;
        pro += Ra;
    }
    cout<<"Tournament: "<<nom<<endl;
    cout<<"Number of players: "<<n<<endl;
    cout<<"New ratings:"<<endl;
    for(int i = 0; i< n; i++)
    {
        cout<<a[i]<<" "<<b[i]<<endl;
    }
    double y = pro/n;
    pro =  int(y*1.0+.5)/1.0;
    cout<<"Media Elo: "<<pro<<endl;
    return 0;
}
