#include<iostream>
using namespace std;
class A{
	public:
		int sum(int a,float b){
			return a+b;
		}
		
		int sum(int a,int b,int c){
			return a+b+c;
		}
		
		int sum(int a,int b,int c,int d){
			return a+b+c+d;
		}
};

int main(){
	A obj;
	cout<<"\n"<<obj.sum(10,20);
	cout<<"\n"<<obj.sum(10,20,30,40);
	cout<<"\n"<<obj.sum(10,20,30);
}


