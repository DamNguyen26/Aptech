#include <stdio.h>
#include <string.h>

typedef struct sv{
	char mssv[20];
	char ho_ten[100];
	int tuoi;
	float diem_toan;
	float diem_ly;
	float diem_hoa;
	float diem_tb;
} sinh_vien;

sinh_vien nhap_sv(){
	sinh_vien sv;
	printf("Nhap mssv: ");
	scanf("%s", &sv.mssv);
	printf("Nhap ten sinh vien: ");
	fflush(stdin);
	gets(sv.ho_ten);
	printf("Nhap tuoi: ");
	scanf("%d", &sv.tuoi);
	printf("Diem toan: ");
	scanf("%f", &sv.diem_toan);
	printf("Diem ly: ");
	scanf("%f", &sv.diem_ly);
	printf("Diem hoa: ");
	scanf("%f", &sv.diem_hoa);
	sv.diem_tb = (sv.diem_toan + sv.diem_ly + sv.diem_hoa) / 3;
	return sv;
}

void in_ra(sinh_vien dssv[], int n){
	int i;
	printf("\nDanh sach sinh vien la:\n");
	printf("%10s%20s%6s%4s%4s%4s%4s\n", "MSSV", "Ho Ten", "Tuoi", "T", "L", "H", "TB");
	for(i = 0; i < n; i++){
		printf("%10s%20s%6d%4.1f%4.1f%4.1f%4.1f\n", dssv[i].mssv, dssv[i].ho_ten, dssv[i].tuoi, dssv[i].diem_toan, dssv[i].diem_ly, dssv[i].diem_hoa, dssv[i].diem_tb);
	}
}

void sap_xep_sv(sinh_vien dssv[], int n){
	int i, j;
	sinh_vien tmp;
	for(i = 0; i < n - 1; i++){
		for(j = i + 1; j < n; j++){
			if(dssv[i].diem_tb < dssv[j].diem_tb){
				//Doi cho
				tmp = dssv[i];
				dssv[i] = dssv[j];
				dssv[j] = tmp;
			}
		}
	}
	puts("DSSV sap xep theo diem la:");
	in_ra(dssv, n);
}

void tim_theo_mssv(sinh_vien dssv[], int n,char mssv[]){
	int r = 1;
	for(int i = 0; i < n; i++){
		if(strcmp(dssv[i].mssv, mssv) == 0){
			r = 0;
			printf("\nSinhvien co ma %s la:\n", mssv);
			printf("%10s%20s%6s%4s%4s%4s%4s\n", "MSSV", "Ho Ten", "Tuoi", "T", "L", "H", "TB");
			printf("%10s%20s%6d%4.1f%4.1f%4.1f%4.1f\n", dssv[i].mssv, dssv[i].ho_ten, dssv[i].tuoi, dssv[i].diem_toan, dssv[i].diem_ly, dssv[i].diem_hoa, dssv[i].diem_tb);
		}
	}
	if(r == 1){
		printf("\nKhong co sinh vien co ma %s!\n", mssv);
	}
}

void phan_tich(sinh_vien dssv[], int n){
	int arr[n][2];
	int i, j;
	sinh_vien tmp;
	for(i = 0; i < n - 1; i++){
		for(j = i + 1; j < n; j++){
			if(dssv[i].tuoi > dssv[j].tuoi){
				tmp = dssv[i];
				dssv[i] = dssv[j];
				dssv[j] = tmp;
			}
		}
	}
	j = 0;
	arr[j][0] = dssv[0].tuoi;
	arr[j][1] = 1;
	for(i = 1; i < n; i++){
		if(dssv[i].tuoi == dssv[i - 1].tuoi){
			arr[j][1] += 1;				
		}else{
			j++;
			arr[j][0] = dssv[i].tuoi;
			arr[j][1] = 1;
		}
	}
	for(i = 0; i <= j; i++){
		printf("So sinh vien %d tuoi la: %d\n", arr[i][0], arr[i][1]);
	}
}

int main(){
	int n, i, j, c;
	char mssv[10];
	n = 0;
	sinh_vien dssv[100], tmp;
	while(1){
		puts("Lua chon:");
		puts("1. Them sinh vien");
		puts("2. In ra danh sach sinh vien");
		puts("3. Tim sinh vien theo ma");
		puts("4. Tim sinh vien diem cao nhat");
		puts("5. Sap xep sinh vien theo diem giam dan");
		puts("6. Tong hop sinh vien theo tuoi");
		puts("7. Thoat");
		scanf("%d", &c);
		switch(c){
			case 1:
				dssv[n] = nhap_sv();
				n++;
				break;
			case 2:
				in_ra(dssv, n);
				break;
			case 3:
				printf("MSVV: ");
				fflush(stdin);
				gets(mssv);
				tim_theo_mssv(dssv, n, mssv);
				break;
			case 4:
				break;
			case 5:
				sap_xep_sv(dssv, n);
				break;
			case 6:
				phan_tich(dssv, n);
				break;
			case 7:
				return 1;
			default:
				puts("Lua chon khong hop le");
				break;
		}
	}
}
