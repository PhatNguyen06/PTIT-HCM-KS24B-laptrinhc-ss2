#include<stdio.h>
#include<math.h>

int main()
{
	float pi = 3.14;
	float ban_kinh;
	printf("Nhap vao ban kinh: ");
	scanf("%f", &ban_kinh);
	
	float dien_tich = pow(ban_kinh, 2) * pi;
	printf("dien tich hinh tron = %.1f", dien_tich);
	printf("\n");
	float chu_vi = 2 * ban_kinh * pi;
	printf("Chu vi hinh tron = %.1f", chu_vi);
	
	return 0;
}
