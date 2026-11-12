// Conditional statements help a program decide which block of code to execute depending on a condition.

#include <iostream>
using namespace std;

int main(){
    int a= 5 , b =55;
    
    cout<<"if condition"<<endl;
    if (a < b){
        cout << "True" << endl;
    }

    cout<<"if-else condition"<<endl;
    if (a > b){
        cout << "True" << endl;
    }else{
        cout << "False" << endl;
    }

    cout<<"Nested if-else condition"<<endl;
    if (a > b){
        cout << "True" << endl;
    }else if(a==b){
        cout << "True" << endl;
    }else if(a!=b){
        cout << "True" << endl;
    }else{
        cout << "True" << endl;
    }
    
    return 0;
}