//Lin_Eric
//Lab_4
//October_1_2024

#include <iostream>                 // Crucial Piece
#include <string>                   // Also Crucial

using namespace std;                // Crucial Too

int main() 
{  
    string fruitN;
    double gramSug;
    char userChoice;  // Variable to ask if the user wants to continue
    
    // Questions to ask user for data purposes
    cout << "What is your fruit: " << endl;   
    // Name of Fruit
    cin >> fruitN;                                                                          
    cout << "How many grams of sugar does one cup of " << fruitN << " contain: " << endl;   
    // Unit of Sugar 
    cin >> gramSug;                                                                         

    // Following is for looping
    while (true) { 
        // If else statements
        if (gramSug < 10) { 
            cout << fruitN << " is a LOW SUGAR FRUIT." << endl; 
        }
        else if (gramSug >= 10 && gramSug <= 14) { 
            cout << fruitN << " is a MEDIUM SUGAR FRUIT." << endl; 
        }
        else if (gramSug > 14) {
            cout << fruitN << " is a HIGH SUGAR FRUIT." << endl;
        }

        // Ask if the user wants to continue
        cout << "Would you like to enter another fruit? (y/n): ";
        cin >> userChoice;

        // Exit the loop if the user chooses 'n' or 'N'
        if (userChoice == 'n' || userChoice == 'N') {
            break;  
        }

        // If the user wants to continue, ask for new fruit data
        cout << "What is your fruit: " << endl;
        cin >> fruitN;
        cout << "How many grams of sugar does one cup of " << fruitN << " contain: " << endl;
        cin >> gramSug;
    }

    // End of Code
    return 0;
}
/*
What is your fruit: 
Cherry
How many grams of sugar does one cup of Cherry contain: 
9
Cherry is a LOW SUGAR FRUIT.
Would you like to enter another fruit? (y/n): y
What is your fruit: 
Strawberry
How many grams of sugar does one cup of Strawberry contain: 
13
Strawberry is a MEDIUM SUGAR FRUIT.
Would you like to enter another fruit? (y/n): n
*/