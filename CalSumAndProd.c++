#include<iostream>
using namespace std;

int main(){
    int arr[5], sum = 0, prod = 1;
    int size = sizeof(arr)/sizeof(arr[0]);

    cout << "Enter 5 elements of an Array: ";
    for(int i = 0; i < 5; i++){
        cin >> arr[i];
    }

    cout << "The sum of the array is: ";
    for(int i = 0; i < size; i++){
        sum += arr[i];
        prod *= arr[i];
    }   

    cout << "The Sum of the array is: " << sum << endl;
    cout << "The product of the array is: " << prod << endl;
}