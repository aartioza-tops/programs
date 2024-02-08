#include<iostream>
using namespace std;
class calculator{
	private:
		int a,b;
	public:	
		void get_value(int x,int y){
			a=x;
			b=y;
		}	
		int sum(){
			return a+b;
		}
		int sub(){
			return a-b;
		}
		int mul(){
			return a*b;
		}
		int div(){
			return a/b;
		}
};
int main(){
	int a,b;
	calculator c1;
	
	cout<<"\n a and b:";
	cin>>a;
	cin>>b;
	c1.get_value(a,b);
	cout<<"\n sum:"<<c1.sum();
	cout<<"\n sub:"<<c1.sub();
	cout<<"\n mul:"<<c1.mul();
	cout<<"\n div:"<<c1.div();
}
