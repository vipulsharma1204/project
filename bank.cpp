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
    string name;
    string address;
    long long int AccNo;
    float balance;
    float openBalance;
    float Debit;
    float Credit;



    /* data */
}B1;
void accountno()
{
    for (int i = 0; i < 1; i++)
    {
        int num;
        std::ifstream in("accountno.txt");
        in>>num;
        cout<<num<<endl;
        std::ofstream out("accountno.txt");
        num+=10;
        cout<<num;
        out<<num;
        /* code */
    }
    
}
void add_account()
{
    time_t timetoday;
    time (&timetoday);


    std::ofstream out("acc.csv", ios::out | ios::app );
    cout<<"Enter the customer name :- \t";
    cin>>B1.name;
    cout<<"\n Enter the Customer address :- \t";
    cin>>B1.address;
    cout<<"\n Enter the Opening Balance :- \t";
    cin>>B1.openBalance;
    accountno();
    out<<"(Accno):-    "<<B1.AccNo<<",(Name):-   "<<B1.name<<",(Address):-   "<<B1.address<<",(OpenBalance):-   "<<B1.openBalance<<","<<"(time):-   "<<asctime(localtime(&timetoday));
    //out<<","<<B1.AccNo<<","<<B1.name<<","<<B1.address<<","<<B1.openBalance<<","<<asctime(localtime(&timetoday));
    cout<<"Customer name :- \t"<<B1.name;
    cout<<B1.name<<" your Address is:- \t"<<B1.address;
    cout<<"Opening Balance :- \t"<<B1.openBalance;
    

}
void searching()
{
    string srh;
    std::ifstream in("acc.csv", ios::out | ios::app);
    cout<<"Enter your Account number :- \t";
    cin>>srh;
    std::ifstream book("acc.csv");
    std::string line;
    //cout<<book<<endl;
    while(std::getline(book,line)){
        std::string name = "";

        int l = line.length();
        for(int i=0;i<l;i++){
            if(line[i]==' '){
                for(int j=i;j<l;j++){
                    if(line[j]==',') break;
                    if(line[j]!=' ')name += line[j];
                }
                break;
            }
        }
        if(name==srh){
            cout<<line<<"\n";
        }
    }
}
void show_data()
{
    std::ifstream in("acc.csv");

    string st;
    while (in.eof()==0)
    {
        getline(in,st);
        cout<<st<<endl;

        /* code */
    }
    
    
}

void add_balance()
{
    string srh;
    std::ifstream in("acc.csv", ios::out | ios::app);
    cout<<"Enter your Account number :- \t";
    cin>>srh;
    std::ifstream book("acc.csv");
    std::string line;
    //cout<<book<<endl;
    while(std::getline(book,line)){
        std::string name = "";

        int l = line.length();
        for(int i=0;i<l;i++){
            if(line[i]==' '){
                for(int j=i;j<l;j++){
                    if(line[j]==',') break;
                    if(line[j]!=' ')name += line[j];
                }
                break;
            }
        }
        if(name==srh){
            cout<<line<<"\n";
            // cout<<
        }
    }
    
    
}
int main()
{
    int choose;
    char opt;
    do
    {
        cout<<"\n\n----------------------------WELCOME--------------------------------\n\n";
        cout<<"1.\t Add an Account\n";
        cout<<"2.\t Find a user Details\n";
        cout<<"3.\t Show All Account Details\n";
        cout<<"4.\t Deposit Amount\n";
        cout<<"5.\t Withdraw Amount\n";
        cout<<"6.\t Balance Enquiry\n";
        cout<<"7.\t Close an Accoount\n";
        cout<<"8.\t Modify An Account\n";
        cout<<"9.\t Exit\n";
        cout<<"\n\n\n------------------------------------------------------------------\n\n";
        cout<<"Choose any one option from the above Menu \t";
        cin>>choose;
        if (choose<=4)
        {
            switch (choose)
            {
                case 1:
                    do
                    {
                    add_account();
                    cout<<"Do you want to add more account details <Y/N> :- \t";
                    cin>>opt;
                    
                    } while (toupper(opt)=='Y');                
                    break;
                case 2:
                    do
                    {
                    searching();
                    cout<<"Do you want to search more User Details :- \t";
                    cin>>opt;
                    /* code */
                    } while (toupper(opt)=='Y');
                    break;
                case 3:
                    show_data();
                    break;
                case 4:

                case 9:
                    exit(1);
                    break;
            
            
            }
            /* code */
        }
        
        /* code */
    } while (opt!=4);
    
}