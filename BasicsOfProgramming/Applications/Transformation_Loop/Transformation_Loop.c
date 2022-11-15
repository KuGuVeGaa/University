#include <stdio.h>

int main(){
	
	// Like Artist
	/*
	int artper,peop,person,total=0,chose;
	double likeperc;
try:	printf("How Many Person Enjoy Ballot : ");
		scanf("%d",&person);
	
	for(artper=1;artper<10;artper++){
		printf("%d.Artist How Many Like People : ",artper);
		scanf("%d",&peop);
		likepers=(double)peop/(double)person; 
		total+=peop; 
		if(person==total){
			printf("Percent Use Ballot People : %0.2lf\n",likeperc); 		
			printf("Application's End...");
			break;
		}	
		else if(person<total){
			printf("Percent Isn't Calculationing Because Number Of People Entered From Surplus....If Can You Try Again ? [Press Y ] : \n");
			scanf(" %c",&chose);
			if(chose == 'Y' ||chose == 'y');{
				artper=1;
				goto try;
			}
		}
		else{
			printf("Percent Use Ballot People : %0.2lf\n",likeperc); 
		}
	}
	
	// While 
	
	int counter=0,person,peop,total=0;
	double likepercent;
	char chose;
try:	
		printf("How Many Person Enjoy Ballot : ");
		scanf("%d",&person);
	
		while(counter<=100){
			counter++;
		
			printf("%d.Artist How Many Like People : ",counter);
			scanf("%d",&peop);
			likepercent=((double)peop/(double)person);
			total+=peop;
			if(person==total){
				printf("Percent Use Ballot People : %0.2lf\n",likepercent);
				printf("Application's End...");
				break;
			}
			else if(person<total){
				printf("Percent Isn't Calculationing Because Number Of People Entered From Surplus...If Can You Try Again ? [Press Y] : \n");
				scanf(" %c",&chose);
					if(chose =='y'|| chose=='Y'){
					counter=0;
					person=0;
					peop=0;
					total=0;
					likepercent=0;
					goto try;
				}
			
			}
			else{
				printf("Percent Use Ballot People : %0.2lf\n",likepercent);
			}			
		}
		
	// Do While	
		
	int counter,people,person,total;
	double likepercent;
	char chose;	
	
try:	
		printf("How Many Person Enjoy Ballot : ");
		scanf("%d",&person);
	
		do{
			counter++;
		
		
		
			printf("%d.Artist How Many Did Like People : ",counter);
			scanf("%d",&people);
		
			likepercent=(double)people/(double)person;
			total+=people;
		
			if(person==total){
				printf("Percent Use Ballot People : %0.2lf\n",likepercent);
				printf("Application's Ending...");
				break;
			}
			else if(person<total){
				printf("Percent Isn't Calculationing Because Number Of People Entered From Surplus...If Can You Try Again ? [Press Y] : \n");
				scanf(" %c",&chose);
			
				if(chose=='y'||chose=='Y'){
					counter=0;
					person=0;
					people=0;
					total=0;
					likepercent=0;		
					goto try;
				}
			
			}
			else{
				printf("Percent Use Ballot People : %0.2lf\n",likepercent);
				
			}
		
		
		}while(counter<=100);	
*/
		
	return 0;
}
