#include<iostream>
using namespace std;

int findSmallestArray(int arr[], int size){
    int smallest = INT_MAX;
    for(int i=0 ; i<size; i++){
        if(smallest > arr[i]){
            smallest = arr[i];
        }
    }
    return smallest;
}

int findSumOfArray(int arr[],int size){
    int sum = 0;
    for(int i = 0; i<size ; i++){
        sum += arr[i];
    }
    return sum;
}

int findProductOfArray(int arr[],int size){
    int product = 1;
    for(int i = 0; i<size ; i++){
        product *= arr[i];
    }
    return product;
}

void maxAndMinSwao(int arr[] , int size){
    int max = INT_MIN;
    int max_index = 0;
    int min = INT_MAX;
    int min_index = 0;

    for(int i=0 ; i<size ;i++){
        // Max Number
        if(arr[i] > max){
            max = arr[i];
            max_index = i;
        }

        // Min Number
        if(arr[i] < min){
            min = arr[i];
            min_index = i;
        }
    }
    cout << "max_index = " << max_index << endl;
    cout << "min_index = " << min_index << endl;
    swap(arr[max_index],arr[min_index]);
}

void printUniqueValues(int arr[],int size){
    
    cout << "Unique Values" << endl;
    for(int i=0;i<size;i++){
        int count = 0;
        for(int j=0; j<size+1 ; j++){
            if(arr[i]==arr[j]){
                count +=1;
                // cout << arr[i] << endl;
            }
        }
        if(count == 1){
            cout << arr[i] << endl;
        }
    }
}


void intersectionOfTwoArrays(){
    int arr_1[] = {1,2,3,4,5};
    int arr_2[] = {6,2,8,4,5};
    for(int i=0; i<sizeof(arr_1)/sizeof(int); i++){
        int count = 0;
        for(int j=0; j<sizeof(arr_2)/sizeof(int); j++){
            if(arr_1[i] == arr_2[j]){
                count += 1;
            }
        }
        if(count == 1){
        cout << "Intersection Values Are = " << arr_1[i] << endl;
        }
    }

}

int main(){
    // Q.1 Find Smalles in array
    const int size = 5;
    int arr[size] = {5,3,-1,543,-24};
    // cout << findSmallestArray(arr,size) << endl;
    // You can also write it as 
    cout << findSmallestArray(arr,sizeof(arr) / sizeof(int)) << endl;
    // But this sizeof(arr) / sizeof(int) logic you cant write in function 
    // Because array send to function is like pointer type
    // Or call by reference type

    // Q.2 Calculate sum and product of all numbers in an array.
    const int size_2 = 6;
    int arr_2[size_2] = {1,2,3,4,5,6};
    cout << " sum is = " << findSumOfArray(arr_2,size_2) << endl ;
    cout << " product is = " << findProductOfArray(arr_2,size_2) << endl ;

    // Q.3 Swap the max & min number in array
    const int size_3 = 5;
    int arr_3[size_3] = {-11,2,3,44,5};
    maxAndMinSwao(arr_3,size);
    cout << "Swap of max & min is = " << endl;
    for(int i=0; i<size_3;i++){
        cout << arr_3[i] << endl;
    }

    // Q.4 Print all the unique values in an array
    const int size_4= 6;
    int arr_4[size_4] = {1,1,2,3,3,4};
    printUniqueValues(arr_4,size_4);

    // Q.5 Print intersection of 2 arrays .
    intersectionOfTwoArrays();
    return 0;
}