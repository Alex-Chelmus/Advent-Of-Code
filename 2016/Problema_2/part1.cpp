#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;

ifstream fin("fisier.txt");

int main()
{
    if(!fin.is_open())
        cout<<"Nu s-a putut deschide fisierul!"<<endl;

    int dir = 0;
    char caracter='\0';
    int numar = 0;
    char poz_ant = '\0';
    int x=0, y=0;

    while(fin>>caracter)
    {
        
        fin>>numar;

        if(caracter == 'R')
        {
            dir = abs(( dir + 1 ) % 4);
        }
        else
        {
            dir = abs(( dir + 3 ) % 4);
        }
        
        if(dir == 0)
            x += numar;
        if(dir == 2)
            x -= numar;
        if(dir == 1)
            y += numar;
        if(dir == 3)
            y -= numar;

       
        fin>>caracter;
    }
    cout<<abs(x)+abs(y);
    fin.close();
    return 0;
}