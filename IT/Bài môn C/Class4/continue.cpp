#include <stdio.h>

int main(){
	int cnt;
	int tong;
	for(cnt = 1, tong = 0; cnt < 11; cnt++){
		if(cnt % 2 == 0){
			continue;
		}
		tong += cnt;
	}
	printf("Tong: %d", tong);
}
