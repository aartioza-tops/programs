#include<iostream>
using namespace std;
class A{
	public:
		
		int a;
		A(){
			a=10;
		}
		void print_a(){
			cout<<"\na :"<<a;
		}
};
int main(){
	A obj;
	obj.print_a();
	
}
