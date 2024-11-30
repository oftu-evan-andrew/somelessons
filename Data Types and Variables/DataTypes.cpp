// DATA TYPES & VARIABLES!!

// int - stores integers (whole numbers), without decimals, such as 123 or -123
// double - stores floating point numbers, with decimals, such as 19.99 or -19.99
// char - stores single characters, such as 'a' or 'B'. Char values are surrounded by single quotes
// string - stores text, such as "Hello World". String values are surrounded by double quotes
// bool - stores values with two states: true or false

// ADDITIONAL NOTES!!
// to have the computer produce an output with C++, you have to use the "cout" function.
// for user inputs, you have to use the "cin" function.
// these "//" are comments you can also do /* */ for comments.
// variables are basically containers that stores data values or data types.
// const variables are also called constant variables, we use const when we don't want the data stored to be changed.

#include <iostream>
#include <string>

using namespace std; 

// syntax of declaring variables
int number; // number variables have to be declared with the int keyword, int short for integer.
int number1; 
char letter = 'a'; // char is just a single letter character, declared with the char variable.
double decimalNumber = 6.9; // double numbers are decimals, declared with the double keyword.
string stringOfLetters = "Hello World!"; // string is declared with the string variable, short for string of letters, string is a series of characters.

// IGNORE THIS!!
void getNumber (){ 
    cout << "1st Number:";
    cin >> number;
    cout << "2nd Number:"; 
    cin >> number1;

    return; 
}

// IGNORE THIS!!
void iAmABoolean(){ 
    if (number == number1) {
         cout << "True \n";
    } else {
        cout << "False \n";
    }
}


int main()
{
    getNumber(); 
    iAmABoolean();
    cout << letter << endl;
    cout << number << endl;
    cout << decimalNumber << endl;
    cout << stringOfLetters << endl;

    return 0; 
}