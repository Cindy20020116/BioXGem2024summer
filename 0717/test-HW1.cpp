#include <iostream>
using namespace std;


int main() {
    int n;
    cout <<"Please enter a positive integer : ";
    cin >> n;

    if(n<=1){
        cout << "It is not a prime number."<<endl;
    }
    for (int i=2 ; i<n ;i++){
        if(n%i==0){
        cout << "It is not a prime number."<< endl;
        break;
        }else cout << "It is a prime number." <<endl;
        break;
    }

    return 0;
}
