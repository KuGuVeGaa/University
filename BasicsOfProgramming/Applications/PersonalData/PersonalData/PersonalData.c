#include <stdio.h>
#include <locale.h>
#define year 2021
int main()
{
	char name[10];
	char surname[10];
	int unino;
	char department[10];
	int db;

	printf("Enter The Name : ");
	scanf("%s",&name);
	printf("Enter The Surname : ");
	scanf("%s",&surname);
	printf("Enter The University Number : ");
	scanf("%d", &unino);
	printf("Enter The Department : ");
	scanf("%s",&department);
	printf("Enter The Date Of Birth : ");
	scanf("%d", &db);

	int age = year-db;

	printf("Your Name : %s\n",name);
	printf("Your Surname : %s\n",surname);
	printf("Your University No : %d\n",name);
	printf("Your Departmant : %s\n", department);
	printf("Your Age : %d\n", age);
	

	return 0;
}