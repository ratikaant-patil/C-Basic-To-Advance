//  In Cpp Their Are 3 Types Of DATA Types
//  1. Built-In :-
//     int - it stores integer values like 1, 2343, 3424365
//     float - it stores decimal of low precision like 1.43 , 1.43 , 254.32
//     char - it stores charcters like a , b , z ,x
//     double -it stores decimal of high precision like 1.4332 , 1.43234 , 254.32324
//     bool - it stores true and false values

//  2. User-defined :-
//     Struct -
//     Union -
//     Enum -

//  3. Derived :-
//     Array -
//     Functions -
//     Pointers -

#include <iostream>
using namespace std;
int main(){
    int integer_1=55 , integer_2=21345;
    float float_1=432.54 , float_2=23.43;
    char char_1 = 'a' , char_2 = 'b';
    double double_1 = 23.34243 , double_2 = 342.43243;
    bool bool_1 = true, bool_2 = false;

    cout<<"1. integer datatype are like "<< integer_1 << " , "<< integer_2 ;
    cout<<" & it uses 4 bytes of memory"<< endl;
    cout<<"2. float datatype are like "<< float_1 << " , " << float_2 ;
    cout<<" & it uses 4 bytes of memory"<< endl;
    cout<<"3. char datatype are like "<< char_1 << " , " << char_2 ;
    cout<<" & it uses 1 bytes of memory"<< endl;
    cout<<"4. double datatype are like "<< double_1 << " , " << double_2 ;
    cout<<" & it uses 8 bytes of memory"<< endl;
    cout<<"5. bool datatype are like "<< bool_1 << " , " << bool_2 ;
    cout<<" & it uses 1 bytes of memory"<< endl;

    return 0;
}