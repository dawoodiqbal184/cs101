//------A C++ Program that will play ludo from all four sides and tell winner and looser------
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
using namespace std;
int play(int current_position , bool* start , string player , bool* Player){
    int colour ;
    if (current_position < 56){ // already won check
        int num = rand()% 6 + 1;
        if (num == 6)  *start = true;
        else {
            cout << "Dice rolled "<< player << " by "<< num <<" so "<<player<< "is unable to move!"<< endl;
        }
        if (*start == true && num == 6){
            if (current_position == 56){
                cout << player<< " is winner\n";
                return current_position;
            }
            int num1 = rand()% 6 + 1;
            if (current_position + num1 + 6 <= 56){
                current_position += num1;
                current_position += 6;
                cout << "Dice rolled "<< player << " moved by 6 and then "<< num1 << endl;
                cout <<player<<" : "<< current_position <<endl;
            }
            else cout << player << " : "<<current_position<<endl;
        }
        else if (*start == true){
            if (current_position == 56){
                cout << player<< " is winner\n";
            }
            if (current_position + num <= 56){
                current_position += num;
                cout << "Dice rolled "<< player << " moved by "<< num << endl;
                cout <<player<<" : "<< current_position <<endl;
            }
            else cout << player << " : "<<current_position<<endl;
        }
    }
    else cout << player << " already won !\n";
    return current_position;
}
void winner(string player , bool player1 ,bool player2 , bool player3, bool player4, int position){
    if 
}
int main(){
    srand(time(0));
    string Red = "Red";
    string Green = "Green";
    string Yellow = "Yellow";
    string Blue = "Blue";
    bool red = false , green = false , blue = false , yellow = false;
    int turn = 1;
    int red = 0, yellow = 0, blue = 0, green = 0;
    bool g = false , r = false , y = false , b = false;
    while ( red < 56 || green < 56 || blue < 56 || yellow < 56){
        cout << "Turn Number : "<< turn<<endl;
        if (red < 56) red = play(red, &r , Red);
        if (green < 56)green = play(green, &g , Green);
        if (yellow < 56)yellow = play(yellow , &y , Yellow);
        if (blue < 56)blue = play(blue , &b , Blue);
        turn++;
        cout << "----------------------------------------\n";

    }
return 0;
}