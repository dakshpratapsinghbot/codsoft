//creating a number guessing Game. github-dakshpratapsinghbot


#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {

    srand(time(nullptr)); // this ensures that the random numbers generated are different each time the program runs.

    
    int randomNumber = rand() % 100 + 1;
    int guess = 0;
    int tries = 0;

    cout<<"Welcome to the Guess Game by DakshBot.";
    cout <<"\nGuess the number between 1 and 100: ";

    
    while (guess != randomNumber) {
        cin >> guess;
        tries++;

        if (guess > randomNumber) {
            cout << "Too high! Try again: ";
        } else if (guess < randomNumber) {
            cout << "Too low! Try again: ";
        } else {
            cout << "Congratulations! You guessed the number!" <<tries << " attempts!" << endl;
        }
    }

    return 0;
}
