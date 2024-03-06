#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void celFahr(int num){
	float fahr;
	
	fahr=(9.0/5.0)* num + 32;
	printf("%d Celcius is : %.2f Fahrenheit\n",num, fahr);
}

void fahrCel(int num){
	float Celsius;
	
	Celsius= (5.0/9.0) * (num-32);
	printf("%d Fahrenheit is : %.2ff Celsius\n",num, Celsius);
}

void celKel(int num){
	float kelvin;
	
	kelvin=num + 273.15;
	printf("%d Celsius is : %.2f Kelvin\n",num, kelvin);
}

void kelCel(int num){
	float celsius;
	
	celsius= num - 273.15;
	printf("%d Kelvin is : %.2f Celsius\n",num, celsius);
}

void fahrKel(int num){
	float kelvin;
	
	kelvin= (5.0/9.0) * (num - 32) + 273.15;
	printf("%d Fahrenheit is : %.2f Kelvin\n",num, kelvin);
}

void kelFahr(int num){
	float Fahr;
	
	Fahr= (59.0/5.0) * (num - 273.15) + 32;
	printf("%d Kelvint is : %.2f Fahrenheit\n",num, Fahr);
}


int main(){
	int num, option;
	
	printf("\tMARV'S TEMPERATURE CONVERTER\n");
	
	printf("1. Celsius to Fahrenheit\n");
	printf("2. Fahrenheit to Celsius\n");
	printf("3. Celsius to Kelvin\n");
	printf("4. kelvin to Celsius\n");
	printf("5. Fahrenheit to Kelvin\n");
	printf("6. Kelvin to fahrenheit\n");
	printf("7. Exit\n");
	
	while(1){
		printf("Enter your option(1-7)\n");
		scanf("%d", &option);
		
		
		
		switch(option){
			case 1:
				printf("Enter the temperature Input: ");
				scanf("%d", &num);
				
				celFahr(num);
				break;
				
			case 2:
				printf("Enter the temperature Input: ");
				scanf("%d", &num);
				
				fahrCel(num);
				break;
				
			case 3:
				printf("Enter the temperature Input: ");
				scanf("%d", &num);
				
				celKel(num);
				break;
				
			case 4:
				printf("Enter the temperature Input: ");
				scanf("%d", &num);
				
				kelCel(num);
				break;
				
			case 5:
				printf("Enter the temperature Input: ");
				scanf("%d", &num);
				
				fahrKel(num);
				break;
				
			case 6:
				printf("Enter the temperature Input: ");
				scanf("%d", &num);
				
				kelFahr(num);
				break;
				
			case 7:
				printf("Exiting the program\n");
				exit(0);
				
			default:
				printf("Invalid Choice\n");
				break;	
		}
	}
	return 0;
}



