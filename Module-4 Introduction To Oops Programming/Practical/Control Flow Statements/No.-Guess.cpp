#include <iostream>
using namespace std;

int main() {
    int number=42; 
    int guess;

    cout<<"Guess a number between 1 and 100"<<endl;

    while (true) {
        cout<<"Enter your guess: ";
        cin>>guess;

        if(guess<number) {
            cout<<"Too low! Try again"<<endl;
        } 
        else if(guess>number) 
        {
            cout<<"Too high! Try again"<<endl;
        }
        else{
            cout<<"Congratulations! You guessed the correct number"<<endl;
            break;
        }
    }
    return 0;
}
