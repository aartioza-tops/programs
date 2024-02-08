#include<iostream>
using namespace std;
class A{
	public:
	int a;
	

	void funA(){
		cout<<"\n class A method";
	}
};
class B:public A{
	public:
	int b;
	
	void funA(){
		cout<<"\n b function";
	}
	
	void funB(){
		cout<<"\n class B method";
	}
};
int main(){
	B objB;
	objB.a = 10;
	objB.b = 20;
	
	objB.funA();
	objB.funB();	
	
	
}
