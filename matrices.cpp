#include<iostream>
using namespace std;
int main()
{
    int m,n,k;
    cout<<"Enter the number of rows:- \t";
    cin>>m;
    cout<<"\n Enter the number of column :- \t";
    cin>>n;
    int total=n*m;
    cout<<total<<"\n";
    int arr[n][m];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout<<"\nmatrices["<<i<<"]["<<j<<"]=  ";
            cin>>arr[i][j];
            /* code */
        }
        cout<<"\n";
        
        /* code */
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout<<arr[i][j]<<"  ";
            // cin>>j;
            /* code */
        }
        cout<<"\n";
        
        /* code */
    }
    for (int i = 0; i < m; i++)
    {
        for (k = 0; k <= i; k++)
        {
            cout<<" ";

            /* code */
        }
        for (int j = 0; j < n; j++)
        
            cout<<arr[j][i];
            /* code */
        
        
        
        cout<<"\n";

        /* code */
    }
    
    
}