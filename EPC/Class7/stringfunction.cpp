#include <stdio.h>

int do_dai(char str[100]){
	int dem = 0;
	while(str[dem] != '\0'){
		dem++;
	}
	return dem;
}

int main(){
	char str[100];
	printf("Nhap chuoi: ");
	gets(str);
	printf("Chuoi vua nhap la: %s", str);
	printf("\nDo dai chuoi vua nhap la: %d", do_dai(str));
}
