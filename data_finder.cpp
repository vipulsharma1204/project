#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <cstring>
using namespace std;
int main()
{
    int i,j;
    // string num;
    // cout << "Enter the Account number that you want to search:-\t";
    // cin >> num;
    string num = "229485775558997";
    int l=num.length();
    cout<<"L\t"<<l<<endl;
    int count = 0;
    std::ifstream in("bank.txt");
    string str;
    while (in.eof() == 0)
    {    
        
        getline(in, str);
        int len = str.length();
        // cout << "after sorting:- \t"<<endl;
        for (i = 0,j=0; i < l+1; i++, j++)
        {
            if (str[i] == ' ')
            {
                break;
            }
            else
            {
                cout << str[i];                
                
            }               
              
        }
        cout << " at " << count << endl;
        count = count + 1;
    }
}