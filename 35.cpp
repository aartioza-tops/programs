#include<iostream>
using namespace std;
class vehicle{
	protected:
		virtual void enginee()=0;
		virtual void speed()=0;
		virtual void fuel()=0;
		virtual void wheel()=0;
};
class car:public vehicle{
	public:
	void enginee(){
		cout<<"\n carr engine...";
	}
	void fuel(){
		cout<<"\n carr fuel....";
	}
	void stearing(){
		cout<<"\n carr stearing...";
	}
	 void speed(){
		cout<<"\n carr speed....";
	}
		 void wheel(){
		 	cout<<"\n carr wheel";
		 }
};

class bike:public vehicle{
	public:
	void enginee(){
		cout<<"\n bike engine...";
	}
	void fuel(){
		cout<<"\n bike fuel....";
	}
	void kick(){
		cout<<"\n bike kick...";
	}
	void speed(){
		cout<<"\n bike speed....";
	}
		 void wheel(){
		 	cout<<"\n bike wheel";
		 }
};
int  main(){
	car c1;
	bike b1;
	c1.enginee();
	c1.fuel();
	c1.stearing();
	b1.enginee();
	b1.fuel();
	b1.kick();
}



