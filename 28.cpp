#include<iostream>
using namespace std;
class A{
	public:
		int a;
	A(int x){
		a=x;
	}
};
class B:public A{
	public:
		int b;
	B(int x,int y):A(x){
		b=y;
	}
	void print_data(){
		cout<<"\n a="<<a;
		cout<<"\n b="<<b;
	}
};
int main(){
	B objB(10,20);
	objB.print_data();
}
