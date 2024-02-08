#include<iostream>
using namespace std;
class A{
	public:
		static int count;
	    static void increment(){
	    	count++;
		}
};
int A::count = 0;
int main(){
	A obj1,ob2,ob3;
	cout<<"\n obj1 :"<<obj1.count;
	cout<<"\n obj2 :"<<ob2.count;
	cout<<"\n obj3 :"<<ob3.count;
	obj1.increment();
	cout<<"\n obj1 :"<<obj1.count;
	cout<<"\n obj2 :"<<ob2.count;
	cout<<"\n obj3 :"<<ob3.count;
}
