# include <iostream>

using namespace std;

int main()
{
    int prim, seg, p=0,s =0;
    cin>>prim>>seg;
    for(int y = 0; y<prim;y++)
    {
        int aux;
        cin>>aux;
        p += aux;
    }
    for(int y = 0; y<seg;y++)
    {
        int aux;
        cin>>aux;
        s += aux;
    }
    if(p==s)cout<<"tie"<<"\n";
    else if(p>s)cout<<"first win"<<"\n";
    else if(p<s)cout<<"second win"<<"\n";

    return 0;
}
