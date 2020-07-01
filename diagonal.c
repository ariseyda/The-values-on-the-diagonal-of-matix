#include<stdio.h>
#include<time.h>

//Write a function that displays the values on the diagonal of its N x N matrix parameter and test the function in main function. 

int main(){
	
	time_t t;
	srand((unsigned) time(&t));
	int n;
	int i,j;
	printf("Enter N(for N X N matrix):");
	scanf("%d",&n);
	int matrix[n][n];
	for(j=0;j<n;j++){
		for(i=0;i<n;i++){
			matrix[j][i]=(rand() %20);
		}
	}
	printf("\nMatrix={");
	for(j=0;j<n;j++){
		printf("{");
		for(i=0;i<n;i++){
			printf("%d",matrix[j][i]);
			if(i<n-1){
				printf(",");
			}
		}
		printf("}");
		if(j<n-1){
			printf(",");
		}
	}
	printf("}");
	
	printf("\nThe values on the diagonal:{");
	for(i=0;i<n;i++){
		printf("%d",matrix[i][i]);
		if(i<n-1){
			printf(",");
		}
	}
	printf("}");
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
