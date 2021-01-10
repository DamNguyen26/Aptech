#include <stdio.h>

int main(){
	int c;
	int a, b;
	while(1){
		puts("Lua chon:");
		puts("1. Nhap vao 2 so");
		puts("2. Tinh tong");
		puts("3. Tinh hieu");
		puts("4. Thoat");
		scanf("%d", &c);
		switch(c){
			case 1:
				printf("Nhap so thu nhat: ");
				scanf("%d", &a);
				printf("Nhap so thu hai: ");
				scanf("%d", &b);
				break;
			case 2:
				printf("Tong 2 so la: %d\n", a + b);
				break;
			case 3:
				printf("Hieu 2 so la: %d\n", a - b);
				break;
			case 4:
				return 1;
			default:
				puts("Lua chon khong hop le!");
		}
	}
}
