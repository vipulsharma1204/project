#include <iostream>
#include <cstring>
#include <fstream>
struct student
{
    int id;
    char name[25];
    int marks;
    int age;

    /* data */
} s1;
void insert_data()
{
    std::ofstream fwrite("demo.txt");
    std::cout << "Enter id:- \t";
    std::cin >> s1.id;
    fwrite<<s1.id;
    fwrite<<"\t";
    std::cout << "Enter the student name :- \t";
    std::cin >> s1.name;
    fwrite<<s1.name;
    fwrite<<"\t";
    std::cout << "Enter marks";
    std::cin >> s1.marks;
    fwrite<<s1.marks;
    fwrite<<"\t";
    std::cout << "Enter age";
    std::cin >> s1.age;
    fwrite<<s1.age;
    fwrite<<"\t";
    // fwrite << s1.id << "\t" << s1.name << "\t" << s1.marks << "\t" << s1.age;

}
void get_data()
{
    std::ifstream fread("demo.txt");
    student obj;
    fread >> obj.id;
    // read.get();
    fread >> obj.name;
    fread >> obj.age;
    fread >> obj.marks;
}
int main()
{
    int choose;
    char opt;
    // getc(nm);
    // std::ofstream fwrite("demo.txt");
    // std::ifstream fread("demo.txt");
    std::cout<<"\n\n\n\n\n-----------------------------Student Record-----------------------\n\n\n\n\n";
    std::cout<<"1.\t Add student data\n";
    std::cout<<"2.\t get student data\n";
    std::cout<<"\n\n\n\n---------------------------------------------------------------------------------------\n\n\n\n";
    std::cout<<"Choose any one option from the above menu:-\t";
    std::cin>>choose;
    while (true)
    {

        std::cout<<"can you want to perform any operation :- \t";
        std::cin>>opt;
        while (opt=='y' || opt=='Y')
        {
            switch (choose)
            {
                case 1:
                    insert_data();
                    break;
        
                case 2:
                    get_data();
                    break;
            }
            /* code */
        }
    }
    return 0;
}