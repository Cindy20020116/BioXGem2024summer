#include <iostream>
using namespace std;

int add(int a, int b) {
    while(b != 0){
        int n = b;
        b = a % b;
        a = n ;
    }
    return a;
}

int main() {
    int a, b;
    cout << "Please input two intergers: ";
    cin >> a >> b;

    int result = add(a,b);
    cout << "GCD is " << result <<endl;
    
   return 0;
}