#include<iostream>
using namespace std;

int main()
{
    string nm="8877082512";
    string mm="8877081512";
    for (int i = 0; i < 10; i++)
    {
        if (nm[i]!=mm[i])
        {
            cout<<nm[i]<<"  not matched at "<<i+1<<"th position";
            exit(1);

            /* code */
        }
        else
        {
            cout<<"matched"<<nm[i]<<endl;
        }
        
        
        /* code */
    }
    
    

}