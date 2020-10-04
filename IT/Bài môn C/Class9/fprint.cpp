#include <stdio.h>

int main(){
	FILE* fp = fopen("data.txt", "w");
	fprintf(fp, "Hello World %d", 10);
	
	
	fclose(fp);
}
