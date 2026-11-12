

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

    // 1] Type Conversion
    int typeConversion = char_1;
    cout << "We are converting char value to int :" << typeConversion << endl;

    // 2] Type Casting
    int typeCasting = (int)double_1; // For type casting you need to define datatype on own when we go from large datatype to small datatype
    cout << "We are converting double value to int :" << typeCasting;

    return 0;
}