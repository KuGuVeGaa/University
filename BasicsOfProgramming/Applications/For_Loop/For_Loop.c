#include <stdio.h>
int main(){
/*	// Even And Uneven
	int i,x;
	
	y:printf("how Many Long : ");
		scanf("%d",&x);
	
	for(i=0;i<=x && x>=0;i++){ // Yada Ý+=2; Yaparsakta Çifti Verir
		if(i%2==0){
			printf("%d It's Even\n",i);
		}
		else{
			printf("%d It's Uneven\n",i);
		}
		
	}
	if(x<0){
		printf("Please Enter The True Value...\n");
		goto y;
	}
	
	// 5 Divide 
	
	int number,i,res;
	
	printf("How Many Long Number : ");
	scanf("%d",&number);
	
	if(number>0){
		for(i=0;i<=number;i+=5){
			printf("%d\n",i);
		}
		res=number%5;
		printf("Enter The Value : '%d' And 5 Divide Rest : '%d'",number,res);
	}


	else{
		for(i=0;i>=number;i-=5){
			printf("%d",i);
		}
	}
	
	// ?-? Numbers Of Total

	int num,total,i;
	
	printf("How Much To Total : ");
	scanf("%d",&num);
	
	if(num>0){
	for(i=0;i<num;i++){
		total+=i;
	}}
	else{
		for(i=0;i>num;i--){
			total+=i;
		}
	}
	printf("%d'e For Number Total : %d",num,total);
	
	// Ticket Sales
	
	int ticketnum;
	int ticketsValue=15000;
	char control;
	
	for(;ticketsValue>0;){
		printf("Would You Buys Any Tickets ? [Y/N] : ");
		scanf(" %c",&control);
		
		if(control == 'Y'||control == 'y'){
			printf("How Much Buy Tickets : ");
			scanf("%d",&ticketnum);
			if(ticketsValue>=ticketnum){
				ticketsValue-=ticketnum;
				printf("Rest Tickets : %d\n",ticketsValue);
			}
			else{
				printf("Please Enter The Ticket Of Value...\n");
			}
			
			
			
		}
		else{
			break;
			
		}
	}
	if(ticketsValue==0){
		printf("Rest Ticket : %d\n",ticketsValue);
		printf("Tickets Comming To An End....");
	}
	else{
		printf("\nBought To Ticket : %d\nRest Tickets : %d\n",15000-ticketsValue,ticketsValue);
	}
	
	// Fibinocci Series
	
	int num,num2,num3,step,i;
	
	printf("Enter The Number 1 : ");
	scanf("%d",&num);
	printf("Enter The Number 2 : ");
	scanf("%d",&num2);
	printf("Enter The Step : ");
	scanf("%d",&step);
	
	printf("%d\n%d\n",num,num2);
	
	for(i=0;i<step;i++){
		num3=num+num2;
		num=num2;
		num2=num3;
		printf("%d\n",num3);
	}
	
	// Square Root
	
	int i;
	
	for(i=0;i<60;i++){
		printf("%d! : %f\n",i,sqrt(i));
		
	}
	
	// Ýnterbedded Loop
	
	int i,j;
	
	for(i=1;i<010;i++){
		for(j=1;j<=10;j++){
			printf("%d X %d = %d\t",i,j,i*j);
			
		}
		printf("\n");
	}
	
	// Star 
	
	int number,line,pillar;
	
	printf("How Many Long  Line : ");
	scanf("%d",&number);	
	
	for(line=1;line<=number;line++){
		for(pillar=1;pillar<=line;pillar++){
			printf("*");
		}
		printf("\n");
	}
	for(line=1;line<=number;line++){
		for(pillar=number-line;pillar>=0;pillar--){
			printf("*");
		}
		printf("\n");
	}
	*/
	

	
	
	
	
	
	return 0;
}
