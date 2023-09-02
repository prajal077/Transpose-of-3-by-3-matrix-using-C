#include<stdio.h>
int main()
{
	int matrix[3][3], transpose[3][3];
	int i=0, j=0;
	printf("Entering the elements of matrix: \n");
	for(i=0; i<3; i++) {
		for(j=0; j<3; j++) {
			printf("Enter the elements of matrix[%d][%d]: ", i, j);
			scanf("%d", &matrix[i][j]);
			printf("\n");
		}
	}
	
	printf("The entered elements are: \n");
	for(i=0; i<3; i++) {
		for(j=0; j<3; j++) {
			printf("%d", matrix[i][j]);
		}
		printf("\n");
	}
	
	for(i=0; i<3; i++) {
		for(j=0; j<3; j++) {
			transpose[i][j] = matrix[j][i];
		}
	}
	printf("\nThe transpose of given matrix is: \n");
	for(i=0; i<3; i++) {
		for(j=0; j<3; j++)  {
		printf("%d ", transpose[i][j]);
		}
		printf("\n");
	}
	return 0;
}
