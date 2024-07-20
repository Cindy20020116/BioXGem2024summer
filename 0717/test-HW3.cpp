#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Please input a intergers: ";
    cin >> n ;
    cout << n <<" = " ;

    for (int i=2 ; i<n ;i++){
        while( n%i==0 ){
                n=i;
                cout << i << " * " ;
        }
        cout <<endl;
    }
    

    return 0;
}