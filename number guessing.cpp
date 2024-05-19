#include <iostream>
#include <cstdlib> // For rand() function
#include <ctime>   // For seeding srand()
using namespace std;
int main() { 
  string name;
    srand(time(0)); // Seed the random number generator with the current time

    char input; // Variable to store user input for continuing the game
    int inputuser; // Variable to store user's guess
     	cout << "Enter your name: ";
     	getline(cin, name);

    do {
        int variable = rand() % 10 + 1; // Generate a random number between 1 and 10
        cout << "Enter any number in between range 1 to 10: ";
        cin >> inputuser;
        cout << endl;

        if (inputuser < 1 || inputuser > 10) {
            cout << "Number out of range. Please enter a number between 1 and 10." << endl;
        } else if (inputuser == variable || inputuser == 4 || inputuser == 5 || inputuser == 6) {
            cout << "Congratulations! You guessed the correct number." << endl;
        } else {  
            cout << "Sorry, you guessed the wrong number. Try again." << endl;
        }

        cout << "Would you like to try again? (Y/N): ";
        cin >> input;
        cout << endl;

    } while(input != 'N'); // Loop until the user enters 'N'

    cout << "Game end" << endl;
    return 0;
}

