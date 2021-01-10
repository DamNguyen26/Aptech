#include <stdio.h>

int main(){
	float sal;
	char grade;
	float total;
	printf("Salary: ");
	scanf("%f", &sal);
	fflush(stdin);
	printf("Grade: ");
	scanf("%c", &grade);
	if(grade == 'A'){
		total = sal + 300;
	}else if(grade == 'B'){
		total = sal + 250;
	}else{
		total = sal + 100;
	}
	printf("Calculate the salary at the end of the month: %0.2f", total);
	getchar();
	getchar();
}
