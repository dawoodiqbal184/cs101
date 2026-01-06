//------A C++ Program that will play ludo from all four sides and tell winner and looser------
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
using namespace std;
int play(int current_position , bool *start , string player){
    int colour ;
    if (current_position < 56){ // already won check
        int num ;
        num = rand()% 6 + 1;
        if (num == 6)  *start = true;
        if (*start == true){
            if (current_position == 56){
                cout << player<< " is winner\n";
            }
            if (current_position + num <= 56){
                current_position += num;
                cout << "dice rolled "<< player << " moved by "<< num << endl;
                cout <<player<<" : "<< current_position <<endl;
            }
            else cout << player << " : "<<current_position<<endl;
        }
    }
    else cout << player << " already won !\n";
    return current_position;
}
int main(){
    srand(time(0));
    string Red = "Red";
    string Green = "Green";
    string Yellow = "Yellow";
    string Blue = "Blue";
    int turn = 1;
    int red = 0, yellow = 0, blue = 0, green = 0;
    bool g = false , r = false , y = false , b = false;
    while ( red < 56 || green < 56 || blue < 56 || yellow < 56){
        cout << "Turn Number : "<< turn<<endl;
        red = play(red, &r , Red);
        green = play(green, &g , Green);
        yellow = play(yellow , &y , Yellow);
        blue = play(blue , &b , Blue);
        turn++;
        cout << "-----------------------------\n";

    }
return 0;
}