#include<iostream>
using namespace std;
class cal{
	private:
		int a,b;
	public:
		void get_value(int x,int y){
			a=x;
			b=y;
		}	
		int sum(int x,int y){
			
			return a+b;
		}
};
int main(){
	int x,y;
	cin>>x;
	cin>>y;
	cal obj;
	obj.get_value(x,y);
	cout<<"\n sum is"<<obj.sum();	
}
