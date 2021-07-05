#include<stdio.h>
#include<conio.h>
int main()
{
    int num;
    int arr[10]={1,45644,464,5444,454,45,45415,12,844,45};
    int flag=0;
    for (int i = 0; i < 10; i++)
    {
        printf("%d ",arr[i]);

    }
    printf("\n\n\n");
    printf("Enter the element you want to search :-\t");
    scanf("%d",&num);
    for (int i = 0; i < 10; i++)
    {
        if (arr[i]==num)
        {
            printf("Element is at %d  position",i+1);
            printf("\n");
            break;
            /* code */
        }
        
        /* code */
    }
    if (flag==0)
    {
        printf("Entered Element not found :-( \n");
        /* code */
    }
    else
    {
        printf("Thank You :-) \n");
    }
    
    
    
}