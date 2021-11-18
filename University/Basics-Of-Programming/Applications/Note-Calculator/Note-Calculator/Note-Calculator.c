#include <stdio.h>
int main() 
{
	int vis;
	int fina;
	printf("Enter The Visa : ");
	scanf("%d", &vis);
	printf("Enter The Final : ");
	scanf("%d", &fina);
	int result = (vis * 0.4) + (fina * 0.6) / 2;

	if (result >50)
	{
		printf("Great!You Have Passed This Period");
	}
	else
	{
		printf("Sorry, You have to Repeat the Lesson");
	}

	return 0;
}