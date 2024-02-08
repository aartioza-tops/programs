#include<iostream>
using namespace std;
class student{
	private:
	//properties - data member
	int rollno;
	float per;
	char email[20];
	
	public:
	// methods - member functions
	void get_data(){
		cout<<"\n enter rollno:";
		cin>>rollno;
		cout<<"\n enter percentage:";
		cin>>per;
		cout<<"\n enter email :";
		cin>>email;
	}
	void print_data(){
		cout<<"\n rollno:"<<rollno<<"\n percentage :"<<per<<"\n email :"<<email;
	}
};

int main(){
	student s1,s2,s3,s4,s5;
	cout<<"\n hello...";
	
	s1.get_data();
	s1.print_data();
	
	
	
}
