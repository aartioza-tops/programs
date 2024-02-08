#include<iostream>
using namespace std;
class val{
	protected:
		int a, b;
		
	public:
		void get_data(int x,int y){
			a=x;
			b=y;
		}
};
class sum:public val{
	public:
	void print_sum(){
		cout<<"\n a+b :"<<a+b;
	}
};
int main(){
	sum s1;
	s1.get_data(10,10);
	s1.print_sum();
}






