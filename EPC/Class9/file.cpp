#include <stdio.h>

int main(){
	FILE* fp = fopen("data.dat", "r");
	//fputs("Hello World", fp);
	char str[100];
	char* p = fgets(str, 100, fp);
	puts(str);
	fclose(fp);
}
