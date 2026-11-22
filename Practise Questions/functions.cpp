#include<iostream>
using namespace std;


int findMinNumber(int a , int b){
    if(a<b){
        return a;
    }
    return b;
}

int calculateSum(int a){
    int ans = 0;
    for(int i=1 ; i<=a ; i++){
        ans += i;
    }
    return ans;
}

int factorial(int a){
    int ans = 1;
    for(int i=1 ; i<=a ; i++){
        ans *= i;
    }
    return ans;
}



int main(){
    int a = 4 , b = 20;
    
    // cout << "Find min of 2 numbers\n";
    // cout << "min num is = " <<findMinNumber(a,b) << endl;

    cout << "sum is = " << calculateSum(b) << endl;

    cout << "Factorial is = " << factorial(a) << endl;

    return 0;
}