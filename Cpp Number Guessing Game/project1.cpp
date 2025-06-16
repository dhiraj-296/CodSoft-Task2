#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    int num;
    int guess;
    int tries = 0;

    srand(time(NULL));
    num = (rand() % 100) + 1;

    cout<< "****** Number Guessing Game ******" << endl;

    do {
        cout<< "Guess a Number between (0-100): ";
        cin>> guess;
        
        tries++;

        if (guess > num) {
            cout<< "Too high!" << endl;
        } else if (guess < num) {
            cout<< "Too low!" << endl;
        } else {
            cout<< "Hurray! You have guessed the correct number in " <<tries<< " guesses" << endl;
            break; 
        }

    } while (guess != num);  

    cout<< "*****************************\n";
    return 0;
}
