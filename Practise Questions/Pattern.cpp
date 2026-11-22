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
    // for(int i=1; i<=n ; i++){
    //     for(int j=1; j<=n ; j++){
    //         cout << j << " ";
    //     }
    //     cout << endl;
    // }

// Second Pattern
// A B C D
// A B C D
// A B C D
// A B C D
    
    for(int i=1; i<=n; i++){
        char charachter = 'A';
        for(int j =1; j<=n;j++){
            cout << charachter << " ";
            charachter = charachter + 1; // Here type Conversion is happening
        }
        cout << endl;
    }

    return 0;
}