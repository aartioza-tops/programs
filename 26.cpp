#include<iostream>
using namespace std;
class A{
	public:
		void printA(){
			cout<<"\n class A";
		}
};
class B:virtual public A{
	public:
		void printB(){
			cout<<"\n class B";
		}
};
class C:virtual public A{
	public:
		void printC(){
			cout<<"\n class C";
		}
};
class D:public B,public C{
	public:
		void printD(){
			cout<<"\n class D";
		}
};
int main(){
	D obj;
	obj.printA();
	obj.printB();
	obj.printC();
	obj.printD();
}




