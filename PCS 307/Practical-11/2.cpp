#include<iostream>

using namespace std;

class A{
	public:
	    int x;
        protected:
 	    int y;
	private:
            int z;
};

class B:public A{
    public:
    	void display(){
            x = 10;
	    y = 30;
	    cout<<x << " " <<y <<endl;
	}
};

class C:private A{
    public:
    	void display(){
            x = 100;
	    y = 300;
	    cout<<x << " " <<y <<endl;
	}
};

class D:protected A{
    public:
        void display(){
            x = 12;
            y = 13;
            cout<<x << " " <<y <<endl;
        }
};

int main(){
    B obj1;
    C obj2;
    D obj3;    

    obj1.x = 20;
    // obj1.y = 40; y is protected variable
    obj1.display();

    // obj2.x = 20; x will be private for class C
    obj2.display();

    // obj3.x = 12; x will be protected for class D
    obj3.display(); 

   return 0;
}
