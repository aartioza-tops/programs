#include<stdio.h>
struct student{
	int rollno;
	float per;
	char name[20];
}s1;
int main(){
		struct student s2;
		
		s1.rollno = 20;
		s1.per = 90.70;
		
		s2.rollno = 56;
		s2.per = 78.90;
		
		printf("rollno %d",s1.rollno);
		printf("per %f",s1.per);
		
}
