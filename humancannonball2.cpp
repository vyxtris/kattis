#include <stdio.h>
#include <math.h>

#define PI 3.14159
#define g 9.81
int main(){
	int N;
	scanf("%d", &N);
		for (int i=0;i<N;i++){
			float v0;
			float teta;
			float x;
			float h1;
			float h2;
			float val = PI /180;
			float t;
			float y;
			float m,n;
			scanf("%f %f %f %f %f", &v0, &teta, &x, &h1, &h2);
			t = 1/(v0 * cos(teta * val)/x);
			m = (v0 * t * sin(teta * val));
			n = ((0.5)*g*t*t);
			y = m - n;
			if (y-1 >= h1 && y+1 <= h2){
				printf("Safe\n");
			}
			else{
				printf("Not Safe\n");
			}
		}
		
	return 0;	
}
