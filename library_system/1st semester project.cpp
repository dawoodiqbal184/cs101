#include<iostream>
#include<string>
#include<cstring>
using namespace std;
string book_name;
string author_name;
string book_type;
void Add_book(int x){
    cout << "Enter book name\n";
    getline(cin , book_name);
    cout << "Enter Author Name\n";
    getline(cin,author_name);
    cout << "enter book type\n";
    getline(cin,book_type);
}
int find_book(int x){
    
}
int main (){
    int option;
    char bookName[50];
    cout << "Select your login type\n";
    cout << "1)Manager\n";
    cout << "2)Customer\n";
    cin >> option;
    while (option == 1){ // loop for manager
        cout <<"Enter the date\n";
        int option2;
        cout << "1)Book management\n";
        cin >> option2;
        while (option2 == 1){ // loop for book management
            int books[10];
            int option3;
            bool management = false ;
            cout << "1)Add new book \n";
            cout << "2)Review added books\n";
            cout << "Return to main page, Press 0\n";
            cin>> option3;
            cin.ignore();
            if (option3 == 1){
                for (int a = 0;management == false ; a++){
                    int option4;
                    Add_book(books[a]);
                    cout << "for entering another book , Press 1\n";
                    cout << "If you ndont want to add another book , Press 0\n";
                    cin >> option4;
                    if (option4 == 0){
                        management = true;
                    }
                    else{}
                }
            }
            else if (option3 == 2){
                int option;
                cout << "enter the id of the book\n";
                cin >> option;
                if (option == 1){
                    cout << bookName;
                    cout << endl;
                }
            }
            if (option3 == 0){
                break;
            }
        }
    }
}