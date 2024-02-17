#include<stdio.h>
int main(){
	
	char name[20],i,count=0;
	
	printf("\n enter your name :");
	gets(name);
	puts(name);
	 
	for(i=0;name[i]!='\0';i++){
		if(name[i]!=' '){
			count++;
		}
			
	}
	
	//printf("\n total length is %d",count);
	for(i=count-1;i>=0;i--){
		printf("%c",name[i]);
	}
	
	 
}
