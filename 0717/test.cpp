#include <iostream>
using namespace std;

int fibonacci(int n) {
    if (n <= 1) {
        return n; // 基礎情況
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2); // 遞迴調用
    }
}

int main() {
    int num = 10;
    cout << "Fibonacci of " << num << " is " << fibonacci(num) << endl;

    return 0;
}
