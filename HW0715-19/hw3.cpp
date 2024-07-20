#include <iostream>
using namespace std;

int main(){
    int n,x=0,prime[100];
    
    cout << "Please input a number: ";
    cin >> n;

    for(int i=2 ; i<n ; ++i ){
        bool isPrime = true;
        for( int j=2 ;j<=i/2 ; ++j ){
            if( i%j == 0 ){
                isPrime = false;
                break;
            }
        }
        if( isPrime ){
            cout << i <<" , ";
            prime[x]=i;
            x++;
        }
    }
    cout <<endl;

    cout << "Prime: ";
    for(int i=0; i<x ;i++){
        cout << prime[i] <<" ,";
    }
    cout <<endl;

    int total=0;
    for( int i=0 ; i<n ; ++i ){
        if( prime[i]+2 == prime[i+1]){
            cout << "(" << prime[i] <<", "<< prime[i+1] <<") ";
            total++;
        }
    }
    cout <<endl <<"Total is "<< total <<endl;


    return 0;
}