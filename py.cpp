#include<iostream>
#include<windows.h>
#include<cstring>
using namespace std;
int main()
{
    int num1[3];
    int num2[3];
    for (int i = 0; i < 3; i++)
    {
        
        cout<<"Enter the "<<i+1<<" Element :-\t";
        cin>>num1[i];

        /* code */
    }
    cout<<"\n input second number :- \n\n";
    
    for(int j =0; j<3; j++)
    {
        cout<<"Enter the "<<j+1<<" Element:- \t";
        cin>>num2[j];
    }
    for (int i = 3; i >=0; i--)
    {
        
        cout<<num1[i]<<" ";

        /* code */
    }
    cout<<"\n\nSecond number :- \t";
    for (int i = 3; i >=0; i--)
    {
        cout<<num2[i]<<" ";
        /* code */
    }
    
    
    
    
}