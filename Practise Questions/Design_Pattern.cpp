#include <iostream>
using namespace std;

// First Pattern
// 1 2 3 4
// 1 2 3 4
// 1 2 3 4
// 1 2 3 4

int main(){
    cout << "First Pattern" << endl;

    for(int i=1; i<=4 ; i++){
        for(int j=1; j<=4 ; j++){
            cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}