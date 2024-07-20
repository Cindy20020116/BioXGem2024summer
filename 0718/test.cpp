#include <iostream>
#include <cstdlib>  // 包含 <cstdlib> 庫
#include <ctime>    // 包含 <ctime> 庫，用於設置隨機數種子
using namespace std;

int main() {
    srand(time(0));  // 使用當前時間設置隨機數種子

    for (int i = 0; i < 10; ++i) {
        int random_number = rand();  // 生成亂數
        cout << "Random number " << i + 1 << ": " << random_number << endl;
    }

    return 0;
}