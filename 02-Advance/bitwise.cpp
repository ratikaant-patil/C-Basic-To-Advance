#include<iostream>
using namespace std;

int global = 12345;

int main(){
    int a = 6 , b = 10;
    cout << "Bitwise Operators " << endl;
    cout << endl;
    cout << "Bitwise AND (&) Operator " << (a & b) << endl;
    cout << "Bitwise OR (|) Operator " << (a | b) << endl;
    cout << "Bitwise XOR (^) Operator " << (a ^ b) << endl;
    cout << "Bitwise Left Shift (<<) Operator " << (b << 2) << endl;
    cout << "Bitwise Right Shift ( >> ) Operator " << (b >> 1) << endl;

    cout << "Data Type Modifiers " << endl;
    cout << endl;

    cout << "Int size = " << sizeof(int) << endl;
    cout << "Long = " << sizeof(long) << endl;
    cout << "Long int = " << sizeof(long int) << endl;
    cout << "Short = " << sizeof(short) << endl;
    cout << "long long = " << sizeof(long long) << endl;
    cout << "signed = " << sizeof(signed) << endl;
    cout << "All datatypes are like signed which store positive and negative value" << endl;
    cout << "unsigned = " << sizeof(unsigned) << endl;
    cout << "unsigned stores positive values only which give us store extra value in that variable" << endl;

    cout << "Scope of variable " << endl;
    cout << endl;

    int local = 000;
    cout << "Local variable is  = " << local << endl;
    cout << endl;

    cout << "Global variable is  = " << global << endl;
    cout << endl;

    if (1 > 0){
        int local_in_block = 123;
    }
    if (1 > 0){
        global = 111;
    }

    // cout << local_in_block << endl;
    // You cant access this variable because it is under block 
    // you can use outer block vairable into inner and inner block
    // but cant use ineer block vairable into outer block
    
    cout << global;
    return 0;
}