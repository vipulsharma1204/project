#include <iostream>
using namespace std;
int main()
{
    char str[1000];
    cout << "Enter the string :- \t";
    gets(str);
    cout << "Enter the character which you want to check whether is it repeated or not :- \t";
    char c;
    cin >> c;
    for (int i = 0; str[i] != 0; i++)
    {
        if (str[i] == c)
        {
            cout << "character " << c << " repetaed at " << i + 1 << " position \n";
            /* code */
        }

        /* code */
    }
}
