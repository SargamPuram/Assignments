/*
 Develop an object oriented program in C++ to create a database of student information
system containing the following information: Name, Roll number, Class, division, Date of
Birth, Blood group, Contact address, telephone number, driving license no. and other.
Construct the database with suitable member functions for initializing and destroying the
data viz constructor, default constructor, Copy constructor, destructor, static member
functions, friend class, this pointer, inline code and dynamic memory allocation
operators-new and delete
*/

#include <iostream>
#include <string>
#include <string.h>


class data{
    static int student_count;
    static void count_plus(){
        student_count ++ ;
    }
    private:
        std::string name;
        unsigned short roll_no;
        char division;
        int date_of_birth;
        std::string blood;
        std::string address;
        int contact;
        int license;

    public:
        friend void print(data s);
        data(){
            //count_plus();
        }
        void input(){
            std::cout << "Enter Name > ";
            getline(std::cin, name);
            std::cout << std::endl;

            std::cout << "Enter Roll No > ";
            std::cin >> roll_no;
            std::cout << std::endl;

            std::cout << "Enter division > ";
            std::cin >> division;
            std::cout << std::endl;
            
            std::cout << "Enter  Date Of Birth > ";
            std::cin >> date_of_birth;
            std::cout << std::endl;

            std::cout << "Enter blood group > ";
            getline(std::cin, blood); 
            std::cout << std::endl;

            std::cout << "Enter Address > ";
            getline(std::cin , address);
            std::cout << std::endl;


            std::cout << "Enter contact > ";
            std::cin >> contact;
            std::cout << std::endl;


            std::cout << "Enter license  > ";
            std::cin >> license;
            std::cout << std::endl;
        }


        data( data &obj ){
            this->name = obj.name;
            this->date_of_birth = obj.date_of_birth;
            this->address = obj.address;
            this->blood = obj.blood;
            this->contact = obj.contact;
            this->division = obj.division;
            this->roll_no = obj.roll_no;
            this->license = obj.license;
            //count_plus();
        }

        ~data(){
            std::cout << "DataBase of " << name << " Student is destroyed. :(" << std::endl;
        }
};
void print(data s){
    std::cout << "Name : " << s.name;
    std::cout << "Date Of Birth : " << s.date_of_birth;
    std::cout << "Address : " << s.address;
    std::cout << "Blood Group : " << s.blood;
    std::cout << "Contact No : " << s.contact;
    std::cout << "Division : " << s.division;
    std::cout << "Roll No : " << s.roll_no;
    std::cout << "License : " << s.license;
}

int main(){
    data * Sargam = new data();
    Sargam->input();
    print(*Sargam);
}
/*
#include<iostream>
#include<string.h>
using namespace std;

class StudData;

class Student{
    string name;
    int roll_no;
    string cls;
    char* division;
    string dob;
    char* bloodgroup;
    static int count;

    public:

    Student()          // Default Constructor
    {
        name="";
        roll_no=0;
        cls="";
        division=new char;
        dob="dd/mm/yyyy";
        bloodgroup=new char[4];
    }

    ~Student()
    {
        delete division;
        delete[] bloodgroup;
    }

    static int getCount()
    {
        return count;
    }

    void getData(StudData*);
    void dispData(StudData*);
};

class StudData{
    string caddress;
    long int* telno;
    long int* dlno;
    friend class Student;

    public:

    StudData()
    {
        caddress="";
        telno=new long;
        dlno=new long;
    }

    ~StudData()
    {
        delete telno;
        delete dlno;
    }

    void getStudData()
    {
        cout<<"Enter Contact Address : ";
        cin.get();
        getline(cin,caddress);
        cout<<"Enter Telephone Number : ";
        cin>>*telno;
        cout<<"Enter Driving License Number : ";
        cin>>*dlno;
    }

    void dispStudData()
    {
        cout<<"Contact Address : "<<caddress<<endl;
        cout<<"Telephone Number : "<<*telno<<endl;
        cout<<"Driving License Number : "<<*dlno<<endl;
    }
};

inline void Student::getData(StudData* st)
{
    cout<<"Enter Student Name : ";
    getline(cin,name);
    cout<<"Enter Roll Number : ";
    cin>>roll_no;
    cout<<"Enter Class : ";
    cin.get();
    getline(cin,cls);
    cout<<"Enter Division : ";
    cin>>division;
    cout<<"Enter Date of Birth : ";
    cin.get();
    getline(cin,dob);
    cout<<"Enter Blood Group : ";
    cin>>bloodgroup;
    st->getStudData();
    count++;
}

inline void Student::dispData(StudData* st1)
{
    cout<<"Student Name : "<<name<<endl;
    cout<<"Roll Number : "<<roll_no<<endl;
    cout<<"Class : "<<cls<<endl;
    cout<<"Division : "<<division<<endl;
    cout<<"Date of Birth : "<<dob<<endl;
    cout<<"Blood Group : "<<bloodgroup<<endl;
    st1->dispStudData();
}

int Student::count;

int main()
{
    Student* stud1[100];
    StudData* stud2[100];
    int n=0;
    char ch;

    do
    {
        stud1[n]=new Student;
        stud2[n]=new StudData;
        stud1[n]->getData(stud2[n]);
        n++;
        cout<<"Do you want to add another student (y/n) : ";
        cin>>ch;
        cin.get();
    } while (ch=='y' || ch=='Y');

    for(int i=0;i<n;i++)
    {
        cout<<"---------------------------------------------------------------"<<endl;
        stud1[i]->dispData(stud2[i]);
    }

    cout<<"---------------------------------------------------------------"<<endl;
    cout<<"Total Students : "<<Student::getCount();
    cout<<endl<<"---------------------------------------------------------------"<<endl;

    for(int i=0;i<n;i++)
    {
        delete stud1[i];
        delete stud2[i];
    }


    return 0;
}


*/