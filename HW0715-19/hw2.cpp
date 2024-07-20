#include <iostream>
using namespace std;

int main(){
    int n1, n2, sum;
    char ans;
    
    do{
        cout << "Number 1: " ;
        cin >> n1;
        cout << "Number 2: " ;
        cin >> n2;

        if( n1>n2 ){
            cout << "Error!! Number 1 > Number 2!!" <<endl;
            ans = 'y';
        }else{
            sum = (n1+n2)*(n2-n1+1)/2;
            cout << "Sum = " << sum <<endl;

            cout << "Again(Y/N)?? " ;
            cin >> ans;
        }

        
    }while( ans == 'y' || ans=='Y');
        
    return 0;
    
}