# include <iostream>

using namespace std;

int main()
{
    int casos;
    cin>>casos;
    for(int i=0;i<casos;i++)
    {
        int round, levels =0, mayor = 0, arr[15];
        cin>>round;
        for(int j = 0; j<15;j++)
        {
            cin>>arr[j];
            if(arr[j]>mayor){
                levels++;
                mayor++;
            }else if(arr[j]<mayor)mayor= arr[j];
        }
        cout<<round<<" "<<levels<<endl;

    }

    return 0 ;
}
