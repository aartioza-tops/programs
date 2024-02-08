#include<iostream>
using namespace std;
class A{
	public:
		int x,y;		
		A(){
			cout<<"default constructor";
		}
		A(int a,int b){
			x=a;
			y=b;
		}
		A(const A &old){
			x=old.x;
			y=old.y;
		}
		void print(){
			cout<<"\n X:"<<x;
			cout<<"\n Y:"<<y;
		}
		~A(){
			cout<<"\n destructor called";	
		}
};

int main(){
	A obj1(10,20);
	A obj2(obj1);
	
	obj2.print();

}





