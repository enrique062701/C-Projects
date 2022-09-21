//
// Enrique Cisneros


//
//

#include <iostream>
using namespace std;


int main () {
    int integer;
    cout << "Enter positive integer: ";
    cin >> integer;
    cout << "Factors: " << endl;
    while (integer != 1) {
        for (int i = 2; i <= integer; i++){
            if (integer % i == 0) {
                cout << i << endl;
                integer = integer/ i;
            }
        }
    }
    
    return 0;
}

