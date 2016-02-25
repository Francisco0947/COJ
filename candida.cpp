#include <iostream>

using namespace std;
int main()
{
    int cont=0, casos;
     cin>>casos;
    do{
     int candidatos=0, reg=0, contador=0, suma=0, asi=0, ban=0;
     cin>>candidatos>>reg;
     int ter[reg];
        do
        {
             int y[reg];
             for(int o=0; o<reg; o++)
             {
                 int w;
                 cin>>w;
                y[o]=w;
             }

             for(int a=0;a<reg;a++)
             {
               suma+=y[a];
             }
             ter[contador]= suma;
             contador++;
             suma=0;
        }while(contador<candidatos);

        for (int q=0; q<contador; q++)
        {
           if(asi<ter[q])
           {
               ban = q+1;
               asi=ter[q];
           }

        }
        cout<<ban<<endl;
        cont++;
    }while(cont<casos);
     return 0;
}

