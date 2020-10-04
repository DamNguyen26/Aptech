#include <stdio.h>

int main(){
	int num, r;
	scanf("%d", &num);
	r = num % 2;
	if(r == 0)
	{
		if(num < 100){
			printf("Number is Even < 100");
		} else {
			printf("Number is Even >= 100");
		}
	}
}