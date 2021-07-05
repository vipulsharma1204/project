#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    int n=100, m=0;
    

    int store[n]; 
    long long int i;
    long long int flag=0;
    // cout<<"Enter the starting number :- \t";
    // cin>>start;
    // cout<<"\n Enter the ending number :- \t";
    // cin>>end;
    
    for (i = m; i < n+1; i++)
    {
        while (i>'\0')
        {
            int r=i/10;
            i=r;
            flag=flag+1;
            cout<<flag;
            /* code */
        }
            
    }
    

}