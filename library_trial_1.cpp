#include<iostream>
#include<fstream>
#include<stdlib.h>
#include<cstring>
#include<iomanip>
using namespace std;
struct library_data
{
    string book_name;
    string book_author;
    string sr_no;
    int date;
    int name;
    int admno;
    int count;

    /* data */
}s1;
void add_book()
{

    std::ofstream out("Book1.csv", ios::out | ios::app);
    cout<<"Enter the serial number :- \t";
    cin>>s1.sr_no;
    cout<<"Enter the book's author name:- \t";
    cin>>s1.book_author;
    cout<<"Enter the book's name :- \t";
    cin>>s1.book_name;
    
    out<<"(sr_no)"<<s1.sr_no<<", (B_auth.)"<<s1.book_author<<", (B_Name)"<<s1.book_name<<", "<<endl;
            
            
            
            
        
    
    
}
void get_data()
{
    std::ifstream in("Book1.csv");
    string st;
    while (in.eof()==0)
    {
        getline(in,st);
        cout<<st<<endl;
        /* code */
    }
    
    
    

}
void searching()
{
    char name[30];
    cout<<"Enter info of book to search";
    cin>>name; 
    std::ifstream book("Book1.csv");
    std::string line;
    while(std::getline(book,line)){
        std::stringstream lines(line);
        std::string cell;
        while(std::getline(lines, cell,',')){
            if(cell==name){
                cout<<"Found\n"<<line;
            }
            
            
        }
    }
    
}

int main()
{
    int choose;
    char opt;
    std::ofstream out("Book1.csv", ios::out |ios::app);
    std::ifstream in("Book1.csv");
    // out<<"serial no"<<", "<<"Book_Author"<<", "<<"Book_Name"<<"Admission_No"<<", "<<"Name"<<", "<<"Date";
    // get_data();
    // borrow();
    do
    {   
        cout<<"\n\n\n\n\n--------------------------library Book Detail----------------------\n\n\n\n\n\n";
        cout<<"1.\t Add book\n";
        cout<<"2.\t Show total book's details\n";
        cout<<"3.\t Search a abook\n";
        cout<<"4.\t Exit\n";
        cout<<"\n\n\n---------------------------------------------------------------------------\n\n\n\n";
        cout<<"\n Choose any one option from the above option :- \t";
        cin>>choose;
        if (choose<=4)
        {
            switch (choose)
            {
            case 1:
                do
                {
                    add_book();
                    cout<<"\n Do you want to add more books <Y/N>:- \t";
                    cin>>opt;
                    /* code */
                } while (toupper(opt)=='Y');
                break;
            case 2:
                cout<<"sr_no   "<<"Book_Author   "<<"Book_Name"<<endl;
                get_data();
                break;
                
            
            case 3:
                searching();
                break;

            case 4:
                exit(0);
                break;

            default:
                cout<<"Invalid input";
            
            }


            /* code */
        }else
        {
            cout<<"Choose the correct option :-(\n\n ------------------Try Again------------------\n\n\n\n";
            exit(0);
            /* code */
        } 
            /* code */
        }while (choose!=3);
        
        
    
    
   
    

    return 0;
    


    
}
