#include <iostream>
#include <string>
using namespace std; 

int main() {
    string fullName; 
    cout<< "What is your full name? ";
    getline (cin, fullName);
    // cin >> fullName; However, cin considers spaces (whitespaces, tabs, and etc) as a terminating character.
                      // it can only store a single word.
    cout<< "Your name is: " << fullName;

    
    return 0; 
}