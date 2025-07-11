#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;

ifstream fin("f1.txt");

int truechar(char string[]);

int main()
{
    char string[100];
    int totalchar = 0;
    int trchar = 0;

    while (fin >> string)
    {
        totalchar += strlen(string);
        trchar += truechar(string);
    }

    cout << totalchar - trchar << endl;

    return 0;
}

int truechar(char string[])
{
    int len = strlen(string);
    int nr = 0;

    for (int i = 1; i < len - 1; i++)
    {
        if (string[i] == '\\')
        {
            if (string[i + 1] == '\\' || string[i + 1] == '"')
            {
                nr++;
                i++;
            }
            else
                if (string[i + 1] == 'x' && i + 3 < len)
                {
                    nr++;
                    i += 3;
                }
                else
                {
                    nr++;
                    i++;
                }
        }
        else
            nr++;
    }

    return nr;
}
