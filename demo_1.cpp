#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <iomanip>
#include <ctime>
#include <cstring>
#include <ctype.h>
#include <stdlib.h>
#include <stdio.h>
using namespace std;
int main()
{
    FILE *f = fopen("bank.txt", "r+");
    char c;
    char fulFile[1000000];
    int count = 0;

    //Reading for full file
    while (c != EOF)
    {
        c = fgetc(f);
        fulFile[count++] = c;
    }
    char lines[100][20];
    int lineCount = 0;
    int charCount = 0;

    //splitting into lines
    for (int i = 0;; i++)
    {
        //cout<<"Checking for : \t"<<fulFile[i]<<"\n";
        if (fulFile[i] == EOF)
            break;
        if (fulFile[i] == '\n')
        {
            //cout<<lines[lineCount]<<endl;
            lineCount++;
            charCount = 0;
        }
        else
        {
            lines[lineCount][charCount++] = fulFile[i];
        }
    }
    long int accNo[20];
    //getting acc nos into accNo array
    count = 0;
    for (int i = 0; i < lineCount; i++)
    {
        int j = 0;
        char tc = 'X';
        while (tc != '\0')
        {
            tc = lines[i][j++];
            if (tc == ' ')
            {
                break;
            }
            cout << tc;
        }
        cout << "\n";
    }
}
