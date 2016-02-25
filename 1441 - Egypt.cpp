# include <iostream>

using namespace std;

int main()
{
        int a,b,c;
        cin>>a>>b>>c;
    do{
        int mayor = 0;
        if(a==0 || b == 0 || c== 0 )cout<<"wrong"<<endl;
        else{
            if(mayor<a) mayor  = a;
            if(mayor<b) mayor  = b;
            if(mayor<c) mayor  = c;
            if(mayor*mayor == ((a*a)+(b*b)+(c*c)) - mayor*mayor)cout<<"right"<<endl;
            else cout<<"wrong"<<endl;
        }
        cin>>a>>b>>c;
    }while(a!=0 || b!=0 || c!=0);


    return 0 ;
}
