#include <iostream>
#include <string>
#include<iomanip>
using namespace std;

struct Book{
    string name;
    string author;
    string type;
    int quantity;
    float price;
    int refId;
};
Book books[10];
Book createBook(){
    Book book;
    cout << "Enter book name : ";
    getline(cin , book.name);
    cout << "Enter author name : ";
    getline (cin , book.author);
    cout << "Enter the Genre : ";
    getline(cin ,book.type);
    cout << "Enter the quantity of book : ";
    cin >> book.quantity;
    cout << "Set the price of book : ";
    cin >> book.price;
    cout << "Assign book a refference ID :";
    cin >> book.refId;
    return book;
}
void displayBook(Book book){
    cout << "Name : "<<book.name<<endl;;
    cout << "Author Name : "<<book.author<<endl;
    cout << "Genre"<<book.type<<endl;
    cout << "Present stock : "<<book.quantity<<endl;
    cout << "Price : "<<book.price<<endl;
    cout << "Refference ID"<<book.refId<<endl;
}
void findBook(int x){
    for (int a = 0 ; a <10 ; a++){
        if ( x == books[a].refId)
        {
            displayBook(books[a]);
            break;
        }
    }
}
void menu(){
    for (int a = 0 ; a <=38 ; a++){
        cout << "-";
    }
    cout <<endl;
    cout <<"|" <<setw(38)<<" "<<"|"<<endl;
    cout << setw(39)<< "| ONLINE BOOK STORE MANAGEMENT SYSTEM  |"<<endl;
    cout <<"|" <<setw(38)<<" "<<"|"<<endl;
    for (int a = 0 ; a <=38 ; a++){
        cout << "-";
    }
    cout <<endl<<endl<<endl;
    cout << "Enter your login type\n"<<endl;
    cout << "1)Manager"<< setw(20)<< "2)Customer";
}
int main ()
{
    menu();
}