
# include <iostream>

using namespace std;

int main()
{

    string x;
    int casos;
    cin>>casos;
    for(int y = 0; y<casos; y++)
    {
        cin>>x;
        int tam = x.length();
        for(int i = 0; i < tam; i++)
        {
            if(islower(x[i])){
                    x[i] = toupper(x[i]);
            }
            else    x[i] = tolower(x[i]);
        }
        cout<<x<<"\n";
    }
    return 0;
}
/*
Int tolower(int c)  --------------------  convierte una letra a minúsculas
Int toupper(int c) --------------------  convierte una letra a mayúsculas
Int islower(int c) ---------------------- letras minúsculas
Int issupper(int c) --------------------  mayúsculas
*/
