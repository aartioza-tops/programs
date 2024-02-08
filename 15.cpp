#include<iostream>
using namespace std;
class value
{
	private:
		int x;
	public:	
	value(int a){
		x=a;
	}	
	
	int square(){
		return x*x;
	}
	
	int qube(){
		return x*x*x;
	}
};
int main(){
	value obj(10);
	cout<<"\n square :"<<obj.square();
	cout<<"\n cube :"<<obj.qube();
}




