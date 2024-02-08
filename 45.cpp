#include<stdio.h>
void myFunc();
void sumoftwo();
int big();
int get_total(int sci,int mat,int eng);
int main(){
	
	printf("%d is total",get_total(70,80,90));
}
void myFunc(){
	printf("hello....");
	printf("hi.....");
}
int big(){
	int a,b;
	scanf("%d",&a);
	scanf("%d",&b);
	if(a>b){
		return a;
	}else{
		return b;
	}
}
int get_total(int sci,int mat,int eng){
	return sci+mat+eng;
}




