#include <stdio.h>

int main(){
	int n, i;
	printf("Nhap so luong phan tu mang: ");
	scanf("%d", &n);
	int mang[n];
	for(i = 0; i < n; i++){
		printf("Nhap phan tu thu %d: ", i + 1);
		scanf("%d", &mang[i]);
	}
	
	for(i = 0; i < n; i++){
		printf("%d ", mang[i]);
	}
	printf("\n");
	for(i = n - 1; i >= 0; i--){
		printf("%d\n", mang[i]);
	}
	
}
