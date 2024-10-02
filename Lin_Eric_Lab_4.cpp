//Lin_Eric
//Lab_4
//October_1_2024

#include <iostream>                 //Crucial Piece
#include <string>                   //Also Crucial

using namespace std;                //Crucial Too

int main() {                        //Start of Function
    string fruitN;
    double gramSug;
    cout << "What is your fruit: " << endl;   
    cin >> fruitN;
    cout << "How many grams of sugar does one cup of " << fruitN << " contain: " << endl;   
    cin >> gramSug;

    while (true) 
    { 
    if (gramSug < 10) 
    { 
    cout << fruitN << " is a LOW SUGAR FRUIT." << endl; 
    }
    else if (gramSug >= 10 && gramSug <= 14) 
    { 
    cout << fruitN << " is a MEDIUM SUGAR FRUIT." << endl; 
    }
    else if (gramSug > 14) 
    {
    cout << fruitN << " is a HIGH SUGAR FRUIT." << endl;
    }
    }
    return 0;
}