#include <stdio.h>
#include <math.h>

int main(){
	double r, c, res = 0;
	scanf("%lf %lf", &r, &c);
	if (r != c){
		res = pow(r-c, 2) / (r*r);
	}
	printf("%.6lf", res * 100);
	return 0;
}
