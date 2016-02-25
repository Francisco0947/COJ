# include <iostream>

using namespace std;

bool isVowel(char a)
{
    if(a == 'A' || a == 'E' ||a == 'I' ||a == 'O' ||a == 'U' ) return true;
    else return false;
}

int main()
{
    string x;
    cin>>x;
    int tam = x.length() , voca = 0, conso = 0 ;
    for(int y = 0; y<tam; y++)
    {
        if(isVowel (x[y])) voca ++;
        else conso++;
    }
    cout<<voca<<" "<<conso;

    return 0;
}
