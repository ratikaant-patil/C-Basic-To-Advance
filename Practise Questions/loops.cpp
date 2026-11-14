#include <iostream>
using namespace std;

int main(){
    int from , to;
    cout << " Print From 1 to n number using while loop" << endl;
    cout << endl;
    cout << "Enter a number to start from " << endl;
    cin >> from;
    cout << "Enter a number to End " << endl;
    cin >> to;

    while(from <= to){
        cout << from << " ";
        from ++;
    }

    cout << endl;
    cout << " Print From 1 to n number using For loop" << endl;

    from = 1;

    for(from ; from <= to ; from++){
        cout<<from << " ";
        cout<<from << " ";
    }

    return 0;
}