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
    n = 4;
    for(int i = 1 ; i<=n ; i++){
        for(int j = 1 ; j <=i ; j++){
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}