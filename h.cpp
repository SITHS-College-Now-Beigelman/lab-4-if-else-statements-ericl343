#include <iostream>                 
#include <string>                   

using namespace std;                

int main() {                        
    string fruitN;
    double gramSug;
    cout << "What is your fruit: " << endl;   
    cin >> fruitN;
    cout << "How many grams of sugar does one cup of " << fruitN << " contain: " << endl;   
    cin >> gramSug;

    if (gramSug < 10) { 
        cout << fruitN << " is a LOW SUGAR FRUIT." << endl; 
    }
    else if (gramSug >= 10 && gramSug <= 14) { 
        cout << fruitN << " is a MEDIUM SUGAR FRUIT." << endl; 
    }
    else if (gramSug > 14) {
        cout << fruitN << " is a HIGH SUGAR FRUIT." << endl;
    }

    return 0;  // Program ends here
}
