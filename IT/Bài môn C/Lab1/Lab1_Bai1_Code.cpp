#include <stdio.h>

int main(){
	//int float char
	// %d   %f   %c
	float DO_C;
	float DO_F;
	printf("Nhap vao do C: ");
	scanf("%f", &DO_C);
	DO_F = DO_C*9/5 + 32;
	printf("Do F la: %f", DO_F);
}