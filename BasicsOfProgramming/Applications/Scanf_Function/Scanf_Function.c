#include <stdio.h>
int main(){
	
	int  number;
	double doubleNumber;	
	float floatNumber;
	char character;
	char characterString[15]; 
	
	printf("Please Enter The Number : \t");
	scanf("%d",&number);
	printf("Please Enter The Double Number : \t ");
	scanf("%lf",&doubleNumber);
	printf("Please Enter The Float Number : \t");
	scanf("%f",&floatNumber);
	printf("Please Enter The Character : \t");
	scanf(" %c",&character);
	printf("Please Enter The Character String : \t");
	scanf("%s",&characterString);
	printf("********************************************************* \n");
	printf("Enter's The Number : %d \n",number);
	printf("Enter's The Double Number : %lf \n",doubleNumber);
	printf("Enter's The Float Number : %f \n",floatNumber);
	printf("Enter's The Character : %c \n",character);
	printf("Enter's The Charactet String : %s ",characterString);
	
	
	return 0;
}
