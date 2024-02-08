// single inheritance
#include<iostream>
#include<string.h>
using namespace std;
class student{
	protected:
		int rollno,m1,m2,m3;
		char name[50];
	public:	
		void get_data(int x,char y[50],int z,int w,int a){
			rollno=x;
			strcpy(name,y);
			m1=z;
			m2=w;
			m3=a;
		}
};
class result:public student{
	public:
		
		void print_data(){
			cout<<"\n rollno :"<<rollno;
			cout<<"\n name :"<<name;
			cout<<"\n total :"<<m1+m2+m3;
		}
};

int main(){
	result r1;
	r1.get_data(12,"tops",50,50,50);
	r1.print_data();
}


