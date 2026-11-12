// Find a charchter is lower case or upper case

#include <iostream>
using namespace std;

int main(){
    char value = 'g';
    if(value >= 'a' && value <= 'z'){
        cout << "Lower Case Value";
    }else{
        cout << "Upper Case Value";
    }

    return 0;
}