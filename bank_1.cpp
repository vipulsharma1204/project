#include<iostream>
#include<fstream>
#include<stdlib.h>
#include<iomanip>
#include<ctime>
#include<cstring>
#include<ctype.h>
// long long int accno=229485775558897;
using namespace std;
struct bank_Data
{
    long long int *accno, *aadharno;
    float *amount, *openingbalance, *credit, *debit;
    long long int *number;
    string address[100];
    string Name[50];
    
    long long int num;



    /* data */
}B1;
void accountno()
{
    for (int i = 0; i < 1; i++)
    {
        
        std::ifstream in("accountno.txt");
        // std::ofstream out("accountno.txt");
        in>>B1.num;
        // cout<<num<<endl;
        std::ofstream out("accountno.txt");
        B1.num+=10;
        // cout<<num;
        out<<B1.num;
        /* code */
    }
    
}
void add_account()
{
    std::ofstream out("bank.txt", ios::app|ios::out);
    int size, i;
    

    cout<<"Enter the number of account that you want to create :- \t";
    cin>>size;
    B1.amount= new float[size];
    B1.openingbalance = new float[size];
    B1.credit = new float[size];
    B1.debit = new float[size];
    B1.number = new long long int[size];
    B1.accno= new long long int[size];
    B1.aadharno = new long long int[size];
    // B1.address = new char[100][size];
    // B1.Name=new char[50][size];



    if ((!B1.aadharno)||(!B1.amount)||(!B1.number)||(!B1.credit)||(!B1.debit)||(!B1.openingbalance))
    {
        cout<<"Out of memory!aborting! :(\n";

        /* code */
    }
    cout<<"\n\n\n While adding user's name use _ in place of SPACE for error free interface\n\n\n";
    for (int i = 0; i < size; i++)
    {
        cout<<"\n\n\nEnter "<<i+1<<" User Deatils\n\n\n";
        cout<<"Enter the user Aadhar number :- \t"<<endl;
        cin>>B1.aadharno[i];
        cout<<"Enter the user Mobile Number :- \t"<<endl;
        cin>>B1.number[i];
        cout<<"Enter the user Name:- \t"<<endl;
        cin>>B1.Name[i];
        cout<<"Enter the user address :- \t"<<endl;
        cin>>B1.address[i];
        cout<<"Enter opening balance :- \t"<<endl;
        cin>>B1.openingbalance[i];
        accountno();
        B1.accno[i]=B1.num;
        out<<B1.accno[i]<<"  "<<B1.aadharno[i]<<"  "<<B1.number[i]<<"  "<<B1.Name[i]<<"  "<<B1.address[i]<<"  "<<B1.openingbalance[i]<<endl;
        cout<<"\n\n\n";


        /* code */
    }
    for (i = 0; i < size; i++)
    
    {   
        cout<<"\n\n\n"<<(i+1)<<" User's Details:-\n\n\n\n";

        cout<<"\n\n\nYour account number is "<<B1.accno[i]<<"\n\n\n";
        cout<<"user name:- \t"<<B1.Name[i]<<endl;
        cout<<"User's Aadhar number:-\t"<<B1.aadharno[i]<<endl;
        cout<<"User's Aaddress:- \t"<<B1.address[i]<<endl;
        cout<<"User's Contact Number :- \t"<<B1.number[i]<<endl;
        cout<<"you opened with "<<B1.openingbalance[i]<<" balance"<<endl;
    }

    
    
    
        
}
void show_all()
{
    std::ifstream in ("bank.txt");
    //  std::ifstream file("input.txt");
    std::string str;
    get(0);
    
}
void searching()
{
    string accno=0, str;
    cout<<"Enter your account number :- \t"<<endl;
    cin>>accno;
    cout<<endl;
    std::ifstream in("bank.txt");
    while (in.eof()==0)
    {
        getline(in,str);
        if (str==accno)
        {
            cout<<"Match found";
            
        }
        else
        {
            cout<<"\n";
        }
        
        /* code */
    }
    
}

int main()
{
    // add_account();
    show_all();
    // searching();
    exit(0);
}