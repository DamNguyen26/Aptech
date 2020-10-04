#include <stdio.h>
#include <string.h>

typedef struct sv{
	char mssv[20];
	char ho_ten[100];
	int tuoi;
	int gioi_tinh;
	float diem_toan;
	float diem_ly;
	float diem_hoa;
	float diem_tb;
} sinh_vien;

int kt_mssv(sinh_vien svs[], int n, char mssv[]){
	for(int i = 0; i < n; i++){
		if(strcmp(svs[i].mssv, mssv) == 0){
			return 1;
		}
	}
	return 0;
}

int nhap(sinh_vien svs[], int n){
	fflush(stdin);
	sinh_vien sv;
	printf("MSSV: ");
	gets(sv.mssv);
	if(kt_mssv(svs, n, sv.mssv)){
		printf("MSSV %s da ton tai.", sv.mssv);
		return n;
	}
	printf("Ho Ten: ");
	gets(sv.ho_ten);
	printf("Tuoi: ");
	scanf("%d", &sv.tuoi);
	printf("Gioi tinh: ");
	scanf("%d", &sv.gioi_tinh);	
	printf("Diem toan: ");
	scanf("%f", &sv.diem_toan);
	printf("Diem ly: ");
	scanf("%f", &sv.diem_ly);	
	printf("Diem hoa: ");
	scanf("%f", &sv.diem_hoa);
	sv.diem_tb = (sv.diem_hoa + sv.diem_ly + sv.diem_toan) / 3;
	svs[n] = sv;
	return n + 1;
}

void in_ra(sinh_vien svs[], int n){
	if(n <= 0){
		printf("Khong co sinh vien nao!\n");
	}else{
		printf("Danh sach sinh vien:\n");
		printf("%10s|%20s|%5s|%10s|%5s|%5s|%5s|%5s\n", "MSSV", "Ho Ten", "Tuoi", "GT", "T", "L", "H", "TB");
		for(int i = 0; i < n; i++){
			char gioi_tinh[5];
			if(svs[i].gioi_tinh == 1) strcpy(gioi_tinh, "Nam");
			else strcpy(gioi_tinh, "Nu");
			printf("%10s|%20s|%5d|%10s|%5.1f|%5.1f|%5.1f|%5.1f\n", 
				svs[i].mssv, svs[i].ho_ten, svs[i].tuoi, gioi_tinh, svs[i].diem_toan, svs[i].diem_ly, svs[i].diem_hoa, svs[i].diem_tb);
		}
	}
}

int xoa(sinh_vien svs[], int n){
	char mssv[20];
	fflush(stdin);
	printf("Nhap MSSV can xoa: ");
	gets(mssv);
	int index = -1;
	for(int i = 0; i < n; i++){
		if(strcmp(svs[i].mssv, mssv) == 0){
			index = i;
			break;
		}
	}
	if(index == -1){
		printf("Khong co sinh vien co ma so: %s\n", mssv);
		return n;
	}else{
		if(n == 1){
			return 0;
		}
		if(index == n - 1){
			return n - 1;
		}
		for(int i = index; i < n - 1; i++){
			svs[i] = svs[i+1];
		}
		return n - 1;
	}
}

void in_theo_ten(sinh_vien svs[], int n){
	sinh_vien sv;
	for(int i = 0; i < n - 1; i++){
		for(int j = i + 1; j < n; j++){
			if(strcmp(svs[i].ho_ten, svs[j].ho_ten) > 0){
				sv = svs[i];
				svs[i] = svs[j];
				svs[j] = sv;
			}
		}
	}
	in_ra(svs, n);
}

void in_theo_diem_tb(sinh_vien svs[], int n){
	sinh_vien sv;
	for(int i = 0; i < n - 1; i++){
		for(int j = i + 1; j < n; j++){
			if(svs[i].diem_tb < svs[j].diem_tb){
				sv = svs[i];
				svs[i] = svs[j];
				svs[j] = sv;
			}
		}
	}
	in_ra(svs, n);
}

void in_n_sv(sinh_vien svs[], int n){
	int x;
	printf("Nhap n: ");
	scanf("%d", &x);
	if(x <= 0 || x > n){
		printf("N khong hop le!");
		return;
	}
	sinh_vien sv;
	for(int i = 0; i < n - 1; i++){
		for(int j = i + 1; j < n; j++){
			if(svs[i].diem_tb < svs[j].diem_tb){
				sv = svs[i];
				svs[i] = svs[j];
				svs[j] = sv;
			}
		}
	}
	in_ra(svs, x);
}

void luu_sv(sinh_vien svs[], int n){
	FILE* f = fopen("sv.dat", "wb");
	if(f == NULL){
		printf("Tao file khong thanh cong!");
		return;
	}
	fwrite(svs, sizeof(sinh_vien), n, f);
	fclose(f);
}

int main(){
	sinh_vien svs[500];
	sinh_vien sv;
	int n = 0;
	
	FILE* f = fopen("sv.dat", "rb");
	if(f != NULL){
		n = fread(svs, sizeof(sinh_vien), 500, f);
	}
	
	while(1){
		printf("\n\nChuong trinh quan ly Sinh vien.\n");	
		printf("1.Them sinh vien\n");
		printf("2.Xoa sinh vien\n");
		printf("3.In danh sach sinh vien\n");
		printf("4.In danh sach sinh vien theo ten\n");
		printf("5.In danh sach sinh vien theo diem trung binh\n");
		printf("6.In danh sach sinh n sinh vien diem cao nhat\n");
		printf("7.Luu lai\n");
		printf("8.Thoat\n");
		printf("Nhap lua chon cua ban: ");
		int lua_chon;
		scanf("%d", &lua_chon);
		switch(lua_chon){
			case 1:
				n = nhap(svs, n);	
				break;
			case 2:
				n = xoa(svs, n);
				break;
			case 3:
				in_ra(svs, n);
				break;
			case 4:
				in_theo_ten(svs, n);
				break;
			case 5:
				in_theo_diem_tb(svs, n);
				break;
			case 6:
				in_n_sv(svs, n);
				break;
			case 7:
				luu_sv(svs, n);
				break;
			case 8:
				return 1;
			default:
				printf("Lua chon khong hop le");
		}
		
	}
}


