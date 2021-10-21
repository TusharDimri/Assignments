//  n * ((n-1)^(n-1) + (n-1))
#include<iostream>
#include<cmath>


using namespace std;

void series(int n){
    long element = 2;
    if (n == 0 || n == 1)
    {
        return;
    }
    
    series(n -1);
    element =  n * ( pow((n-1), (n-1)) + (n-1) );
    cout << element << " ";
    return;
    
}

int main(){
    int n;

    cout << "Enter a number: ";

    cin >> n;

    series(n);
    
    cout << endl;

    return 0;
}
