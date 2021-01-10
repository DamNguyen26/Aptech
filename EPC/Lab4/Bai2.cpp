#include <stdio.h>
#include <string.h>

int main(){
	char str[100];
	printf("Nhap vao chuoi: ");
	scanf("%s", &str);
	int n, i;
	n = strlen(str);
	int dem = 0;
	for(i = 0; i < n; i++){
		char c = str[i];
		if(c == 'u' || c == 'e' || c == 'o' || c == 'a' || c == 'i' || c == 'U' || c == 'E' || c == 'O' || c == 'A' || c == 'I'){
			dem++;	
		}
	}
	printf("So luong nguyen am la: %d", dem);
	printf("\nSo luong phu am la: %d", n - dem);
}
