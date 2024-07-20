#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));

    int random_number [4];
    int arr[10]= {0,1,2,3,4,5,6,7,8,9};
    bool selected[10]= {false}; //還沒被選過的數字

    for (int i = 0; i < 4; ++i) {
        do{
            random_number[i] = rand() %  10;
        }while( selected[random_number[i]]==true ) ;
        
        selected[random_number[i]] = true;
    }
    
    cout << "Random number : " ;
    for(int i=0; i<4 ; ++i){
        cout << random_number[i] ;
    }
    cout <<endl;


    int num[4], n , A=0 ,B=0 ,times=0;

    while( A!=4 ){
        A=0, B=0;

        cout << "Please input four digits (0~9): ";
        cin >> n;

        num[0] = n/1000;
        num[1] = (n%1000)/100;
        num[2] = (n%100)/10;
        num[3] = n%10;
        cout << "Guess number : " ;
        for(int i=0; i<4 ; ++i){
            cout << num[i] ;
        }
        cout <<endl;


    
        for(int i=0 ; i<4 ; i++){
            if(num[i]== random_number[i]){
                A++;
            }else{
                for(int j=0; j<4 ; j++){
                    if(num[i]== random_number[j] && num[i]!=random_number[i]){
                        B++;
                    }
                }
            }
        }
        times++;
        cout << A <<"A  "<< B << "B " <<endl;
    }

    cout << "You guess "<< times <<" times !!"<<endl;

    return 0;
}