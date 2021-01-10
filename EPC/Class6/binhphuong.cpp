#include <stdio.h>

int gt(int a){
	if(a == 1){
		return 1;
	}
	return gt(a - 1) * a;
}

int main(){
	
}
