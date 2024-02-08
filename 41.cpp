#include<stdio.h>
main(){
	int A[3][3],row,col;
	
	for(row=0;row<3;row++){
		for(col=0;col<3;col++){
			scanf("%d",&A[row][col]);
		}
	}
	
	for(row=0;row<3;row++){
		for(col=0;col<3;col++){
			printf("\t%d",A[row][col]);
		}
		printf("\n");
		
	}
	
		
}
