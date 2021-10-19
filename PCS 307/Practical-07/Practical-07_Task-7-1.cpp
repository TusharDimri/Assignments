#include<iostream>

using namespace std;

int main(){
    int ch;
    do {
        cout << "\n";
        cout<<"Enter Your Choice \n0. Exit \n1. Year\n2. Month\n3. Day\n";
        cin>>ch;
        switch(ch){
            case 0:
                break;
            case 1: 
                cout<<"Year : 2021\n";
                break;
            case 2: 
                cout<<"Month : October\n";
                break;
            case 3: 
                cout<<"Day : Wednesday\n";
                break;
            default :
                cout<<"Invalid Choice!\n";
                break;
        }
    }while(ch);
    return 0;
}