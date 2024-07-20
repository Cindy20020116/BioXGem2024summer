#include <iostream>
using namespace std;

int main(){
    int n;
    bool first= false;
    cout << "Please input a number: " ;
    cin >> n;

    cout << "Ugly number: ";
    for( int i=1 ; i<=n ;++i){
        int temp = i;

        while( temp%2==0 ){
            temp = temp/2 ;
        }
        while( temp%3==0 ){
            temp = temp/3 ;
        }
        while( temp%5==0 ){
            temp = temp/5 ;
        }
        if( temp==1 ){
            if(first){
                cout <<", ";
            }
            cout << i ;
            first = true ;
        }
    }
    cout <<endl;

    return 0;
}