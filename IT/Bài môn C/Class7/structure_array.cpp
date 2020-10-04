#include <stdio.h>

typedef struct sinhvien{
	char ho_ten[100];
	int tuoi;
	float diem;
} sinh_vien;

void in_sinh_vien(sinh_vien sv){
	printf("Ho ten: %s\n", sv.ho_ten);
	printf("Tuoi: %d\n", sv.tuoi);
	printf("Diem: %f\n", sv.diem);
}

int main(){
	int n, i;
	printf("Nhap so luong: ");
	scanf("%d", &n);
	sinh_vien dssv[n];
	for(i = 0; i < n; i++){
		printf("Nhap sinh vien thu %d\n", i + 1);
		printf("Nhap ten sinh vien: ");
		fflush(stdin);
		gets(dssv[i].ho_ten);
		printf("Nhap tuoi: ");
		scanf("%d", &dssv[i].tuoi);
		printf("Nhap diem: ");
		scanf("%f", &dssv[i].diem);
	}
	
	for(i = 0; i < n; i++){
		in_sinh_vien(dssv[i]);
	}
	//
}
