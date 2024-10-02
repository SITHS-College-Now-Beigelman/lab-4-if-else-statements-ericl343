//Lin_Eric
//Lab_4
//October_1_2024

#include <iostream>                 //Crucial Piece
#include <string>                   //Also Crucial

using namespace std;                //Crucial Too

int main() {                                                                                //Start of Function
    string fruitN;
    double gramSug;
    
    //Questions to ask user for data purposes
    cout << "What is your fruit: " << endl;   
    cin >> fruitN;                                                                          //Name of Fruit
    cout << "How many grams of sugar does one cup of " << fruitN << " contain: " << endl;   
    cin >> gramSug;                                                                         //Unit of Sugar 

    //Following is for looping
    while (true) 
    { 

    //If else statements
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
    //End of Code
    return 0;
}