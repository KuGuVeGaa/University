#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
	
	setlocale(LC_ALL,"Turkish");
	/*
	// Çoklu Dizilerdeki Mantýk Matrixe Dayanýyor [Satýr] [Sutun] 
	
	int multiarrays[6][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
	int i,j;
	
	for(i=0;i<6;i++){
		for(j=0;j<4;j++){
			printf("[%d][%d] = %d\t",i,j,multiarrays[i][j]);	
		}
		printf("\n");
	}
	
	// My Example (satýr sütundan büyük olunca çalýþtýrmýyor)
	
	
	int x,y;
	int ma[x][y];	
	
	
	printf("How Many Line : ");
	scanf("%d",&x);
	printf("How Many Colums : ");
	scanf("%d",&y);
	
	for(int i=0;i<x;i++){
		for(int j=0;j<y;j++){
			printf("[%d][%d] How Many Do You Want It To Be : \t",i+1,j+1);
			scanf("%d",&ma[i][j]);
		}
		printf("\n");
	}
	
	for(int i=0;i<x;i++){
		for(int j=0;j<y;j++){
			printf("[%d][%d] = %d\t",i,j,ma[i][j]);	
		}
		printf("\n");	
	}
	
	// Cordinate
	int x,y,z;
	int multipleArrays[x][y][z];
	
	printf("Enter The X Coordinate : ");
	scanf("%d",&x);
	printf("Enter The Y Coordinate : ");
	scanf("%d",&y);
	printf("Enter The Z Coordinate : ");
	scanf("%d",&z);
	
	
	for(int i=0;i<x;i++){
		for(int j=0;j<y;j++){
			for(int k=0;k<z;k++){
				printf("[%d][%d][%d] Enter The Coordinate :\t",i,j,k);
				scanf("%d",&multipleArrays[i][j][k]);
			}
			printf("\n");
		}
		
	}
	
	for(int i=0;i<x;i++){
		for(int j=0;j<y;j++){
			for(int k=0;k<z;k++){
				printf("[%d][%d][%d] Location = %d\t",i,j,k,multipleArrays[i][j][k]);
			}
			printf("\n");
		}
		
	}
	
	// Arrays Total
	
	int array1[3][4];
	int array2[3][4];
	
	int total[3][4];
	
	for(int i=0;i<3;i++){
		for(int j=0;j<4;j++){
			printf("Array 1 [%d][%d] Enter The Personel : ",i+1,j+1);
			scanf("%d",&array1[i][j]);
			printf("\t");
			printf("Array 2 [%d][%d] Enter The Personel : ",i+1,j+1);
			scanf("%d",&array2[i][j]);
		}
	}
	
	
	
	
	printf("^^-----^^^^^^^^^^-----^^\n");
	printf("¦¦-----New Matris-----¦¦\n");
	printf("vv-----vvvvvvvvvv-----vv\n");
	for(int i=0;i<3;i++)
		for(int j=0;j<4;j++)
			total[i][j]=array1[i][j]+array2[i][j];
				
	for(int i=0;i<3;i++){
		for(int j=0;j<4;j++)
			printf("%d\t",total[i][j]);
		printf("\n");	
	}
	*/	
	// Keep A List Of Students Ýn Different Classes
	
	char ogrenci[3][12][20];
	
	for(int i=0;i<3;i++){
		for(int j=0;j<12;j++){
			printf("Enter the Name of the %dst Year %d.Student : ",i+1,j+1);
			scanf("%s",&ogrenci[i][j]);		
		}
			
	}
	
	system("cls");
	for(int i=0;i<3;i++){
		for(int j=0;j<12;j++){
			printf("%d.Class in %d.Student %d\n",i+1,j+1,ogrenci[i][j]);
		}
		printf("\n");
	}
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
