#include<iostream>

using namespace std;

class A{
	public:
	    int x;
            int y;
};

class B:public A{
    public:
    	void display(){
            x = 10;
	    y = 20;
	    cout<<x << " " <<y <<endl;
	}
};

int main(){
    B obj;
    obj.x = 20;
    obj.y = 40;
    obj.display();
    return 0;
}
