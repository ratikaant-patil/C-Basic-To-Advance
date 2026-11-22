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

int sumOfDigit(int n){
    int ans=0;
    while(n > 0){
        int rem = n % 10;
        ans += rem;
        n = n / 10;
    }
    return ans;
}

int coefficientBinomail(int n , int r){
    return factorial(n) / ( factorial(r) * factorial(n-r));
}

int primeNumber(int n){
    int count = 0;
    for(int i = 1 ; i<=n ; i++){
        if(n%i==0){
            count +=1;
        }
    }
    return count == 2 ;
}

int primeNumberToN(int n){
    
}



int main(){
    int a = 4 , b = 20;
    
    // cout << "Find min of 2 numbers\n";
    // cout << "min num is = " <<findMinNumber(a,b) << endl;

    // Caculating Sum of 1 to n digits
    cout << "sum is = " << calculateSum(b) << endl;

    // Caculating Factorial of a number
    cout << "Factorial is = " << factorial(a) << endl;

    // Caculating Sum of digits of a number
    cout << "Sum of Digits of number is = " << sumOfDigit(145) << endl;

    // Caculating nCr binomial coefficient for n & r
    // Formula is : -
    // n! / r! * (n-r)!
    cout << "binomial coefficient number is = " << coefficientBinomail(8 , 2) << endl;

    // Check if a number is prime or not
    cout << "Prime number is = " << primeNumber(6) << endl;

    // Print all prime numbers from 1 to n
    cout << "Prime number is = " << primeNumberToN(6) << endl;

    return 0;
}