#include <stdio.h>
#include <math.h>

int ktcp(int n){
	int can = sqrt(n);
	if(can * can == n){
		return 1;
	}
	return 0;
}

int main(){
	int n, i;
	printf("Nhap so luong: ");
	scanf("%d", &n);
	int mang[n];
	
	for(i = 0; i < n; i++){
		printf("Nhap vao phan tu thu %d: ", i + 1);
		scanf("%d", &mang[i]);
	}
	
	int tong = 0;
	for(i = 0; i < n; i++){
		if(ktcp(mang[i])){
			tong += mang[i];
		}
	}
	
	printf("Tong cac so chinh phuong la: %d", tong);
}
