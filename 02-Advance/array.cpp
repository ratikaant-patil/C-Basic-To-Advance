#include <iostream>
using namespace std;


void multiplyArrayByTwo(int arr_three[], int size){
    for(int i=0 ; i<size ; i++){
        arr_three[i] = arr_three[i] * 2;
    }
}

int main(){
    int arr[5] = {1,2,3};
    int arr_two[2] = {1};
    for(int i =0 ; i<sizeof(arr)/sizeof(int);i++){
        cout << "index " << i << " => " << arr[i] << " ";
        cout << endl;
    }

    cout << endl;
    for(int i =0 ; i<sizeof(arr_two)/sizeof(int);i++){
        cout << "index " << i << " => " << arr_two[i] << " ";
        cout << endl;
    }

    // Passing array to a function with call by reference 
    // which sends our original array pointer to the function
    // so in function is our array is modified then our original 
    // array also modified because array is non-primitive datatype
    // directly shares its original pointer to a function 
    // pointer means a address of our variable so once we have a original address
    // using it we can modify origin variable anywhere

    // # In this you can see how original array get changes
    int arr_three[3] = {1,2,3};
    multiplyArrayByTwo(arr_three,3);
    cout << "After Modifying the array " << endl;
    for(int i =0 ; i<3 ; i++){
        cout << arr_three[i] << endl;
    }
    // We Modified our array in a function but it refelcting in origin function
    // this is how using pointer or address or variable we can modify original values
    


    return 0;
}