#include <iostream>
using namespace std;

int main() {
    char grade = 'B';
    switch (grade) {
        case 'A':
        case 'B':
        case 'C':
            cout << "Good job!" << endl;
            break;
        case 'D':
            cout << "You passed." << endl;
            break;
        case 'F':
            cout << "Better luck next time." << endl;
            break;
        default:
            cout << "Invalid grade." << endl;
    }
    
    return 0;
}