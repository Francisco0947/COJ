# include <iostream>

using namespace std;

int main()
{
    long long num, den, ent;


    cin>>num>>den;
    while(num != 0 && den != 0)
    {
        //long long aux;
        //ent = num/den;
        //aux = ent * den;
        //num = num - aux;

        cout<<ent<<" "<<num<<" / "<<den<<"\n";
        cin>>num>>den;
    }
    return 0;
}
