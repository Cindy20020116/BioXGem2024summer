#include <iostream>
using namespace std;

int main() {
    int n;
    
    cout << "Please output a number : " ;
    cin >> n ;

    for( int i=0 ; i<n ;++i ){

        int space= n-i;
        for(int j=1 ; j<space ;++j){
            cout <<" " ;
        }
        
        for(int j=1; j<=i+1; ++j ){
            int x = j %10 ;
            cout << x  ;
        }
        for(int j=1; j<=i ; ++j){
            int y = (i-j+1)%10;
            cout << y  ;
        }

        cout <<endl;
    }
    return 0;
}

