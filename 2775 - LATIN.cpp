# include <iostream>

using namespace std;


bool isVowel(char ch) {
	    if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
	         return true;
	    else return false;
	}

int main()
{
    int casos;
    string queso;
    cin>>casos;
    for(int c = 0 ; c <casos ; c++)
    {
        cin>>queso;
        int tam = queso.length();
        if(isVowel(queso[0]))queso += "cow";
        else
            {
                char aux = queso[0];
                queso += aux;
                queso += "ow";
                tam = queso.length();
                queso[tam] = ' ';
                for(int q = 0; q < tam; q++)queso[q] = queso[q + 1];
            }
        cout<<queso<<"\n";
    }
    return 0;
}
