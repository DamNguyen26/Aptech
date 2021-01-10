#include <stdio.h>
#include <string.h>

int main(){
	char str[100];
	printf("Nhap chuoi: ");
	gets(str);
	printf("Chuoi vua nhap la: %s", str);
	char* p = strchr(str, 'W');
	//strstr, strrstr
	printf("\nChuoi tim duoc la: %s", p);
	printf("\nVi tri cua ky tu 'W' la: %d", p - str);
}
