#include <iostream>
using namespace std;

int main(){
    int i = 10;
    cout << "1] While Loop " << endl;
    while(i>1){
        cout << "i is" << i << endl ;
        i--;
    }


    cout << "2] For Loop " << endl;

    for(int j =1 ; j<=10 ; j++){
        cout << j <<" ";
    }

    cout << endl;
    cout << "3] Do-While Loop" << endl;

    int k = 1;
    do{
        cout << "First In" << endl ;
    }while(k<1); // If first time if also condition is false it execute first time


    cout << endl;
    cout << "4] Nested For Loop" << endl;

    for(int i=1 ; i<=10 ; i++){
        for(int j=10 ; j>=i ; j--){
            cout << "* ";
        }
        cout << endl;
    }


    return 0;
}