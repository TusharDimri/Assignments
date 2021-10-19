#include<iostream>

using namespace std;

int main(){
    char arr[4][4];

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < i+1 ; j++)
        {
            arr[i][j] = '*';
            cout << arr[i][j] << " ";
        }
        cout << endl; 
    }
    

    return 0;
}