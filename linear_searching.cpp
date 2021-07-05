#include<iostream>
using namespace std;
int main()
{
    int num;
    int arr[10] = {1, 787, 54, 5485, 2, 44, 5, 245, 54, 45};
    int flag = 0;
    for (int i = 0; i < 10; i++)

        cout << arr[i] << "\t";
    /* code */
    cout << endl;
    cout << "Enter the elemeent you want to search:- \t";
    cin >> num;
    for (int i = 0; i < 10; i++)
    {
        if (arr[i] == num)
        {
            cout << "element is at :-\t" << i + 1 << " position";
            cout << "\n";
            flag++;
            break;
            /* code */
        }
    }
    if (flag == 0)
    {
        cout << "Element not found  :-(\n";
        /* code */
    }
    else
    {
        cout << "Thank You :-)";
        /* code */
    }
}