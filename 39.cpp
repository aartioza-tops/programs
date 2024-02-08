#include<iostream>
using namespace std;
class A{
	private:
		int privateData;
	protected:
		int protectedData;
	public:	
		void assign(){
			privateData = 10;
			protectedData = 20;
		}
	friend class B;		
};
class B{
	public:
		void print_data(){
			A obj;
			obj.assign();
			cout<<"\na:"<<obj.privateData;
			cout<<"\nb:"<<obj.protectedData;
		}
		
	
};

int main(){
	B objB;

//	objB.print_data();
	string str1("tops");
	string str2=" tech";
	string str3=str1+str2;
	cout<<str3;
		
	
}

