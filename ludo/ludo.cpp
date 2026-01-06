//------A C++ Program that will play ludo from all four sides and tell winner and looser------
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
using namespace std;
int current_position = 0;
bool player_name = false;
bool start = false;
string player;
int play(int position , int turn)
{
    
    // check if already won
    // roll the dice
    // move if allowed
    // get the new position
    // return new position
int colour ;
string r = "red";
string g = "green";
string b = "blue";
string y = "yellow";
if (position < 56){ // already won check
    int num ;
    if (turn == 1) { // getting the player name 
        cout << "Which colour is this ?\n"<<"1)red\t"<<"2)green\t"<<"3)yellow\t"<<"4)blue\n";
        cin >> colour;
    }
    if (colour == 1) player = r;
    else if (colour == 2) player = g;
    else if (colour == 3) player = y;
    else if (colour == 4) player = b;
    else if (turn > 1){
        num = rand()% 6 + 1;
        if (num == 6)  start = true;
        if (start == true){
            if (current_position == 56){
                cout << player<< " is winner\n";
            }
            if (current_position + num <= 56){
                current_position += num;
                cout << "dice rolled "<< player << " moved by "<< num << endl;
                cout <<player<<" : "<< current_position <<endl;
            }
            else if (current_position + num > 56) {
                cout << player << " : "<<current_position<<endl;
            }
        }
    }
}
else cout << player << " already won !\n";
return current_position;
}
int main()
{
    srand(time(0));
    int turn = 1;
    int red = 0, yellow = 0, blue = 0, green = 0;
    bool g = false , r = false , y = false , b = false;
    while ( red <56 ){
        cout << "Turn Number : "<< turn<<endl;
        red = play(red , turn);
        green = play(green,turn);
        turn++;
        cout << "-----------------------------\n";

    }
return 0;
}