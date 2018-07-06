#include <stdio.h>
#include <ctype.h>
int main() {
	char a[500];
	printf(" nhap chuoi ki tu ");
	scanf("%[^\n]",&a);
	int h=0 , t=0 ;
	for(int i=0; i<500; i++){
		if (islower(a[i])) t++; else if (isupper(a[i])) h++; else break; 
	}
	printf(" so ki tu hoa %d so ki tu thuong %d ",  h , t);
    return 0;
	}
