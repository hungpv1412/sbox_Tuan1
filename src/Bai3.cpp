#include <stdio.h>
#include <conio.h>
int main() {
	float way;
	float money;
	printf(" nhap so m da di "); 
	scanf("%f", &way);
	if (way<1000) money = 10000;
	else if (way < 30000) money = 10000+ (way - 1000)*7.5;
			else money = 10000 + 7500*29 + 8* (way-30000);
	printf ( " so tien la %0.1f " , money );
	return 0;
}
