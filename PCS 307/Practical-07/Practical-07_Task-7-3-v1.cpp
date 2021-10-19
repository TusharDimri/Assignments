#include<iostream>

using namespace std;

void reverse(int arr[3][3]){
    int temp;
    
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (i == 0 || (i == 1 && j == 0))
            {
                temp = arr[i][j];
                arr[i][j] = arr[3-1-i][3-1-j];
                arr[3-1-i][3-1-j] = temp;
            }
            cout << arr[i][j] << " ";
        }
        cout << endl ;
    }
}

int main(){
    int arr[3][3] = {{1, 2, 3},
                    {4, 5, 6},
                    {7, 8, 9}
                };
    
    reverse(arr);
    

    return 0;
}