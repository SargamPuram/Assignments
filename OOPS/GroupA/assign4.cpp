#include<iostream>
#include<fstream>
using namespace std;

class book
{
    int bid;
    char name[15];
    float price;
    public:
        void getdata();
        void display();

};

void book::getdata()
{
    cout<<"Enter the name : "<<"\n";
    cin>>name;
    cout<<"Enter the bid : "<<"\n";
    cin>>bid;
    cout<<"Enter price : "<<"\n";
    cin>>price;
}

void book::display()
{
    cout<<"Name: "<<name<<"\n";
    cout<<"BID: "<<name<<"\n";
    cout<<"Price: "<<name<<"\n";
}

int main()
{
    book s,t;
    s.getdata();
    fstream f;
    f.open("temp.txt",ios::out|ios::binary|ios::in);
    f.write((char *)&s,sizeof(s));
    f.seekg(0);
    while(f)
    {
        f.read((char *)&t,sizeof(t));
        t.display();
    }
    f.close();
    return 0
}