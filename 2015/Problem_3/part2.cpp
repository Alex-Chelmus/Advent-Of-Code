#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("f1");

int a[1001][1001];

int main() 
{

    char caracter;
    int pozv = 500, pozl = 500;
    int pozvr = 500, pozlr = 500;
    a[pozv][pozl]++;
    int s=0;
    int isSanta=0;

    while(fin>>caracter)
    {
        if(isSanta %2 == 0)
        {
            if(caracter == '^')
            pozv++;
            else
                if(caracter == 'v')
                    pozv--;
            else
                if(caracter == '>')
                    pozl++;
                else
                    pozl--;
        
            a[pozv][pozl]++;

        }
        else
        {
            if(caracter == '^')
            pozvr++;
            else
                if(caracter == 'v')
                    pozvr--;
            else
                if(caracter == '>')
                    pozlr++;
                else
                    pozlr--;
        
            a[pozvr][pozlr]++;
        }
        isSanta++;
    }

    for(int i=0;i<1000;i++)
    {
        for(int j=0;j<1000;j++)
            if(a[i][j] != 0 )
                s++;
    }

    cout<<s;
    fin.close();
    return 0;
}
