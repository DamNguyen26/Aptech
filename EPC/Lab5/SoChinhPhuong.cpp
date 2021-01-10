#include <stdio.h>
#include <math.h>

int main(){
	int n;
	printf("Nhap so nguyen: ");
	scanf("%d", &n);
	int can = sqrt(n);
	if(can * can == n){
		printf("%d la so chinh phuong!", n);
	}else{
		printf("%d khong phai so chinh phuong!", n);
	}
}
