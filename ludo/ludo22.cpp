//------A C++ Program that will play ludo from all four sides and tell winner and looser------
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
using namespace std;
int roll_dice(){
    srand(time(0));
    int dice = rand()% 6 + 1;
    cout << "Dice rolled, got " << dice << endl;
    return dice;
}
int print_state(string color, int position){
    if(position <= 56) cout << color << " moved to " << position << endl;

    if(position == 56) cout << color << " WON!!!" << endl;
}
int move(int current_position, int num){
    
    if(current_position == 0 && num < 6) return current_position;

    if(current_position + num >= 56) return current_position + num;

    return (current_position + num);
}
int turn(string color, int position) {
    cout << color << "'s turn" << endl;
    position = move(position, roll_dice());
    print_state(color, position);

    return position;
}
int main(){
    srand(time(0));
    string Red = "Red", Green = "Green", Yellow = "Yellow", Blue = "Blue";
    int red = 0, yellow = 0, blue = 0, green = 0;
    int turn = 0;
    while(red < 56 || green < 56 || blue < 56 || yellow < 56) {
        cout << "Round: " << ++turn << "\n";

        red = turn(Red, red);
        green = turn(Green, red);
        blue = turn(Blue, red);
        yellow = turn(Yellow, red);
    }

    return 0;
}