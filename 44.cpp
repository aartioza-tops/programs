#include<stdio.h>
int main(){
	
	char name[10];
	int i;
//	scanf("%s",&name);
	//printf("%s",name);
	
	gets(name);
	//puts(name);
	
	for(i=0;name[i]!='\0';i++){
		printf("\n%c",name[i]);
	}
	
}
