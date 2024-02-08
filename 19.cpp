#include<iostream>
using namespace std;
class A{
	public:
		void myFun();
};
void A::myFun()
{
	cout<<"\n class A function";
}
int x = 50; //global
int main(){
	int x=10; // local
	
	cout<<"\n local x ="<<x;
	cout<<"\n global x ="<<::x;
	
	A obj;
	obj.myFun();
	
}
