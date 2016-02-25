# include <iostream>

using namespace std;

int main()
{
    int tam, start, letra = 0, pepe=0, juan =0, aux = 0;
    bool ban;
    string x;

    cin>>tam;
    cin>>x;
    cin>>start;
    if(start % 2 == 0) ban = true;
    else ban = false;
    for(int u = 65; u<=90; u++)
    {
        for(int i = 0; i<tam; i++)
        {
            if(x[i] == u){aux++; letra++;}
        }
        aux = aux * (tam - letra);

        if(ban){ pepe += aux; ban = false;}
        else{juan += aux; ban = true;}
        aux = 0;
    }
    if(pepe>juan)cout<<"PEPE "<<pepe - juan;
    else  cout<<"JUAN "<<juan - pepe;
    return 0;
}
