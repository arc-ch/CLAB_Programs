#include<stdio.h>
int rows,columns;
void New_Array(int A[rows][columns]);
int main(){
	printf("Enter rows and columns\n");
	scanf("%d%d",&rows,&columns);
	int A[rows][columns];
	for(int i = 0 ; i <rows-1 ;i++){
		for(int j = 0 ; j < columns; j++){
			scanf("%d",&A[i][j]);
		}
	}
	for(int i = 0; i<rows-1; i++){
		for(int j = 0 ; j<columns; j++){
			printf("%d ",A[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	New_Array(A);
}
void New_Array(int A[rows][columns]){
	int sum = 0;
	for(int i = 0; i<columns; i++){
		for(int j = 0; j<rows-1; j++){
			sum+= A[j][i];
		}
		A[rows-1][i] = sum;
		sum = 0;
	}
	printf("The array is\n");
	for(int i = 0 ; i<rows; i++){
		for(int j = 0 ; j<columns; j++){
			printf("%d ",A[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	//pattern
	for(int i = 0; i<rows; i++){
		if(i == 0 || i == rows-1){
			for(int j = 0; j<columns; j++){
				printf("%d ",A[i][j]);
			}
			printf("\n");
		}
		else{
			printf("%d ",A[i][0]);
			for(int j = 1; j<columns-1; j++){
				printf("  ");
			}
			printf("%d",A[i][columns-1]);
			printf("\n");
		}
	}
}
