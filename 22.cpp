#include<iostream>
using namespace std;
class student{
	protected:
		char name[30];
		int science,maths,english;
		
	public:
			void get_marks(){
				cout<<"\n name:";
				cin>>name;
				
				cout<<"\n science:";
				cin>>science;
				
				cout<<"\n maths:";
				cin>>maths;
				
				cout<<"\n english:";
				cin>>english;
			}
};
class sports{
	protected:
		int sp_marks;
		
	public:
	     void get_sp_marks(){
	     	cout<<"\n enter sport marks:";
	     	cin>>sp_marks;
		 }	
};
class result:public student,public sports{
		public:
		int total;
		
		void cal_total(){
			total = science+maths+english+sp_marks;
		}
		
		void print_result(){
			cout<<"\n name :"<<name;
			cout<<"\n total :"<<total;
		}
};
int main(){
	result r1;
	r1.get_marks();
	r1.get_sp_marks();
	r1.cal_total();
	r1.print_result();
}










