#include<iostream>
using namespace std;
class Box{
	public:
	static int count;
	Box(){
		count++;
	}
	static int print_count(){
		return count;
	}
};
int Box::count = 0;
int main(){
	Box b1;
	cout<<"\n count :"<<b1.count;
	Box b2;
	cout<<"\n count :"<<b2.count;
	Box b3;
	cout<<"\n count :"<<b3.count;
	Box b4;
	cout<<"\n count :"<<b4.count;
	cout<<"\n class copy :"<<Box::count;
	cout<<"\n static function call :"<<Box::print_count();
	cout<<"\n object function call :"<<b1.print_count();
}
