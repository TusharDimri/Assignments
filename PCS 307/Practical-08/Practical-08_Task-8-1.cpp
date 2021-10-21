#include<iostream>

using namespace std;

int main(){
    // int *p = {10,20,20};

    cout << *p;

    p++;

    cout << *p;

    /*
    This code will give an error because we are using a pointer varibale and giving it an array.
    */
    return 0;
}