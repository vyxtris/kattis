#include <stdio.h>
int main(){
	int N;
	scanf("%d", &N);
	float a[N], b[N],c[N], x[N], y[N], z[N];
	for (int i=0;i<N;i++){
		scanf("%f %f", &a[i], &b[i]);
		y[i] = 60*(a[i]/b[i]);
		c[i] = (60/b[i]);
		x[i] = y[i] - c[i];
		z[i] = y[i] + c[i];
	}
	for (int i = 0; i<N;i++){
		printf("%.4f %.4f %.4f\n", x[i], y[i], z[i] );
	}
	return 0;
}
