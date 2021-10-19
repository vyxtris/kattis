#include <stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	double v[n], t[n];
	for (int i=0;i<n;i++){
		scanf("%lf %lf", &v[i], &t[i]);
	}
	double sum = 0, a, b;
	for (int j=0;j<n-1;j++){
		a = v[j+1] - v[j];
		b = (t[j+1] + t[j]) / 2;
		sum += (a * b);
 	}
 	printf("%.6lf", sum/1000);
	
	return 0;
}
