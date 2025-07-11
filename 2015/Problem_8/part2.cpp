#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;

ifstream fin("f1.txt");

int newchar(char string[]);

int main()
{
    char string[100];
    int totalchar = 0;
    int newch = 0;

    while (fin >> string)
    {
        totalchar += strlen(string);
        newch += newchar(string);
    }

    cout << newch - totalchar << endl;

    return 0;
}

int newchar(char string[])
{
    int nr = 0;

    for (int i = 0; i < strlen(string); i++)
    {
        if (string[i] == '"' || string[i] == '\\')
            nr++;
        nr++;
    }
    return nr + 2;
}
