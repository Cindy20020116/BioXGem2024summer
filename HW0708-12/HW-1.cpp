#include <cstdio>
using namespace std;

int main() {

    int totals=0, h=0 , m=0 ,s=0 ;

    printf("Please input total seconds... ");
    scanf("%d", &totals);

    if (totals< 60 && totals>=0 ){
        s = totals;
    }

    if (totals >= 60 && totals<3600 ){
        m =  totals/60 ;
        s =  totals%60 ;
    }

    if (totals>=3600 ){
        h = totals/3600 ;
        m = (totals%3600)/60;
        s = (totals%3600)%60 ;
    }
    printf("%d hour %d minute %d second\n", h,m ,s );
    
    
    return 0;
}