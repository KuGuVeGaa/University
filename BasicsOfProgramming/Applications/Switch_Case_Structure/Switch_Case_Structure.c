#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
int main()
{
	// Ýnteger
	int choise;
	
	printf("Please Making Choise");
	printf("\n********************************");
	printf("\n1-)Autumn\n2-)Winter\n3-)Spring\n4-)Summer");
	printf("\n********************************\n");
	scanf("%d",&choise);
	
	switch(choise){
		case 1:
			printf("Weather Wonderful"); 
			break;
		case 2:
			printf("Weather Snowly"); 
			break;
		case 3:
			printf("Weather Rainly"); 
			break;
		case 4:
			printf("Weather Hot");
			break;
		default:
			printf("Please Making Choise 1-4 Number Between");
			break;	
	}
	
	// Char
	char character;
	
	printf("Please Answer The Question");
	printf("\n********************************\n");
	printf("1-) What The Capýtal Of Turkey ?\nA-)Trabzon\nB-)Istanbul\nC-)Ankara\nD-)Bursa");
	printf("\n********************************\n");
	scanf("%c",&character);
	
	switch(character){
		case'a':
			printf("False Answer"); 
			break;
		case'b':
			printf("False Answer"); 
			break;
		case'c':
			printf("True Answer\a"); 
			break;
		case'd':
			printf("False Answer"); 
			break;
		defaul: 
			printf("Please Enter The Choise"); 
			break;	
	}
	
	//Which Month
	int month;
	
	printf("Learn's Month In Number : ");
	scanf("%d",&month);
	
	switch(month){
		case 1:
			printf("%d. Number Month : January",month);
			break;
		case 2:
			printf("%d. Number Month : February",month);
			break;
		case 3:
			printf("%d. Number Month : March",month);
			break;
		case 4:
			printf("%d. Number Month : April",month);
			break;
		case 5:
			printf("%d. Number Month : May",month);
			break;
		case 6:
			printf("%d. Number Month : June",month);
			break;
		case 7:
			printf("%d. Number Month : July",month);
			break;
		case 8:
			printf("%d. Number Month : August",month);
			break;
		case 9:
			printf("%d. Number Month : September",month);
			break;
		case 10:
			printf("%d. Number Month : October",month);
			break;
		case 11:
			printf("%d. Number Month : November",month);
			break;
		case 12:
			printf("%d. Number Month : December",month);
			break;												
		default:
			printf("Please Valid Month Number");
			break;
	}
	if(month==1 || month==2 || month==12){
		printf("\tWinter Now");
	}
	else if(month==3 || month==4 || month==5){
		printf("\tSpring Now");
	}
	else if(month==6 || month==7 || month==8){
		printf("\tSummer Now");
	}
	else if(month==9 || month==10 || month==11){
		printf("\tAutumn Now");
	}
			
	// Calculator
	
	int choise,num1,num2,total,small,big;
	float sq,numb1,numb2;
	
menu:	printf("Select The Action You Want To Do");
		printf("\n************************\n");
		printf("1-)Collection\n2-)Issue\n3-)Crash\n4-)Division\n5-)Square Root\n6-)Exponention\n");
		printf("To Go Out Press 7");
		printf("\n************************\n");
		scanf("%d",&choise);
	if(choise == 7	){
		goto out;
	}	
	
	switch(choise){
		case 1:
			printf("Your Transaction Is In Progress...");
			printf("\nEnter The In Order Numbers  : \n");
			scanf("%d%d",&num1,&num2);
			total=num1+num2;
			printf("%d + %d = %d \n",num1,num2,total);
			break;
		case 2:
			printf("Your Transaction Is In Progress...");
			printf("\nEnter The In Order Numbers  : \n");
			scanf("%d%d",&num1,&num2);
			small=num1;
			if(num2<small){
				small=num2;
			}
			big=num1;
			if(num2>big){
				big=num2;
			}
			total=big-small;
			printf("%d - %d = %d \n",big,small,total);
			break;	
		case 3:
			printf("Your Transaction Is In Progress...");
			printf("\nEnter The In Order Numbers  : \n");
			scanf("%d%d",&num1,&num2);
			total=num1*num2;
			printf("%d * %d = %d \n",num1,num2,total);
			break;
		case 4:
			printf("Your Transaction Is In Progress...");
			printf("\nEnter The In Order Numbers  : \n");
			scanf("%d%d",&num1,&num2);
			small=num1;
			if(num2<small){
				small=num2;
			}
			big=num1;
			if(num2>big){
				big=num2;
			}
			total=big/small;
			printf("%d / %d = %d\n",big,small,total);
			break;
		case 5:
			printf("Your Transaction Is In Progress...");
			printf("\nEnter The In Order Numbers  : \n");
			scanf("%f%f",&numb1,&numb2);
			printf("%f = %f , %f = %f\n",numb1,sqrt(numb1),numb2,sqrt(numb2));
			break;
		case 6:
			printf("Your Transaction Is In Progress...");
			printf("\nEnter The In Order Numbers  : \n");
			scanf("%d%d",&num1,&num2);
			total=pow(num1,num2);
			printf("%d Above %d = %d\n",num1,num2,total);
			break;
		
		default:
			printf("Please 1-6 Making Choise...\n");
			break;
	}
	goto menu;
	out:
		printf("Calculator's Exit ...");
		return 0;

	//	Restaurant Example
	int order;
	float total,portions;
	printf("*************************************************************\n");
	printf("\t   MENU\t\t  ORDER\t\tPRICE\n");
	printf("\tBeginnings\t    1\t\t5.5 TL\n");
	printf("\tIntermediates\t    2\t\t7.5 TL\n");
	printf("\tSalads\t\t    3\t\t12 TL\n");
	printf("\tMain Courses\t    4\t\t17.75 TL\n");
	printf("\tMelliFluents\t    5\t\t11.25 TL\n");
	printf("\tDrinks\t\t    6\t\t2.25 TL\n");
	printf("*************************************************************\n");
	printf("To Finish The Order Press 7\n");
	if(order<0 || (float)order>0){
		printf("False Valuý");
		goto menu;
	}
	
menu:	printf("Please Enter The Order Code You Want To Eat \n");
		scanf("%d",&order);
	
	// Çýkmak Ýçin
	if(order==7){
		goto out;
	}
	// Float Deðer Girip Error Vermesin Diye
	if(order>0 && order<7){
		printf("How Many Portions Would You Like ?\n");
		scanf("%f",&portions);
		if(portions<0){
			printf("False Porions And Signing Out Of The System\n");
			goto menu;
		}
	}
		
	
	switch(order){
		case 1:
			total+=portions*5.5;
			printf("Total Order : %.2f\n",total);
			break;
		case 2:
			total+=portions*7.5;
			printf("Total Order : %.2f\n",total);
			break;
		case 3:
			total+=portions*12;
			printf("Total Order : %.2f\n",total);
			break;
		case 4:
			total+=portions*17.75;
			printf("Total Order : %.2f\n",total);
			break;
		case 5:
			total+=portions*11.25;
			printf("Total Order : %.2f\n",total);	
			break;
		case 6:
			total+=portions*2.25;
			printf("Total Order : %.2f\n",total);
			break;			
		default:
			printf("Please 1-6 Making Choise...\n"); 
			break;
	}
		
	goto menu;
		
	out:
		printf("Thank You For Choosing Us, We Look Forward To Seeing You Again... \n");
		printf("Total Order : %.2f ",total);
	return 0;
}
