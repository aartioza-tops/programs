#include<iostream>
using namespace std;
class student{
	private:
	// data - properties
		int rollno;
		float per;
		char name[50];
	public:
	// functionality - method
		void get_data(){
			cout<<"\n enter rollno:";
			cin>>rollno;
			
			cout<<"\n enter per:";
			cin>>per;
			
			cout<<"\n name:";
			cin>>name;
		}
		void print_data(){
			cout<<"\n rollno:"<<rollno;
			cout<<" name:"<<name;
			cout<<" per:"<<per;
		}
};
int main(){
	student s1,s2,s3;

	s1.get_data();
	s2.get_data();
	s3.get_data();
	
	s1.print_data();
	s2.print_data();
	s3.print_data();
	
}
