#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int a;
    cout << "Please input a positive integer:" << endl;
    cin >> a;

    if (a <=0 ) {
        cout << a<<" is not a positive integer!!" << endl;
    }

    if (1<=a && a<=9 ) {
        cout << a<<" is a small integer." << endl;
    }

    if (10<=a && a<=99 ) {
        int b= a/10;
        int c= a%10;
        cout << "The tens digit of " <<a<<" is "<< b << endl;
        cout << "The units digit of " <<a<<" is "<< c << endl;
    }

    if (a>=100 && a%5==0) {
        cout << a << " is a large integer." << endl;
        cout << a << " is divisible by 5." << endl;
    }

    if (a>=100 && a%5==1) {
        cout << a << " is a large integer." << endl;
        cout << a << "+5="<< a+5 << endl;
    }
   
   if (a>=100 && a%5==2) {
        cout << a << " is a large integer." << endl;
        cout << a << "-5="<< a-5 << endl;
    }
    
    if (a>=100 && a%5==3) {
        cout << a << " is a large integer." << endl;
        cout << a << "*5="<< a*5 << endl;
    }

    if (a>=100 && a%5==4) {
        double d;
        d=a;
        cout << fixed << setprecision(2);
        cout << a << " is a large integer." << endl;
        cout << a << "/5=" << d/5 << endl;
    }

    return 0;
}