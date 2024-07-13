#include <cstdio>
using namespace std;

int main() {

    int test1, test2 ;
    float average;
    char grade ;

    printf("Please input your score on test 1: " );
    scanf("%d", &test1);
    printf("Please input your score on test 2: " );
    scanf("%d", &test2);

    average = (test1+test2)/2.0 ;
    printf("Average score: %.2f", average );

    if( average>=90 ){
        grade= 'A';
    }
    if( average>=80 && average<90 ){
        grade= 'B';
    }
    if( average>=70 && average<80 ){
        grade= 'C';
    }
    if( average>=60 && average<=70 ){
        grade= 'D';
    }
    if( average>=0 && average<60 ){
        grade= 'F';
    }

    printf("Grade: %c\n",grade);

    return 0;
}