#include <stdio.h>
#include <math.h>

int main(){
	while (1){
		double D, v;
		scanf("%lf %lf", &D, &v);
		if (D == 0) break;
		double d3 = D*D*D - 6*v/M_PI;
		double res = (pow(d3, 1/3.0));
		printf("%.6lf\n", res);
	}
	return 0;
}
