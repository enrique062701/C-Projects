//
//  num2rom.cpp
//  Roman Numerals
//Enrique Cisneros 
// Discussion 1A
//

#include <iostream>
#include <string>

using namespace std;
int main ()
{
    int num1;
    int num2;
    string roman = "";
    cout << "Enter integer from 1 to 3,999: " ;
    cin >> num1;
    
        num2 = num1 / 1000;// from 1000 to 3999
        if (num2 >= 1){
            for (int i = 0; i < num2; i++){
                roman = roman + "M";
            }
        }
        num2 = num1 % 1000 / 100; //from 100 to 999
        if (num2 < 4){
            for (int i = 0; i < num2; i++){
                roman = roman + "C";
            }
        }
        if (num2 == 4){
            roman = roman + "CD";
        }
        if (num2 >= 5 && num2 < 9){
            roman = roman + "D";
            for (int i = 0; i < num2 - 5; i++){
                roman = roman + "C";
            }
        }
        if (num2 == 9){
            roman = roman + "CM";
        }
        num2 = num1 % 1000 % 100 / 10; // from 11 to 99
        if (num2 < 4){
            for (int i = 0; i < num2; i++){
                roman = roman + "X";
            }
        }
        if (num2 == 4){
            roman = roman + "XL";
        }
    if (num2 >= 5 && num2 < 9){
        roman = roman + "L";
        for (int i = 0; i < num2 - 5; i++){
            roman = roman + "X";
        }
    }
    if (num2 == 9){
        roman = roman + "XC";
    }
    num2 = num1 % 1000 % 100 % 10;
    if (num2 < 4){
        for (int i = 0; i < num2; i++){
            roman = roman + "I";
        }
    }
    if (num2 == 4){
        roman = roman + "IV";
    }
    if (num2 >= 5 && num2 < 9){
        roman = roman + "V";
        for (int i = 0; i < num2 - 5; i++){
            roman = roman + "I";
        }
    }
    if (num2 == 9){
        roman = roman + "IX";
    }

    
    
    
cout << "Roman numeral: "<< roman << endl;
    return 0;
    
}

