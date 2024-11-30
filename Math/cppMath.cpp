// Ito yung explanation sa pinakita ni sir na code sa whiteboard yesterday, still a little bit difficult, but I
// tried to explain it as much as I can here, hope it helps.

#include <iomanip> // for the setw and setprecision and as well fixed.
#include <cmath> // for pow.
#include <iostream>

using namespace std; 
double amount; 
double principal = 1000.0; 
double rate = 0.05; 

int main() {
    cout<< "Year" << setw(21)<< "Amount on deposite \n";
    cout<< fixed << setprecision(2); // the fixed keyword, controls the numbers after the decimal point. It ensures
                                    // the amount of decimal places are printed, regardless the size of the number.
                                    // This leads to rounding if necessary, or padding with zeros.
                                    // setprecision() function, it controls how much numbers how much numbers
                                    // should be displayed or ourput of the number.
    
    for (int year = 1; year <= 10; ++year) {
        amount = principal * pow(1.0 + rate, year); // pow here, basically adds 1.0 with rate variable, and uses year
                                                    // as it's exponent.
        
        cout<<setw(4)<<year<<setw(21)<<amount<<endl; // setw, basically, tells the computer how much width should
                                                     // be set and is used to specify the minimum number of 
                                                     // characters should be used for the next output operation.
                                                     // For example, at the "Amount on deposite" string has a total
                                                     // of 16 characters so the computer will substract the amount
                                                     // of characters (16) by 21, to get the total width of characters.
                    
    }
}