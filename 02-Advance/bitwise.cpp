#include<iostream>
using namespace std;

int main(){
    int a = 6 , b = 10;
    cout << "Bitwise AND (&) Operator " << (a & b) << endl;
    cout << "Bitwise OR (|) Operator " << (a | b) << endl;
    cout << "Bitwise XOR (^) Operator " << (a ^ b) << endl;
    cout << "Bitwise Left Shift (<<) Operator " << (b << 2) << endl;
    cout << "Bitwise Right Shift ( >> ) Operator " << (b >> 1) << endl;
    return 0;
}