#include <stdio.h>
int main(){
	
	// Of Age Exanoke
	int birth;
	
	
	printf("Enter The Birth : ");
	scanf("%d",&birth);
	
	birth=2022-birth;
	
	if(birth>=18){
		printf("You Are Of Age Now");
	}
	else {
		printf("That's How Long Until You're A Minor : %d Years",18-birth);
	}
	
	// Point System
	int  point;
	
	printf("How Was Site With Points  : ");
	scanf("%d",&point);
	
	if(point<=101 || point<=-1){
		printf("Wrong Value Please 0-100 Enter Value");
	}
	else if(point<=100 && point>=80){
		printf("Your Site Wonderful");
	}
	else if(60<=point && point<=79){
		printf("Your SÝte Good");
	}
	else if(40<=point && point<=59){
		printf("Your Site Avarage");
	}
	else if (20<=point && point<=39){
		printf("Your Site Bad");
	}
	else{
		printf("Your Site Most Bad");
	}	
	
	// Number Of 10 Division
	int num,re,x=10;
	
	printf("Enter The Number : ");
	scanf("%d",&num);
	
	re=num %10;
	x=x-re;
	
	if(num % 10==0){
		printf("%d Ýf %d ",num,x);
	}
	else if(num%10){
		printf("%d Number %d More Add  10 Full Division",num,x);
	}
	else{
		printf("%d Number's 10 Division Remaining : %d",num,num % 10);
	}
	
	// Gender,Height,Weight [Form]
	char gen,act;
	float he,we;
	
	printf("Enter The Gender E/K : ");
	scanf("%c",&gen);
	printf("Enter The Height [Cm] : ");
	scanf("%f",&he);
	printf("Enter The Weight [Kg] : ");
	scanf("%f",&we);
	
	if((gen=='E' || gen=='e')&& he<=150 && he>=170 && we<=80 && we>=50){
		printf("Audition Passed");
	}
	
	else if((gen=='K' || gen=='k')&& he>=150 && he <=170 && we<=80 && we>=50){
		printf("Audition Passed \n");
	}
	else{
		printf("Unfortunately You Have Been Eliminated");
	} 
	
	// Wholesale
	int piece,flat;
	float price,total,discount;
	int Aprice=5;
	
	printf("How Many Piece Buy : ");
	scanf("%d",&piece);
	
	
	if(piece>0 && piece<100){
		price = 3;
	}
	else if(piece>=100 && piece<200){
		price=2.55;
	}
	else if(piece>=200 && piece<300){
		price=2.25;
	}
	else if(piece>=300 && piece<400){
		price=1.75;
	}
	else if(piece>=400 && piece<500){
		price=1.25;	
	}
	else if(piece>=500){
		price=0.75;
	}
	else{
		printf("Valid Piece");
	}
	
	total = piece * price;
	flat = total;
	discount = Aprice - price;
	discount *= piece; 
	
	printf("The Price Of The Product %.2f$ And Bought You Total Price %.2f$ Straight Account %d$ The Discount Has Been Mad %.2f$",price,total,flat,discount);
	
	// Finding A Floor  
	int num,num1;
	
	printf("Enter The Number 1 : ");
	scanf("%d",&num);
	printf("Enter The Number 2 : ");
	scanf("%d",&num1);
	
	if(num ||num1%num==0){
		printf("Are Multiples Of Each Other");
	}
	else{
		printf("Dont Multiples");
	}
	
	// Enter 3 Number Options 
	int num1,num2,num3,total,small,big;
	char proc;
	
	printf("Enter The Number 1 : ");
	scanf("%d",&num1);
	printf("Enter The Number 2 : ");
	scanf("%d",&num2);
	printf("Enter The Number 3 : ");
	scanf("%d",&num3);
	printf("Make The Procress Enter [+,*,-,/] : ");
	scanf(" %c",&proc);
	printf("Procress Make......\n");
	
	if(proc=='+'){
		total=num1+num2+num3;
		printf("Numbers Collection : %d",total);		
	}
	else if(proc=='-'){
		small=num1;
		if(num2<small){
			small=num2;
		}
		if(num3<small){
			small=num3;
		}
		big=num1;
		if(num2>big){
			big=num2;
		}
		if(num3>big){
			big=num3;
		}
		
		printf("Smalliest Other : %d",small);
		printf("\nBiggest Other : %d",big);
		total=big--small;
		printf("\nTotal : %d",total);
	}		
	
	else if(proc=='/'){
		total=num1+num2+num3;
		total=total/3;
		printf("Numbers Avarage: %d",total);
	}
	else if(proc=='*'){
		total=num1*num2*num3;
		printf("Numbers Crash: %d",total);
	}
	
	printf("\n %d %c %d %c %d = %d",num1,proc,num2,proc,num3,total);
	
	// Double Or Single
	int num;
	
	printf("Enter The Number : \a");
	scanf("%d",&num);
	
	if(num%2==0){
		printf("***   %d Double   ***",num);
	}
	else{
		printf("***   %d Single   ***",num); 
	}
		
	//Ascýý Opposite
	char character,a;
	
	printf("Enter The Character : ");
	scanf("%c",&character);
	
	printf("%c's Ascii Value %d",character,character); // biz baþta karakter olarak tanýmladýk sonradan ascýý karþýlýklarý integer oldugu için %d yazdýk ve biz tablodaki deðerini verdi
	
	if((int)character>=97 && (int)character<=122){
		printf("%c Small Word Ascii Table Opposite %d ",character,character);
	}
	else if((int)character>=65 && (int)character<=90){
		printf("%c Big Word Ascii Table Opposite %d ",character,character);
	}
	else {
		printf("Please Enter A-Z Or a-z");
	}
	return 0;
}
