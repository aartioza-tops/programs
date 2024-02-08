#include<iostream>
using namespace std;
class complex{
	public:
		int a,b;
		void get_value(){
			cout<<"\na";
			cin>>a;
			cout<<"\nb";
			cin>>b;
		}
		complex operator+(complex ob){
			complex t;
			t.a = a + ob.a;
			t.b = b + ob.b;
			return t;
		}
		
		
		void print_value(){
			cout<<"\n a:"<<a<<"\n b:"<<b;
		}
};
int main(){
	complex obj1,obj2,result;
	obj1.get_value();
	obj2.get_value();
	
	result=obj1+obj2;
	
	result.print_value();
	
}
