#include <stdio.h>
int main(){
	
	int number,digit1,digit2,digit3,digit4,digit5,digit6,digit7,digit8,digit9,digit10,digit11;
	
	printf("Enter The Nunber : ");
	scanf("%d",&number);
	
	digit1=number%10;
	digit2=((number%100)-(digit1))/10;
	digit3=((number%1000)-digit1-digit2)/100;
	digit4=((number%10000)-digit1-digit2-digit3)/1000;
	digit5=((number%100000)-digit1-digit2-digit3-digit4)/10000;
	digit6=((number%1000000)-digit1-digit2-digit3-digit4-digit5)/100000;
	digit7=((number%10000000)-digit1-digit2-digit3-digit4-digit5-digit6)/1000000;
	digit8=((number%100000000)-digit1-digit2-digit3-digit4-digit5-digit6-digit7)/10000000;
	digit9=((number%1000000000)-digit1-digit2-digit3-digit4-digit5-digit6-digit7-digit8)/100000000;
	digit10=((number%10000000000)-digit1-digit2-digit3-digit4-digit5-digit6-digit7-digit8-digit9)/1000000000;
	digit11=((number%100000000000)-digit1-digit2-digit3-digit4-digit5-digit6-digit7-digit8-digit9-digit10)/10000000000;
	
	printf("****************************************\n\n");
	printf("Number's Ones Digit : %d \n",digit1);
	printf("Number's They Digit : %d \n",digit2);
	printf("Number's Hundred Digit : %d \n",digit3);
	printf("Number's Thousand Digit : %d \n",digit4);
	printf("Number's Ten Thousand Digit : % d \n",digit5);
	printf("Number's Hundred Thousand Digit : % d \n",digit6);
	printf("Number's Milion  Digit : % d \n",digit7);
	printf("Number's Ten Milion  Digit : % d \n",digit8);
	printf("Number's Hundred Milion Digit : % d \n",digit9);
	printf("Number's  Bilion Digit : % d \n",digit10); // it's going crazy from here on
	printf("Number's  Ten Blilion Digit : % d \n\n",digit11);
	printf("****************************************");
	
	
	return 0;
}
