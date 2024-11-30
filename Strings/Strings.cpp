// Strings are used for storing text/characters, unlike char, string is a series of characters.

// To use string, you must include an aditional header file, the <string> library.
#include <iostream>
#include <string>
using namespace std; 

int main () {

    string str1 = "Pogi "; 
	string str2 = "ni "; 
	string str3 = "Andrew"; 
    cout << str1 + str3; // the + operator can be used between strings to add them together
                        // to make a new string, this is called concatenation.

    // Append, since strings can also be considered as a string, more on that pag ni-discuss na ni sir.
	string concatenateString = str1.append(str2);
    string concatenateString2 = concatenateString.append(str3);
    cout << concatenateString2 << endl;
    
    
}