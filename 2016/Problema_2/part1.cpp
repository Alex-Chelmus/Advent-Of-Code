#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("fisier");

int a[5][5]={{0,0,0,0,0},{0,1,2,3,0},{0,4,5,6,0},{0,7,8,9,0},{0,0,0,0,0}};

int main()
{
    char caracter;
    int poz = 5;
    int linie = 0;
    while(fin >> caracter)
    {
        int cod = poz;
        if(caracter == 'U' && cod != 0)
        {
            if(a[cod+3][linie] != 0)
            {
                cod = a[cod+3][linie];
            }
        }
        else
            if(caracter == 'D' && cod != 0 )
            {
                if(a[cod-3][linie] != 0 )
                {
                    cod = a[cod-3][linie];
                }
            }
            else
                if(caracter == 'L' && cod != 0 )
                {
                    if(a[linie][cod-1] != 0)
                    {
                        cod = a[linie][cod-1];
                    }
                }
                else
                    if(caracter == 'R' && cod != 0 )
                    {
                        if(a[linie][cod+1] != 0)
                        {
                            cod = a[linie][cod+1];
                        }
                    }
        linie++;
        poz = cod;
        cout<<cod;
    }
    return 0;
}