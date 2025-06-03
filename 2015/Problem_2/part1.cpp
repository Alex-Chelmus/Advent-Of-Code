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
    int suma = 0;
    int surplus = 0;

    while( fin >> numar )
    {
        l = numar;
        fin >> caracter;
        fin >> numar;
        w = numar;
        fin >> caracter;
        fin >> numar;
        h = numar;

        int l1 = l * w;
        int l2 = w * h;
        int l3 = l * h;

        suma += 2 * (l1 + l2 + l3);

        if(l1 < l2)
            if(l1 < l3)
                surplus += l1;
            else
                if(l2 < l3)
                    surplus += l2;
                else
                    surplus +=l3;
        else
            if(l2 < l3)
                surplus += l2;
            else
                surplus +=l3;

    } 

    int s = surplus + suma;

    cout << "Suma totala este: " << s;
    fin.close();
    
    return 0;
}
