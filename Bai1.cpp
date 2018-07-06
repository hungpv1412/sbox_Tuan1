#include <stdio.h>
int main() {	
	int a;
	int i[3];
	printf("Nhap so A : ");
	scanf("%i", &a);
	int k;
	for(int j=0;j<3;j++) { 
		i[j]=a%10;
		a=a/10;
		}
	for(int j=0;j<2;j++) {
	int t;
	if (i[j]>i[j+1]) { 
	t=i[j];
	i[j]=i[j+1];
	i[j+1]=t;
		}
}	
	for(int j=2;j>=0;j--) {
		printf("%i", i[j]);
		}
return 0;

}

	
