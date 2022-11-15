#include <stdio.h>
int main(){
	int i=1;

		
	while(i<=10){
		printf("1 x %d = %d \t",i,1*i);
		printf("2 x %d = %d \t",i,2*i);
		printf("3 x %d = %d \t",i,3*i);
		printf("4 x %d = %d \t",i,4*i);
		printf("5 x %d = %d \t",i,5*i);
		printf("6 x %d = %d \t",i,6*i);
		printf("7 x %d = %d \t",i,7*i);
		printf("8 x %d = %d \t",i,8*i);
		printf("9 x %d = %d \t",i,9*i);
		printf(" 10 x %d = %d \t",i,10*i);
		printf("\n");
		i++;
	}
	printf("\n%d",i);
	
	//Entered The Number Of Order
	int num,a=1,total;
	
	printf("How Many Do You Want To Print : ");
	scanf("%d",&num);
	int x=num;
		
	while(num>0){
		printf("Entered Of Number : %d\n",a);
		total=total+a;
		a++;
		num--;		
	}
	printf("1-%d Numbers of Total : %d",x,total);
	
	// Two Number Of Between Of Total
	int num,num1,total,term,big,small;
	
	printf("Enter The Number 1 : ");
	scanf("%d",&num);
	printf("Enter The Number 2 : ");
	scanf("%d",&num1);
	
	term=abs(num-num1)+1;
	
	
	if(num1>=num){
		big=num1;
		small=num;
		while(term>0){
			printf("%d\n",num);
			total+=num;
			num++;
			term --;
		}
	}
	else{
		big=num;
		small=num1;
		while(num1<num){
			printf("%d\n",num1);
			total+=num1;
			num1++;
			term--;
			
		}
	}

	printf("%d+......+%d = %d",small,big,total);
	
	//Factorial Calculator
	int num,fac=1,x;
	
	printf("Enter The Number : ");
	scanf("%d",&num);
	
	x=num;
	if(num>=0){
	
	while(num>0){
		if(num==0){
			fac*=1;
		}
		else{
			fac*=num;
		}
		num--;
	}
	printf("%d!=%d",x,fac);}
	else{
		printf("Enters Pozi	tive Value...");
	}
	
	return 0;
}
