#include<stdio.h>
int maxValue(int a,int b);
int d;
int main(){
	d=10;
	printf("\n main d = %d",d);
	printf("%d is biggest :",maxValue(10,20));
}
int maxValue(int a,int b){
	d=20;
	printf("\n func d = %d",d);
	if(a>b){
		return a;
	}else{
		return b;
	}
}
