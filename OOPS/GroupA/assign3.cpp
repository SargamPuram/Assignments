/*
 * A book shop maintains the inventory of books that are being sold at the shop. The list
includes details such as author, title, price, publisher and stock position. Whenever a
customer wants a book, the sales person inputs the title and author and the system
searches the list and displays whether it is available or not. If it is not, an appropriate
message is displayed. If it is, then the system displays the book details and requests for
*/

#include <iostream>
using namespace std;

class publication{
    string name;
    float price;
    public:
        void input(){
            cout << "enter publication name > ";
            cin.ignore();
            getline(cin,name);
            cout << endl;

            cout << "enter price of publication in (decimal) > ";
            cin >> price;
            cout << endl;
        }
        void display(){
            cout << "Publication : " << name << endl;
            cout << "Price : " << price << " Rs" << endl;
        }
};

class book : public publication{
    int pages;
    public:
        void add(){
            try{
                input();
                cout << "enter no of pages of book > ";
                cin >> pages;
                cout << endl;
                
                if(pages <= 0) throw pages;
            }catch(...){
                cout << "Page no invalid";
                pages = 0;
            }
        }
        void display_book(){
            display();
            cout << "Pages of book : " << pages << endl;
        }
};

class caset : public publication{
    int time;
    public:
        void add(){
            try{
                input();
                cout << "enter time of caset > ";
                cin >> time;
                cout << endl;
                
                if(time <= 0) throw time;
            }catch(...){
                cout << "time invalid";
                time = 0;
            }
        }
        void display_caset(){
            display();
            cout << "Play time : " << time << endl;
        }
};

int main(){
    book book1;
    book1.add();
    book1.display_book();

    caset caset1;
    caset1.add();
    caset1.display_caset();
}