#include <stdio.h>

int main(){
	int n, i;
	printf("Nhap so luong phan tu: ");
	scanf("%d", &n);
	int mang[n];
	
	for(i = 0; i < n; i++){
		printf("Nhap phan tu thu %d: ", i + 1);
		scanf("%d", &mang[i]);
	}
	
	int max;
	for(i = 0; i < n; i++){
		if(mang[i] < 0){
			max = mang[i];
			break;
		}
	}
	
	for(; i < n; i++){
		if(max < mang[i] && mang[i] < 0){
			max = mang[i];
		}
	}
	
	printf("So lon nhat la: %d", max);
}
