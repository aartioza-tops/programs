#include<iostream>
using namespace std;
class Distance{
	public:
		int feet,inches;	
		Distance(int x,int y){
			feet=x;
			inches=y;
		}		
		void print_data(){
			cout<<"\n feet :"<<feet;
			cout<<"\n inches :"<<inches;
		}
		Distance operator-(){
			feet=-feet;
			inches = -inches;
			return Distance(feet,inches);	
		}
};
int main(){
	Distance D1(12,20);
	-D1;
	D1.print_data();
}



