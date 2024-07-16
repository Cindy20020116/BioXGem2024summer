#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int  total=0, max=0 ,min=100;
    float n,average=0;

    cout << "Please input the number of integers: " ;
    cin >> n;

    if (n <= 0) {
        return 1;
    }

    for( int i=1; i<=n ;i++){
        int x;
        cout <<"Integer #"<< i <<": ";
        cin >> x;
        
        total= total+ x;

        if (i == 1) {
            max = min = x; 
            }else{
        if (x > max){
            max=x ;
        }
         if (x < min){
            min=x ;
         }
            }
    }

    average= total/n;
    cout <<"The average is "<<fixed<<setprecision(2)<< average <<endl;
    cout <<"The maximum is "<<max<<endl;
    cout <<"The minimum is "<<min<<endl;

    return 0;
}
