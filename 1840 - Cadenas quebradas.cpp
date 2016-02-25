# include <iostream>
# include <map>

using namespace std;


map< int, string> Strings;

int main()
{
    int cases;
    cin>>cases;
    for(int i=0;i<cases;i++)
    {
        string input;
        cin>>input;
        Strings[i] = input;
    }
    for(int i = 0;i<cases;i++)
    {
        int b = 0;
        int r = 0;
        int o = 0;
        int k = 0;
        int e = 0;
        int n = 0;
        for(int j=0;j<Strings[i].size();j++)
        {
            string aux = Strings[i];
            switch(aux[j])
            {
            case 'B':
                b++;
                break;
            case 'R':
                r++;
                break;
            case 'O':
                o++;
                break;
            case 'K':
                k++;
                break;
             case'E':
                e++;
                break;
             case 'N':
                n++;
                break;
            }
        }
        if(b == r && r == o && o == k && k == e && e == n)cout<<"No Secure"<<'\n';
        else cout<<"Secure"<<'\n';
    }

    return 0;
}
