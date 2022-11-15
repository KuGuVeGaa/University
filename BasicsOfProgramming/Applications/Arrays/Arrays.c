#include <stdio.h>
#include <stdlib.h>
int main(){
	
	// İnteger Arrays
	/*
	int i,ii,numbers[]={1,3,5,7,9,8,5,2};
	
	for(i=0;i<8;i++){
		printf("Array's %d.Entry Value : %d\n",i+1,numbers[i]);
	}
	
	
	int number[10]={};
	
	for(i=0;i<10;i++){
		printf("Can You Enter Any Number : ");1/
		scanf("%d",&number[i]);
		for(ii=0;ii<=i;ii++){
		printf("Array's %d.Entry Value : %d\n",ii+1,number[i]);
	}
		
	}
	
	// Char Arrays
	
	int i;
	char name[9]="KuGuVeGa";	
	char names[9]={'K','U','G','U','V','E','G','A','\0'};
	
	
	for(i=0;i<8;i++){
		printf("%d.Entry Value's = '%c'\n",i,name[i]);
	}
	printf("%s\n",name);
	printf("**********************\n");
	for(i=0;i<8;i++){ // if i < 9 We Do İf Entered Block
		printf("%d.Entry Value's = '%c'\n",i,names[i]);
		if(names[i]=='\0'){
			printf("Finished Array...");
		}
	}
	printf("%s\n*********************\n",names);

	char country[8];
	for(i=0;i<7;i++){
		printf("Please Enter The Char : ");
		scanf(" %c",&country[i]);
		printf("Country %d.Entry Value = '%c'\n",i,country[i]);
	}
	printf("%s",country);
	
	// 10 Open Door
	
	int open[10]={0};
	int lap,door;
	
	for(lap=0;lap<10;lap++){
		for(door=lap;door<10;door=door+lap+1){
			open[door]=!open[door];
			printf("Open's Door : %d\n",door+1);
			
		}
		printf("******************\n");
	}
	
	for(door=0;door<10;door++){
		if(open[door]==1){
			printf("Opened Door : %d\n",door+1);
		}
	}
	
	// Computational Loto
	
	int loto[49]={0};
	int randomNumber,i;
	srand(time(NULL));
	
	for(i=0;i<49;i++){
		randomNumber = 1 +  rand() % 49;
		while(loto[randomNumber-1]==1){
			randomNumber = 1 + rand() % 49;
			printf("The Same Number : %d\n",randomNumber);
		}
		loto[randomNumber-1] = 1;
		printf("%d\n",randomNumber);
	}
	
	// Password Correct
	
	char password[80];
	char passwordCorrect[80];
	int i,wrong;
	
	while(1){
		wrong=0;
		i=0;
		
		printf("Enter The Password : ");
		scanf("%s",&password);
		printf("Enter The Correct Password : ");
		scanf("%s",&passwordCorrect);
		
		while(!(password[i]=='\0' && passwordCorrect[i]=='\0')){
			if(password[i]=!passwordCorrect[i]){
				printf("Password Don't Coupling Please Try Again...\n");
				wrong=1;	
				break;
			}
			
			else{
				i++;
			}
		}
		
		if(wrong==0){
			printf("Coupling Succesful Application's Exit...\n");
			break;
		}
	}
	*/
	// Enter The Number's Total And Avarage
	
	int numbermens,i;
	float number[100],total,avarage;
	
	printf("Enter The Number Mensturation : ");
	scanf("%d",&numbermens);
	
	while(numbermens>=100 || numbermens<=0){
		printf("Please Enter The Correct Value...");
		printf("Enter The Number Mensturation : ");
		scanf("%d",&numbermens);
	}
	for(i=0;i<numbermens;i++){
		printf("Enter The %d.Number : ",i+1);
		scanf("%f",&number[i]);
		total+=number[i];
		avarage=total / numbermens;
	}
	printf("  Total : %.2lf\n",total);
	printf("Avarage : %.2lf",avarage);
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
