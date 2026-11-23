#include <iostream>
#include <cmath>
using namespace std;

int decimalToBinary(int n){
    int ans = 0;
    int power = 1;
    while (n > 0){
        int quot = n % 2;
        
        // ans = ans + (quot * (pow(10 , power))); // This works if we using cmath if not then we simply add to multiple * 10 to the power variable

        ans += (quot * power);
        power *= 10;
        n /= 2;
    }
    return ans;
}

int binaryToDeciaml(int n){
    int ans = 0;
    int pow = 1;
    while(n > 0){
        int rem = n % 10;
        ans += (rem * pow);

        pow *= 2;
        n /= 10;
    }
    return ans;
}

int main(){
    cout << decimalToBinary(50) << endl;
    cout << binaryToDeciaml(110010) << endl;

    cout << binaryToDeciaml(decimalToBinary(50)) << endl;
    return 0;
}