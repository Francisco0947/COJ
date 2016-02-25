#include <iostream>

using namespace std;

int main()
{
  int a,b,i=0, fila=0, columna=0, cont=0, res,g=0;
  cin>>a;
  char car;
  cin>>b;
  res=b*b;
  int resul[res];
 for(i=0;i<b*b;i++)
  {
      resul[i]=0;
  }

  do
  {
      char free[b][b];
      do
      {

          if(columna !=b)
          {
          cin>>car;
          free[fila][columna]=car;
          columna++;
          }else
              {
                  fila++;
                  columna = 0;
              }

      }while (fila < b);

       fila=0;
       columna=0;
       int f=0,c=0,contadorcol=0, contadorfil=0;

        do
        {
             if(free[fila][columna]=='.')
             {
                 c=columna;
                 while(free[fila][c]=='.' && c!=b)
                 {
                    c++;
                    contadorcol++;
                    cout<<"encontre col: "<<contadorcol<<endl;
                 }

              if(free[fila+1][columna]=='.')
              {
                 c=columna;
                 while(free[fila+1][c]=='.' && c!=b)
                 {
                    c++;
                    contadorfil++;
                    cout<<"encontre fil: "<<contadorfil<<endl;
                 }
              }
                 if(contadorcol==contadorfil)
                 {
                     resul[g];
                     g++;
                 }
                 columna=c;
             }
              if(columna== b)
              {
                  columna=0;
                  fila++;
              }
               columna++;

        }while(fila<b);
    i++;
  }while(i<a);
  for(i=0;i<b*b;i++)
  {
      cout<<resul[i]<<endl;
  }
  return 0;
}
