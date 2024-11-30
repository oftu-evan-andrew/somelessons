#include <iostream>
#include <string>

using namespace std;

bool yesOrNo = true;
// switch statements are used to select one of many blocks to be executed.
// The switch expression is evaluated.
// Then it's compared with each value of case.
// If there is a match, then the code block of the case is executed.
int main() {
    switch (yesOrNo) {
        case 1:
            cout << "Opo, pogi si Evan";
            break; // breaks out of the switch block, to stop the execution of more code, tells the switch to stop.

        default: // defaults are used if there are no case matches.
        cout << "Epal";
    }
}