#include<iostream>

using namespace std;

class A{
    public:
        int k;
        void display(){
            k = 1; 
            cout<< k << endl;
        }
};

class B: virtual public A{
    public:
        void display1(){
            k = 10;
            cout<< k<< endl;
        }
};

class C: virtual public A{
    public: 
        void display2(){
	    k = 20;
            cout<< k<< endl;
        }
};

class D: public B, public C{

};

int main(){
   A obj1;
   B obj2;
   C obj3;
   D obj4;

   obj2.display1();
   obj3.display2();

   // Diamond Problem (In case we are not using virtual keyword):
   // obj4.display();
   // request for member ‘display’ is ambiguous

   return 0;
}
