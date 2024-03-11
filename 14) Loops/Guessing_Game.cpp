#include <iostream>

using  namespace std;

int main(){

//    int secretNum, userGuess;
//    secretNum = 88;
//
//    while(userGuess != secretNum){
//        cout << "Guess a number 1-100: ";
//        cin >> userGuess;
//    }
//    cout << "You Win!";


    int secretNum, userGuess, guesses;
    secretNum = 88;
    guesses = 1;
    bool attempts = true;

    while(userGuess != secretNum && attempts == true){
        if(guesses > 8){
            attempts = false;
        }
        else{
            guesses++;
            cout << "Guess a number 1-100: ";
            cin >> userGuess;
        }

    }
    if(userGuess == secretNum){
        cout << "You Win!";
    }
    else{
        cout << "You Lose :(";
    }
}
