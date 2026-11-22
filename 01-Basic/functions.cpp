#include <iostream>
using namespace std;

// Example Of Void Function
void printHello(){
    cout << "Hello";
}

// Example Of int datatype return value
int intValueReturn(){
    cout << "You are getting int value from this block\n";
    cout<<endl;
    return 15; // Or we can send any values like sum = 2 + 2 + 2 + 2 then return sum
}

// Function With Parameters
int functionWithParameter(int a , int b){
    return a + b;
}

int main(){
    printHello();
    cout<<endl;

    intValueReturn();
    cout<<endl;

    // It is calling the function but you want to show returning value or store it
    int returningValue = intValueReturn();
    cout << "val = " << returningValue << endl;

    // You can directly shows the value like
    cout << "val = " << intValueReturn() << endl;

    // Function With Parameter
    // Here How We Can share values to them
    cout << "Ans = " << functionWithParameter(5,5) << endl;

    // We Can Also Pass Variables To them
    int a = 10 , b = 10;
    int returnValue = functionWithParameter(a,b);
    cout << "Return Value is = " << returnValue;

    return 0;
}