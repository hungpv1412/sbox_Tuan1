#include <stdio.h>
int main () {
	int i; 
	printf ("Nhap i = ");
	scanf("%i", &i);
	for( int j = 1 ; j <= i; j++ ) {
	
		for ( int k = 0; k < i - j ; k++)		printf("  ");
		for ( int k = 0; k < 2 * j - 1; k++)	printf(" *");
		printf("\n");
		}
	return 0;
	}
