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

    /* data */
}s1;
void add_book()
{
    std::ofstream out("Book12.csv", ios::out | ios::app);
    cout<<"Enter the serial number :- \t";
    cin>>s1.sr_no;
    cout<<"Enter the book's author name:- \t";
    cin>>s1.book_author;
    cout<<"Enter the book's name :- \t";
    cin>>s1.book_name;
    out<<s1.sr_no<<","<<s1.book_author<<","<<s1.book_name<<","<<endl;
}
void get_data()
{
    std::ifstream in("Book12.csv");

    string st;
    while (in.eof()==0)
    {
        getline(in,st);
        cout<<st<<endl;

        /* code */
    }
    
    
    
    

}
void searching(){
    std::string srh;
    std::ifstream in("Book12.csv", ios::out | ios::app);
    std::cout<<"Enter your Account number :- \t";
    std::cin>>srh;
    std::ifstream book("Book12.csv");
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
            std::cout<<line<<"\n";
        }
    }
}

int main()
{
    int choose;
    char opt;
    std::ofstream out("Book12.csv", ios::out |ios::app);
    std::ifstream in("Book12.csv");
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
