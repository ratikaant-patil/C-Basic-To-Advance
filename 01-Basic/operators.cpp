#include<iostream>
using namespace std;

int main(){
    int a = 10 , b =5;
    cout << "***** Binary Operators ******" << endl ;
    cout << endl ;

    cout << "1 . Arithmatic Operatos" << endl ;
    cout << " + for addition of two number " << (a+b) << endl ;
    cout << " - for substraction of two number " << (a-b) << endl ;
    cout << " + for multiplicaiton of two number " << (a*b) << endl ;
    cout << " + for division of two number " << (a/b) << endl ;
    cout << " + for modulo of number " << (a%b) << endl ;

    cout << endl;

    cout << "2 . Relational Operatos" << endl ;
    cout << " <   For checking less than " << (a < b) << endl ;
    cout << " <=  For checking less than equal to " << (a <= b) << endl ;
    cout << " >   For checking greather than" << (a > b) << endl ;
    cout << " >=  For checking greather than equal to " << (a>=b) << endl ;
    cout << " ==  for checking equal to " << (a==b) << endl ;
    cout << " !=  for checking not equal to " << (a!=b) << endl ;

    cout << endl;

    cout << "3 . Logical Operatos" << endl ;
    cout << " Or (||)   should one condition true from all conditions " << (a < b) << endl ;
    cout << " And (&&)   should all condition true " << (a <= b) << endl ;
    cout << " NOT (!) to convert condition true to false or false condition to true" << (a > b) << endl ;

    if(a<b || b>a){
        cout << "True" << endl ;
    }
    if(a > b && a!=0){
        cout << "True" << endl ;
    }
    if(a!=0){
        cout << "True" << endl ;
    }


    cout << "***** Unary Operators ******" << endl ;
    cout << endl ;

    cout << "++ = used to increment variable by 1 " << (++a) << endl;
    cout << "-- = used to decrement variable by 1 " << (--b) << endl;

    return 0;
}




//  <  = Less than
//     <= = less than equal to
//     >  = greather than
//     >= = greather than equal to
//     == = equal to
//     != = Not equal to