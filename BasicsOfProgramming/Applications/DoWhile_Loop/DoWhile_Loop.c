#include <stdio.h>
int main(){
/*	
	int num,big=1;
	char resum;
	
	do{
		printf("Enters Of Number : ");
		scanf("%d",&num);
		
		if(num>big){
			big=num;
			printf("New Big Of Number : %d\n",big);
		}
		else if(num==big){
			printf("The Number You Entered  Big Number Equal\n");
		}
		else{
			printf("The Number You Entered Small Than Big Number\n");
		}
		
		
		printf("Are You To Doing App ? [E/e]\n");
		scanf(" %c",&resum);
	}while(resum == 'E'||resum=='e');
	
	//The Sum Of The Entered Number
	int number,step,total,orjnum;
	char resum;
	
	printf("To Start The Program [E/e] Print : \n");
	scanf(" %c",&resum);
	
	while(resum=='e'||resum=='E'||resum=='r'||resum=='R'){
		
	printf("Enter The Number : \n");
	scanf("%d",&number);
		
	orjnum=number;
	
	if(number>0){
	
	do{
		total+=number%10;
		step++;
		number=number/10;
	}while(number>0);
	printf("**************************************************\n\n");
	printf("Entered Of Number : %d\nStep Of Value : %d\nTotal : %d\n",orjnum,step,total);
	printf("\n**************************************************\n");
	printf("If You Want To Try Again [R/r] However Exiting [Any Key] : \n");
	scanf(" %c",&resum);}
	else{
		printf("Please Try Again...\n");
	}
	}
	total=0,step=0;
	return 0;
	*/
	//EBOB Find
	int number,number1,big,small,remainder,remainder1;
	
	do{
		printf("Enter The Number 1 : ");
		scanf("%d",&number);
		printf("Enter The Number 2 : ");
		scanf("%d",&number1);
		
			
	}while(number <= 0 || number1 <=0);

	if(number > number1){
		big=number;
		small=number1;
	}
	else{
		big=number1;
		small=number;
	}
	
	remainder=big % small;
	
	while(remainder !=0){
		if(remainder>=small){
			big=remainder;
		}
		else{
			big=small;
			small=remainder;
		}
		remainder=big%small;
	}
	
	
	printf("EBOB(%d,%d) = %d",number,number1,small);
}
