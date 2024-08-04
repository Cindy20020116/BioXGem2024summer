#include <iostream>
using namespace std;

class Print {
public:
    void display(int i) {
        cout << "Displaying integer: " << i << endl;
    }

    void display(double d) {
        cout << "Displaying double: " << d << endl;
    }

    void display(string s) {
        cout << "Displaying string: " << s << endl;
    }
};

int main() {
    Print p;
    p.display(5);          // Output: Displaying integer: 5
    p.display(3.14);       // Output: Displaying double: 3.14
    p.display("Hello");    // Output: Displaying string: Hello

    return 0;
}
