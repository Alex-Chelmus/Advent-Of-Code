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
    int pozitie = 0;

    while (fin >> caracter && nivel != -1) 
    {
        if (caracter == '(')
            nivel++;
        else 
            nivel--;
        pozitie++;
    }

    cout << "Nivelul la care a ajuns este: " << nivel << endl;
    cout << "Pozitia dorita este: " << pozitie <<endl;

    fin.close();
    
    return 0;
}