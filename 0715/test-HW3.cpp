#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int n,x ;
    cout << "Please input a number: " ;
    cin >> n;

    for(int i=1; i<=n ; i++){
        x=n-i+1;
        cout << setw(x) ;

        int count;
        for(int j=1; j<=count ; j++){
            count=i*2-1;

            cout << i%10 ;
        }
        cout<<endl;
        
    }

    return 0;
}
