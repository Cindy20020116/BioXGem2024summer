#include <iostream>
using namespace std;

int main() {
    for (int i = 0; i < 10; i++) {
        if (i == 5) {
            continue; // 當 i 等於 5 時，退出迴圈
        }
        cout << "i = " << i << endl;
    }
    return 0;
}
