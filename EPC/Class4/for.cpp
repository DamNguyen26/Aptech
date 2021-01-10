#include <stdio.h>

int main(){
	int cnt;
	int tong;
	for(cnt = 1, tong = 0; cnt < 11; cnt++){
		tong += cnt;
	}
	printf("Tong: %d", tong);
}

