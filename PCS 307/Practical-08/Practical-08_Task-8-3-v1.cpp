#include<iostream>

using namespace std;

int main(){
    int a = 10;

    int *p;

    int **q;

    p = &a;

    q = &p;

    cout << *p << endl; // Output: 10

    cout << **q << endl; // Output: 10

    return 0;
}