# include <iostream>

using namespace std;

int main()
{
    string a,b;
    cin>>a;
    while(a[0]!='X' && a[0]!='x')
    {
        cin>>b;
        int tam = a.length(), con=0;
        for(int i =0; i<tam;i++)
        {
            if(a[i]!=b[i])con++;

        }
        cout<<"Hamming distance is "<<con<<"."<<endl;
        cin>>a;
    }
    return 0;
}
