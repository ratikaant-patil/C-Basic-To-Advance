#include <iostream>
using namespace std;

// First Pattern
// 1 2 3 4
// 1 2 3 4
// 1 2 3 4
// 1 2 3 4

int main(){
    cout << "First Pattern" << endl;

    int n = 4;
    for(int i=1; i<=n ; i++){
        for(int j=1; j<=n ; j++){
            cout << j << " ";
        }
        cout << endl;
    }
    cout << endl;
// Second Pattern
// A B C D
// A B C D
// A B C D
// A B C D
    
    cout << "Second Pattern" << endl;

    for(int i=1; i<=n; i++){
        char charachter = 'A';
        for(int j =1; j<=n;j++){
            cout << charachter << " ";
            charachter = charachter + 1; // Here type Conversion is happening
        }
        cout << endl;
    }
    cout << endl;

// Third Pattern
// 1 2 3
// 4 5 6
// 7 8 9

    cout << "Third Pattern" << endl;
    n=3;
    int val = 1;
    for(int i=0; i<n ; i++){
        for(int j=0; j<n ; j++){
            cout << val << " ";
            val += 1;
        }
        cout << endl;
    }
    cout << endl;


// Fourth Pattern
// *
// * *
// * * *
// * * * *
    cout << "Fourth Pattern" << endl;
    n = 10;
    for(int i = 1 ; i<=n ; i++){
        for(int j = 1 ; j <=i ; j++){
            cout << "* ";
        }
        cout << endl;
    }
    cout << endl;


// Fifth Pattern
// 1
// 2 2
// 3 3 3
// 4 4 4 4

    cout << "Fifth Pattern" << endl;
    n = 4;
    for(int i = 1 ; i<=n ; i++){
        for(int j = 1 ; j <=i ; j++){
            cout << i << " ";
        }
        cout << endl;
    }
    cout << endl;


// Sixth Pattern
// A
// B B
// C C C
// D D D D
// E E E E E

    cout << "Sixth Pattern" << endl;
    n= 5;
    char chr = 'A';
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout << chr << " ";
        }
        chr += 1;
        cout << endl;
    }

    return 0;
}