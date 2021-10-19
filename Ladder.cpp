#include <stdio.h>
#include <math.h>
#define PI 3.14159265

int main(){
	double a, b, c;
	scanf("%lf %lf", &a, &b);
	c = PI/180;
	b = sin(b*c);
	printf("%.0lf",ceil( a/=b));
	
	
	return 0;
}
