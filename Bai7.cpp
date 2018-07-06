#include <stdio.h>
int ucln(int a, int b)
        {            
                       
            if (a==0 ||b==0)
                return a+b;
            while (a!=b)
            {
                if(a>b)
                    a=a-b;
                else
                    b=b-a;
            }
            return a;
        }
int main() {
	int a,b;
	printf("Nhap 2 so a va b ");
	scanf("%i %i", &a, &b);
	
	printf("Uoc chung lon nhat cua 2 so la %i \n", ucln(a , b) );
	printf("Boi chung no nhat cua 2 so la %i", (a*b) / ucln(a , b));
	return 0;
	
}

