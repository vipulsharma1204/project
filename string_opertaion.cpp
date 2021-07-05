#include<iostream>

using namespace std;
int main()
{
    // -----------------------------------------------------Enter all character in same CASE-----------------------------------------------------
    char str[100]="anubhav sharma is besst he can do anything tyerms and conditions applied";
    int l=0;
    for (int i = 0; str[i]!='\0'; i++)
    {
        /* code */l+=1;
    }
    
    int i=0;
    cout<<"total length of the string is :- \t"<<l<<"\n";
    
    for (int i = 0; i < l; i++)
    {
       for (int j = l; j >= i; j--)
       {
           if (i==j)
           {
               j--;
               /* code */
           }
           else
           {
               if (str[i]==str[j])
               {
                   cout<<"match found \t"<<i<<"  "<<j<<"\t"<<str[i]<<"\n";
                   /* code */
               }

               
           }
           
           
           /* code */
       }
       
        
        
    }
    cout<<"\n\n\n\n\n\nVaccant places in matching are space which are provided in string\n\n\n\n\n\n";
    
}
// wap to count the number of character repeated in the string