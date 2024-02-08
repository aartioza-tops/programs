#include<iostream>
using namespace std;
template <typename T>
class myClass{
	public:
		T a,b;
		myClass(T x,T y){
			a=x;
			b=y;
		}
		
		T sum(){
			
			return a+b;
		}
};
int main(){
	myClass <float>obj(10,20);
	cout<<"\n sum is:"<<obj.sum();
	
}
