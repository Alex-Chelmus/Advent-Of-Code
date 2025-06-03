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

    int nivel = 0;
    char caracter='\0';

    while (fin >> caracter) 
    {
        if (caracter == '(')
            nivel++;
        else 
            nivel--;

        
    }

    cout << "Nivelul la care a ajuns este: " << nivel << endl;

    fin.close();
    
    return 0;
}
