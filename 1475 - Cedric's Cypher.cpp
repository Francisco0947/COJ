# include <iostream>

using namespace std;

int main()
{
    string x;
    char a;
    std::getline (std::cin,x);
    while(x != "#")
    {
        int tam = x.length();
        a = x[tam-1];
        x[tam-1]=' ';
        int encrip = a - 65;
        for(int i = 0; i<tam-1; i++)
        {
            if(isalpha(x[i]))
            {
                if(islower(x[i]))
                {
                    x[i] -= encrip;
                    if(x[i]<97)
                    {
                        int auxi;
                        auxi = 97 - x[i];
                        x[i] =  123 - auxi;
                    }
                }else
                {
                    x[i] -= encrip;
                    if(x[i]<65)
                    {
                        int auxi;
                        auxi = 65 - x[i];
                        x[i] = 91 - auxi;
                    }
                }
            }
        }
        cout<<x<<"\n";
        std::getline (std::cin,x);
    }
    return 0;
}

