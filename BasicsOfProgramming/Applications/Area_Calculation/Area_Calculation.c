#include <stdio.h>
#define pi 3.14
int main(){
	
	// Circle Calculator
	float circle,env;
	
	printf("Enter The Circle's r : \t");
	scanf("%f",&circle);
	
	env=circle;
	circle *=circle;
	circle*=pi;
	env *=pi*2;
	
	printf("*****************************\n\n");
	printf("Circle's Area : %.2f \n\n",circle);
	printf("Circle's Envioramental : %.2f \n\n",env);
	printf("*****************************\n\n");
	
	// Cube Calculator 
	float edge,envir,vol;
		
	printf("Enter The Cube's Edge Lenght : \t");
	scanf("%f",&edge);
	
	vol=edge;
	envir = edge;
	edge *= edge * 6;
	envir = edge * 12;
	vol*=vol*vol;
	
	printf("******************************\n\n");
	printf("Cube's Area : %.2f \n\n",edge);
	printf("Cube's Enviromental : %.2f \n\n",envir);
	printf("Cube's Volume : %.3f \n\n",vol);
	printf("******************************\n\n");
	return 0;
}
