#include<stdio.h>

int sumoftwo();
int main(){
	int ans;
	ans=sumoftwo();
	//ans=ans+5;
	printf("ans =%d",ans);
}
int sumoftwo(){
	
	int a,b,c;
	scanf("%d",&a);
	scanf("%d",&b);
	c=a+b;

	return c;
}



