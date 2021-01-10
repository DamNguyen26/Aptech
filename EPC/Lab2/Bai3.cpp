#include <stdio.h>

int main(){
	float a, b, hieu;
	printf("Nhap vao so thu nhat: ");
	scanf("%f", &a);	
	printf("Nhap vao so thu hai: ");
	scanf("%f", &b);
	hieu = a > b ? a - b : b - a;
	if(hieu == a || hieu == b){
		printf("Difference is equal to value %f", hieu);
	}else{
		printf("Difference is not equal to any of the values entered");
	}
}
