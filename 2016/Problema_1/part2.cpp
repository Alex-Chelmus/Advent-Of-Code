#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;

ifstream fin("fisier.txt");

int vx[1001];
int vy[1001];
int k;

int main()
{
    if(!fin.is_open())
        cout<<"Nu s-a putut deschide fisierul!"<<endl;

    int dir = 0;
    char caracter='\0';
    int numar = 0;
    char poz_ant = '\0';
    int x=0, y=0;
    int z=0;
    
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
        
        for (int i = 0; i < numar; i++) {
            if (dir == 0) y++;
            if (dir == 1) x++;
            if (dir == 2) y--;
            if (dir == 3) x--;

            for (int j = 0; j < k; j++) {
                if (vx[j] == x && vy[j] == y) {
                    z = abs(x) + abs(y);
                    cout << z << endl;
                    return 0;
                }
            }

            vx[k] = x;
            vy[k] = y;
            k++;
        }
       
        fin>>caracter;
    }
    cout<<z;
    fin.close();
    return 0;
}