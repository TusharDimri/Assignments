#include<iostream>

using namespace std;

void swap(int a, int b){
    int temp =a;
    a = b;
    b = temp;
    cout<< "Inside swap(), a = "<< a << " and b = "<< b << endl;
}

int main(){
    int a = 10;
    int b = 20;

    cout<< "Before Calling swap(), a = "<< a << " and b = "<< b << endl;

    swap(a, b);

    cout<< "After Calling swap(), a = "<< a << " and b = "<< b << endl;

    return 0;

}