#include <stdio.h>
int main(){
	float a,b,c,x;	
	
	printf("Enter The A,B,C,X Respectively...\n");	
	scanf("%f%f%f%f",&a,&b,&c,&x);
	
	a=(a*x*x)+(b*x)+c;
	
	printf("Equation's Result : %f",a);
	
	//printf("Equation's Result : %d",(int)a);  // Type Casting :  %f ==> %d and a ==> (int)a   Crush Ranking : Ýnt ==> Float ==> Double (most junk "int")
	// Example
	
	int s=30;
	float z=30;
	double v=30;
	
	printf("%d\n",s/z); //  z - s'yi ezdiði için %d (yani) int sonucu bize göstermiyor
	printf("%f\n",s/z); // ama burda gösteriyor aynýsýný double da da denersek
	printf("%f\n",v/s); // bu seferde double da floatý ezdiði için göstermiyor  yukarýda sýralamasý verilmiþtir(Double %f þeklinde kullanabildiðimiz için yinede oluyor)
	
	
	return 0;
}
