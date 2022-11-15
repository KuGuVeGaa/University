#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
void teams(){
	printf("Trabzonspor\t");
	printf("Beþiktaþ\t");
	printf("Fenerbahçe\t");
	printf("Galatasaray\t\n");
}
int multipleOfnumber(int number){
	return number*2;	
}
float squareRoot(float number){
	return sqrt(number);
}
double squaring(double number){
	return number*number;
}
char firstChar(char array[]){
	return array[0];
}
void skipTheBottomLine(){
	printf("\n");
}

int main(){
	setlocale(LC_ALL,"Turkish");

	teams();
	printf("Number Of 2 Multiple : %d",multipleOfnumber(61));
	skipTheBottomLine();
	printf("Number Of Square Root : %.2lf",squareRoot(61));
	skipTheBottomLine();
	printf("Number Of Squaring : %.2lf",squaring(61));
	skipTheBottomLine();
	printf("String Of First Char : %c",firstChar("Yavuz"));
	return 0;
}
