#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    for (int i = 1; i < 10; i++) {
        for (int b=1; b<10; b++) {
            cout << setw(2)<< i << "*"<<setw(2)<< b <<"=" <<setw(2)<< i*b<<" " ;
        }
        cout << endl;
    }
    return 0;
}
