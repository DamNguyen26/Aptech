#include <stdio.h>
#include <string.h>

int main(){
	char str[100];
	printf("Nhap chuoi: ");
	//scanf("%s", str);
	gets(str);
	puts("Chuoi vua nhap la: ");
	puts(str);
	//printf("Chuoi vua nhap la\n: %s", str);
}
