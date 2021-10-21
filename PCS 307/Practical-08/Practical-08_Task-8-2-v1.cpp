#include<iostream>

using namespace std;

int main(){
    int arr[] = {10,20,30};

    cout << *arr << endl; // This prints the element at arr[0]

    cout << arr << endl; // This prints the address of arrr[0]

    // arr++; // This line will give an error

cout << *arr;
    return 0;
}
