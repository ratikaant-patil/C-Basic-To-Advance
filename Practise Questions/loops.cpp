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

    cout << endl;
    cout << " Calculate the sum  From 1 to n number using For loop" << endl;

    from = 1;
    int sum = 0;

    for(from ; from <= to ; from++){
        sum += from;
    }
    cout << "Sum value is " << sum << endl;


    cout << endl;
    cout << "Check if a number is prime or not" << endl;

    int num = 6 , count = 0;

    for(int i=1 ; i<=num ; i++){
        if(num % i == 0){
            cout << "in primt" << endl;
            count ++;
        }
    }
    if(count == 2){
        cout << "Prime Number" << endl;
    }else{
        cout << "Not a prime number" << endl;
    }


    cout << endl;
    cout << "Sum of all numbers from 1 to N which are divisble by 3" << endl;

    num = 20;
    count = 0;
    for(int i=1 ; i<=num ; i++){
        if(i % 3 == 0){
            count = count + i ;
        }
    }
    cout << "Sum of all number divisible by 3 are " << count << endl;


    cout << endl;
    cout << "Print Factorial of number N" << endl;

    num = 5;
    count = 1;
    for(int i=1 ; i<=num ; i++){
            count = count * i ;
            cout << count << endl;
    }
    cout << "Factorial of number N is " << count << endl;


    return 0;
}