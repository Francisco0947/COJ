# include <iostream>

using namespace std;

int main()
{
    int casos;
    cin>>casos;
    for(int i=0;i<casos;i++)
    {
        int ladrones, puertos = 1, aux;
        cin>>ladrones;
        for(int p = 1; p<=ladrones; p++)
        {
            cin>>aux;
            puertos +=(aux -1);
        }
        cout<<puertos<<"\n";
    }
    return 0;
}
