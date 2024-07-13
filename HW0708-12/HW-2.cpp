#include <cstdio>
using namespace std;

int main() {

    char name[50];
    char school[50];

    printf("Enter your name: ");
    scanf ("%49s", name );
    printf("Enter your graduation school: ");
    scanf ("%49s", school );
    getchar();

    printf("+------------------------------+\n");
    printf("|%30s|\n", name);
    printf("|%30s|\n", school);
    printf("+------------------------------+\n");

    return 0;
}