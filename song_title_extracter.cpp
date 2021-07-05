#include<iostream>
#include<fstream>
#include<cstring>
#include<ctype.h>
using namespace std;
int main()
{
    std::ifstream in("songs.txt");
    string str;
    char c='\b';
    while (in.eof()==0)
    {
        getline(in,str);
        int l=str.length();
        std::ofstream out("songsl.txt", ios::app | ios::out);
        if (l==0)
        {
            out<<c;
            /* code */
        }
        
        
        
        
        
        /* code */
    }
    cout<<"\n\n\n\n -------------------READING SONGS LIST----------------------\n\n\n\n\n";
    std::ifstream read("songsl.txt");
    string strn;
    while (read.eof()==0)
    {
        getline(read,strn);
        cout<<strn;
        /* code */
    }
    
}