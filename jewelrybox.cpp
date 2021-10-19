#include <stdio.h>
#include <math.h>

int main(){
	int tc;
	scanf("%d", &tc);
	for (int i=0;i<tc;i++){
		float X, Y;
		scanf("%f %f", &X, &Y);
		float a, b, b1, b2, c, D;
		float x1, x2;
		// V = (X-2x) *(Y-2x)* x
		// V = ax^3 + bx^2 + cx
		// V = XYx - 2Xxx - 2Yxx + 4x^3
		// V' = 12x^2 - 4Xx - 4Yx + XY
		a = 3 * 4; // -2x * -2x * x
		b1 = 4 * X; // -2x * X * x
		b2 = 4 * Y; // -2x * Y * x
		b = b1 + b2;
		b *= -1;
		c = X * Y;
		int big = (a>b) ? a : ((b>c) ? b : c);
		
		while (1){
			if ((int)a%big == 0 && (int)b%big == 0 && (int)c%big == 0){
				break;
			}
			big--;
		}
		a /= big;
		b /= big;
		c /= big;
		D = b*b - 4 * a * c;
//		printf("%f\n%f\n%f\n%f\n%f", a, b, c, D, sqrt(D));
//		puts("=========");
		x1 = ((b*-1) + (sqrt(D)))/ (2 * a);
		x2 = ((b*-1) - (sqrt(D)))/ (2 * a);
//		printf("%f %f\n", x1, x2);
		float V1, V2;
		V1 = (X - 2 * x1) * (Y - 2 * x1) * x1;
		V2 = (X - 2 * x2) * (Y - 2 * x2) * x2;
//		printf("%f\n%f", V1, V2);
		printf("%f\n", (V1> V2) ? V1 : V2);
	}
	return 0;
}
