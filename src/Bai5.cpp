#include <stdio.h>
int main() {
	int ngay, thang, nam;
	printf(" Nhap ngay thang nam ");
	scanf("%i %i %i", &ngay, &thang, &nam );
	if (thang>12||ngay>31) printf("Khong hop le ");
	else 
		switch (thang) {
		case 2: if ((nam%4==0)&&(ngay<30)) printf("Nam Nhuan");
				else if (ngay<29) printf("Hop le"); else printf("Khong hop le ");
					break;
		case 4 :if ((nam%4==0)&&(ngay<31)) printf("Nam Nhuan"); 
				else if (ngay<31) printf("Hop le"); else printf("Khong hop le "); 
						break;
		case 6 : if ((nam%4==0)&&(ngay<31)) printf("Nam Nhuan"); 
				else if (ngay<31) printf("Hop le"); else printf("Khong hop le "); 
						break;
		case 9 : if ((nam%4==0)&&(ngay<31)) printf("Nam Nhuan"); 
				else if (ngay<31) printf("Hop le"); else printf("Khong hop le "); 
						break;
		case 11 : if ((nam%4==0)&&(ngay<31)) printf("Nam Nhuan"); 
				else if (ngay<31) printf("Hop le"); else printf("Khong hop le "); 
						break;
		default: if ((nam%4==0)&&(ngay<=31)) printf("Nam Nhuan"); else printf("Hop le");
						break;
		}
	
	return 0;
	
}
