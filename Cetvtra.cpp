#include <stdio.h>

int main(){
	int a[4], b[4];
	int m1[1002] = {0}, m2[1002] = {0};
	for (int i=0;i<3;i++){
		scanf("%d %d", &a[i], &b[i]);
		m1[a[i]]++;
		m2[b[i]]++;
	}
	int m=0, n=0;
	while (m<1001){
		if(m1[m]==1){
			printf("%d ", m);
		}
		m++;
	}
	while (n<1001){
		if(m2[n]==1){
			printf("%d\n", n);
		}
		n++;
	}
//	printf("%d %d\n", );
	return 0;
}
