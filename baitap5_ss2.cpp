#include<stdio.h>

int main()
{
	int chieu_dai;
	printf("Nhap chieu dai: ");
	scanf("%d", &chieu_dai);
	int chieu_rong;
	printf("Nhap chieu rong: ");
	scanf("%d", &chieu_rong);
	
	int dien_tich_hcn = chieu_dai * chieu_rong;
	printf("Dien tich hinh chu nhat = %d", dien_tich_hcn);
	printf("\n");
	int chu_vi_hcn = (chieu_dai + chieu_rong) * 2;
	printf("Chu vi hinh chu nhat = %d", chu_vi_hcn);
	
	return 0;
}
