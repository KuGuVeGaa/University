#include <stdio.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL,"Turkish");
	
	float number,number2,number3,number4;
	int number5;
	 
	printf("Enter THe Float Value : \t");
	scanf("%f",&number);
	printf("Enter THe Float Value : \t");
	scanf("%f",&number2);
	printf("Enter THe Float Value : \t");
	scanf("%f",&number3);
	printf("Enter THe Float Value : \t");
	scanf("%f",&number4);
	printf("Enter THe Ýnteger Value : \t");
	scanf("%d",&number5);
	
	// 	Ýncrease Operetion
	number ++;
	++number;
	number = number + 1;
	number += 1;
	
	//	 Raise Operetion
	number2 --;
	--number;
	number2 = number2 - 1;
	number2 -=1;
	
	// Plunk Operetion
	number3 = number3 * 5;
	number3 *=5;
	
	// Section Operetion
	number4 = number4 / 2 ;
	number4 /=2;
	
	// Modes Receving Operetion
	number5 = number5 % 2;
	number5 %=2;
	
	printf("************************************** \n");
	printf("The Final Version Your Value : %.2f \n",number);
	printf("The Final Version Your Value : %.2f \n",number2);
	printf("The Final Version Your Value : %.2f \n",number3);
	printf("The Final Version Your Value : %.2f \n",number4);
	printf("The Final Version Your Value : %d \n",number5);
	printf("************************************** \n");
	return 0;
}
