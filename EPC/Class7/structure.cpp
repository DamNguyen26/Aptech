#include <stdio.h>

struct diachi{
	char dia_chi[100];
	char tinh[50];
};

struct sinh_vien{
	char ho_ten[100];
	int tuoi;
	float diem;
	struct diachi dia_chi;
};

void in_sinh_vien(struct sinh_vien sv){
	printf("Ho ten: %s\n", sv.ho_ten);
	printf("Tuoi: %d\n", sv.tuoi);
	printf("Diem: %f", sv.diem);
}

int main(){
	int a = 10;
	struct sinh_vien sv;
	printf("Nhap ten sinh vien: ");
	gets(sv.ho_ten);
	printf("Nhap tuoi: ");
	scanf("%d", &sv.tuoi);
	printf("Nhap diem: ");
	scanf("%f", &sv.diem);
	
	in_sinh_vien(sv);
}
