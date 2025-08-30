#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));  // Seed for random number
    int numberToGuess = rand() % 100 + 1;  // Random number between 1 and 100
    int userGuess, attempts = 0;

    cout << "===== Guess the Number Game =====" << endl;
    cout << "I have selected a number between 1 and 100." << endl;
    cout << "Try to guess it!" << endl;

    do {
        cout << "Enter your guess: ";
        cin >> userGuess;
        attempts++;

        if (userGuess > numberToGuess) {
            cout << "Too high! Try again." << endl;
        } else if (userGuess < numberToGuess) {
            cout << "Too low! Try again." << endl;
        } else {
            cout << "🎉 Congratulations! You guessed the number in " 
                 << attempts << " attempts." << endl;
        }

    } while (userGuess != numberToGuess);

    return 0;
}
