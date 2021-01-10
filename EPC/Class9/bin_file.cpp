#include <stdio.h>

int main(){
	FILE* fp = fopen("data.bin", "rb");
	int err = ferror(fp);
		//char arr[3] = {'A', 'B', 'C'};
		//fwrite(arr, sizeof(char), 3, fp);
	char arr[100];
	fseek(fp, 1, 0);
	int n = fread(arr, sizeof(char), 2, fp);
	for(int i = 0; i < n; i++){
		putchar(arr[i]);
	}
	//rewind(fp);
	//printf("\n%d", ftell(fp));
	fclose(fp);

}
