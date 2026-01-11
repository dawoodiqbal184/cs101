#include <iostream>
#include <string>
#include<iomanip>
using namespace std;

struct Book{
    string name;
    string author;
    string genre;
    string category;
    int quantity;
    float price;
};
Book books[10];
Book createBook(){
    Book book;
    cin.ignore();
    cout << "Enter book name : ";
    getline(cin , book.name);
    cout << "Enter author name : ";
    getline (cin , book.author);
    cout << "Enter the Genre : ";
    getline(cin ,book.genre);
    cout << "Enter the type of book physical or e-book : ";
    getline (cin,book.category);
    cout << "Enter the quantity of book : ";
    cin >> book.quantity;
    cout << "Set the price of book : ";
    cin >> book.price;
    return book;
}
void displayBook(Book book){
    cout << "Name : "<<book.name<<endl;;
    cout << "Author Name : "<<book.author<<endl;
    cout << "Genre : "<<book.genre<<endl;
    cout << "Type of book : "<<book.category<<endl;
    cout << "Present stock : "<<book.quantity<<endl;
    cout << "Price : "<<book.price<<endl;
}
/*void findBook(int x){
    for (int a = 0 ; a <10 ; a++){
        if ( x == books[a].refId)
        {
            displayBook(books[a]);
            break;
        }
    }
}*/
int manager_menu(){
    int choice;
    cout << "1) Add New Book\n";
    cout << "2) Remove the Pre-Added book\n";
    cout << "3) Update Book Price or Quantity\n";
    cout << "4) Find the books\n";
    cout << "7) Generate the sales report\n";
    cout << "8) Return to Main Menu\n";
    cout << "Enter what do you want to do\n";
    cin >> choice ;
    return choice;
}
int main_menu(){
    int choice;
    for (int a = 0 ; a <=39 ; a++){
        cout << "-";
    }
    cout <<endl;
    cout <<"|" <<setw(38)<<" "<<"|"<<endl;
    cout << setw(39)<< "| ONLINE BOOK STORE MANAGEMENT SYSTEM  |"<<endl;
    cout <<"|" <<setw(38)<<" "<<"|"<<endl;
    for (int a = 0 ; a <=39 ; a++){
        cout << "-";
    }
    cout <<endl<<endl<<endl;
    cout << "Enter your login type\n";
    cout << "1)Manager"<< setw(15)<< "2)Customer"<<setw(15)<<"Exit Program"<<endl;
    cin >> choice;
    return choice;
}
int main(){
    int user;    // VARIABLE THAT WILL DECIDE TYPE OF USER 
    int pin ;    // VARIABLE THAT WILL ASK FOR PASSWORD OF MANAGER TYPE LOGIN
    int manager; // VARIABLE THAT WILL DECIDE FUNCTION OF MANAGER
    int book = 0;
    while (user != 3){
        user =  main_menu();
        if (user == 1){          // FOR MANAGER TYPE LOGIN;
            cout << "Enter your Admin Password\n";
            cin >> pin ;
            if (pin == 12345){
                manager = manager_menu();
                while (manager > 0 && manager < 9){
                    if (manager == 1){
                        books[0]= createBook();
                    }
                }
            }
        }
    }
    
   
}