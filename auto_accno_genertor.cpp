#include<iostream>
#include<fstream>
#include<stdlib.h>
#include<iomanip>
#include<ctime>
#include<cstring>
#include<ctype.h>
using namespace std;
int main()
{
    time_t timetoday;
    time (&timetoday);
    cout<<asctime(localtime(&timetoday))<<"\n";
    std::ifstream in("accountno.txt");
    long long int num;
    const long long int accno=229485775558897;
    std::ofstream intr("accountno.txt", ios::out);
    intr<<accno;
    num=accno;
    num+=1;
    cout<<num;

    // accno+=1;
    // in<<accno;
   
    
    
}