#include<iostream>
using namespace std;
class student{
	private:
		int rollno;
		float per;
	public:	
		student(int x,float y){
			rollno = x;
			per = y;
		}
		
		void print(){
			cout<<"\n rollno :"<<rollno;
			cout<<"\n per :"<<per;
		}
};
int main(){
	int a;
	float b;
	
	cout<<"\n enter rollno :";
	cin>>a;
	cout<<"\n enter percentage :";
	cin>>b;
	
	student obj(a,b);
	obj.print();
}
