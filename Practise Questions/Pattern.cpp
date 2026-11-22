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
    cout << endl;

// Seventh Pattern
// 1
// 1 2
// 1 2 3
// 1 2 3 4

    cout << "Seventh Pattern" << endl;
    n= 4;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout << j << " ";
        }
        cout << endl;
    }
    cout << endl;


// Eight Pattern
// 1
// 2 1
// 3 2 1
// 4 3 2 1

    cout << "Eight Pattern" << endl;
    n= 4;
    for(int i=1;i<=n;i++){
        for(int j=i;j>0;j--){
            cout << j << " ";
        }
        cout << endl;
    }
    cout << endl;


// Ninth Pattern
// 1
// 2 3
// 4 5 6
// 7 8 9 10
    
    cout << "Ninth Pattern" << endl;
    n= 4;
    int num = 1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout << num << " ";
            num +=1;
        }
        cout << endl;
    }
    cout << endl;


// Tenth Pattern
// 1 1 1 1
//   2 2 2
//     3 3
//       4
    
    cout << "Tenth Pattern" << endl;
    n= 4;
    for(int i=1;i<=n;i++){

        for(int k=1; k<i;k++){
            cout << "  ";    
        }

        for(int j=n;j>=i;j--){
            cout << i << " ";
        }
       
        cout << endl;
    }
    cout << endl;



// Eleventh Pattern
// Pyramid Pattern
//      1   
//    1 2 1
//  1 2 3 2 1
//1 2 3 4 3 2 1
    
    cout << "Eleventh Pattern" << endl;
    n = 4;
    for(int i=1; i<=n ; i++){
        for(int k=i; k<n ; k++){
        cout << " " << " ";
        }

        for(int j=1; j<=i ; j++){
        cout << j << " ";
        }

        for(int j=i-1; j>0 ; j--){
        cout << j << " ";
        }

      
        cout << endl;
    }
    


    return 0;
}