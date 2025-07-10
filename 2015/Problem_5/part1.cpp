#include <iostream>
#include <fstream>
#include <string.h>

using namespace std;

ifstream fin("f1.txt");

int hasvowels(char string[]);

int hasdouble(char string[]);

int nostrings(char string[]);

int main()
{
    char string[20];
    int nice_strings = 0;
    
    while (fin >> string)
    {
        if (hasvowels(string) && hasdouble(string) && nostrings(string))       
            nice_strings++;
    }
    
    cout << "The number of nice strings is: " << nice_strings;

    return 0;
}

int hasvowels(char string[])
{
    char vowel[] = "aeiou";
    int vowels = 0;

    for (int i = 0; i < strlen(string); i++)
    {
        for (int j = 0; j < strlen(vowel); j++)
        {
            if (string[i] == vowel[j])
                vowels++;
        }
    }

    if (vowels >= 3)
        return 1;
    else
        return 0;
}

int hasdouble(char string[])
{
    int ok = 0;
    for (int i = 0; i < strlen(string) - 1; i++)
    {
        if (string[i] == string[i + 1])
            ok = 1;
    }
    if (ok == 1)
        return 1;
    else
        return 0;
}

int nostrings(char string[])
{
    const char* bad[] = { "ab", "cd", "pq", "xy"};
    for (int i = 0; i < 4; i++)
    {
        if (strstr(string, bad[i]) != NULL)
            return 0;
    }
    return 1;
}