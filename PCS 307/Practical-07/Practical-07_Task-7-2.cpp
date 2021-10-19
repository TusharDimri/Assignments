#include<iostream>
#include<ctime>
#include<string>
using namespace std;
int main(){
    int ch;
    time_t curtime= time(0);
    string dt = ctime(&curtime);
    do{
        cout << "\n";
        cout << "Current time = " << dt;
        cout<< "Enter Your Choice \n0. Exit \n1. Year\n2. Month\n3. Day\n";
        cin >> ch;
        switch(ch){
            case 0:
                break;
            case 1: 
                cout<<dt.substr(20,4) << endl;
                break;
            case 2:
                cout<<dt.substr(4,3) << endl;
                break;
            case 3:
                cout<<dt.substr(0,3) << endl;
                break;
            default :
                cout<<"\n";
                break;
        }
    }
    while (ch);
    
    return 0;
}