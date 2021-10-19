#include <stdio.h>
#include <math.h>
int main(){
	double x, sum, div;
	scanf("%lf", &x);
	div = x / 4854;
	sum = div * 5280000;
	printf("%.lf", sum);
	return 0;
}
