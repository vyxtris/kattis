#include <stdio.h>

int main(){
	int a, b, c = 0, d=0;
	int x, y ,z;
	int m, n, o;
	scanf("%d %d", &a, &b);
		x = b / 100;
		y = (b / 10) - (x * 10);
		z = b % (((x*10)+y)*10);
		m = a / 100;
		n = (a / 10) - (m * 10);
		o = a % (((m*10)+n)*10);
c = (z*100) + (y*10) + x;
d = (o*100) + (n*10) + m;
(c>d) ? printf("%d", c) : printf("%d", d);
return 0;
}
