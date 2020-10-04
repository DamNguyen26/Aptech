#include <stdio.h>
#include <string.h>

int main(){
	int n, i, j;
	printf("Nhap so luong phan tu: ");
	scanf("%d", &n);
	char name[n][100];
	for(i = 0; i < n; i++){
		printf("Nhap vao ten thu %d: ", i + 1);
		scanf("%s", &name[i]);
	}
	
	for(i = 0; i < n - 1; i++){
		for(j = i; j < n; j++){
			if(strcmp(name[i], name[j]) > 0){
				char tmp[100];
				strcpy(tmp, name[i]); //tmp = name[i];
				strcpy(name[i], name[j]); //name[i] = name[j];
				strcpy(name[j], tmp); //name[j] = tmp;
			}
		}
	}
	
	printf("Mang sau khi sap xep la:\n");
	for(i = 0; i < n; i++){
		printf("%s\n", name[i]);
	}
}
