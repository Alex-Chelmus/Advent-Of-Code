#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("f1");

int main() 
{

    if (!fin.is_open()) 
    {
        cerr << "Nu s-a putut deschide fisierul" << endl;
    }

    int l = 0, w = 0, h = 0;
    char caracter;
    int numar;
    int perimetru = 0;
    int volum = 0;

    while( fin >> numar )
    {
        l = numar;
        fin >> caracter;
        fin >> numar;
        w = numar;
        fin >> caracter;
        fin >> numar;
        h = numar;

        if(h >= l && h >= w)
            perimetru += 2*l + 2*w;
        else
            if(l >=h && l >= w)
                perimetru += 2*h + 2*w;
            else
                perimetru += 2*l + 2*h;
        
        volum += l*h*w;

    } 

    int s = perimetru+volum;

    cout << "Suma totala este: " << s;
    fin.close();
    
    return 0;
}