#include <stdio.h>
int main(){
	
	int  edge,edge0,edge1;
	
	// Square Recipent Calculator
	printf("Enter The Square's Edge Lenght Cm : \t");
	scanf("%d",&edge);
	
	edge *=edge;
	
	printf("***************************** \n\n");
	printf("Square's Recipiemt : %d cm \n\n",edge);
	printf("***************************** \n\n");
	
	// Oblong Recipent Calculator
	printf("Enter The Oblong's Lenght Cm : \t\t");
	scanf("%d",&edge0);
	printf("Enter THe Oblong's 2. Lenght Cm : \t");
	scanf("%d",&edge1);
	
	edge0 *=edge1;
	
	printf("***************************** \n\n");
	printf("Oblong' Recipent : %d cm \n\n",edge0);
	printf("*****************************");
	
	return 0;
}
