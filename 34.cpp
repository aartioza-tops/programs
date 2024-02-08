#include<iostream>
using namespace std;
class A{
	public:
		virtual void funA() = 0;
};
class B:public A{
	public:
		void funA(){
			cout<<"\n good morning....";
		}
};
int main(){
	B obj;
	obj.funA();
}
