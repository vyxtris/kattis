#include <stdio.h>
int main(){
	float C, L, sum = 0;
	float a , b;
	scanf("%f", &C); getchar();
	scanf("%f", &L); getchar();
		for (int j=0;j<L;j++){
			scanf("%f %f", &a, &b); 
		sum += a*b*C;
		}
	printf("%.7f", sum);
	
	return 0;
}
