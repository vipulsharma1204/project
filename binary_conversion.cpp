#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    int num, j=0,r,q;
    cout<<"Enter the number :- \t";
    cin>>num;
    int arr[100];
    
    while (num >0)
    {
        int q=num/2;
        
        int r=num%2;
        
        arr[j]=r;
        num=q;
        j++;
           
       
       
       
       
    }
    
    for (int i = j-1 ; i >=0; i--)
    {
        cout<<arr[i];
        /* code */
    }
    

    
    
    
    
    // cout<<"\n\n\n"<<l;
    return 0;


}