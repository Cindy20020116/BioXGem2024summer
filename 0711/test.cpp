#include <cstdio>
using namespace std;

int main() {
    int test1, test2;
    float average;
    char Grade;

    printf("Please input your score on test1: ");
    scanf("%d", &test1 );
    printf("Please input your score on test2: ");
    scanf("%d", &test2 );
    
    average = (test1 + test2 )/2.00;
    printf("Average score: %.2f \n" ,average );

    if (average>=90 && average<100){
        Grade= 'A';
    }else if (average>=80 && average<90){
        Grade= 'B';
    }else if (average>=70 && average<80){
        Grade= 'C';
    }else if (average>=60 && average<70){
        Grade= 'D';
    }else if (average<60 ){
        Grade= 'F';
    }
    printf("Grade: %c\n",Grade);

    return 0;    
}