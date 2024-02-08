#include<stdio.h>
struct student{
	int rollno;
	float per;
	char grade;
};
int main(){
	struct student s1,s2;
	
	s1.rollno=1;
	s1.per=90.0;
	s1.grade ='A';
	
	scanf("%d",&s2.rollno);
	scanf("%f",&s2.per);
	scanf(" %c",&s2.grade);	
	
	printf("%d %f %c",s1.rollno,s1.per,s1.grade);
	
	struct student s[5];

}
