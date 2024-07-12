#include <cstdio>

int main() {
    int a ;
    float T1 = 90;
    float T2 = 85;
    float average= (T1+ T2)/2 ;
    printf("+--------+----------+----------+----------+----------+\n");
    printf("|  Name  |Department|   Test1  |   Test2  | Average  |\n");
    printf("+--------+----------+----------+----------+---------+\n");
    printf("|Kevin   |%10d|%10.0f|%10.0f|%10.2f|\n ", a , T1 ,T2 ,average); // 寬度設置為 10
    printf("+--------+----------+----------+----------+---------+\n");

    return 0;
}