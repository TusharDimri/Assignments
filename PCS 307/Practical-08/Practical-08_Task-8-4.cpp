#include<iostream>

using namespace std;

void factorial(int num){
    int fac = 1;
    for (int i = 2; i <= num; i++)
    {
        fac = fac * i;
    }
    cout << "Factorial of " <<  num << " is " << fac << endl;
}

int main(){
    int num;
    cout << "Enter a number: ";
    cin >> num;
    factorial(num);

    return 0;

}
