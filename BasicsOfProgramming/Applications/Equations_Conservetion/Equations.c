#include <stdio.h>
int main(){
	float a,b,c,x;	
	
	printf("Enter The A,B,C,X Respectively...\n");	
	scanf("%f%f%f%f",&a,&b,&c,&x);
	
	a=(a*x*x)+(b*x)+c;
	
	printf("Equation's Result : %f",a);
	
	//printf("Equation's Result : %d",(int)a);  // Type Casting :  %f ==> %d and a ==> (int)a   Crush Ranking : �nt ==> Float ==> Double (most junk "int")
	// Example
	
	int s=30;
	float z=30;
	double v=30;
	
	printf("%d\n",s/z); //  z - s'yi ezdi�i i�in %d (yani) int sonucu bize g�stermiyor
	printf("%f\n",s/z); // ama burda g�steriyor ayn�s�n� double da da denersek
	printf("%f\n",v/s); // bu seferde double da float� ezdi�i i�in g�stermiyor  yukar�da s�ralamas� verilmi�tir(Double %f �eklinde kullanabildi�imiz i�in yinede oluyor)
	
	
	return 0;
}
