#include<iostream>

using namespace std;

int factorial(int num){
    int fac = 1;
    if (num == 1 || num == 0)
    {
        return fac;
    }
    else
    {
        fac =  num * factorial(num - 1);   
    }
    return fac;
}

int main(){
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if(factorial(num) == -1){
        cout << "Invalid Input";
    }
    else{
        cout << "Factorial of " <<  num << " is " << factorial(num)<< endl;
    }

    return 0;
}
