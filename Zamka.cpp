#include <stdio.h>

int main(){
	int L, D, X;
	scanf("%d", &L);
	scanf("%d", &D);
	scanf("%d", &X);
	int min[6], max[6];
	int N = 0, M = 0;
	int a=0, b =0;
	int flag = 0;
	int temp;
	for (int i=L;i<=D;i++){
		temp = i;
		N = 0;
		b = 0;
		a = 0;
			while (temp>0){
				min[a] = temp%10;
				temp/=10;
				a++;
			}
			while (b<a){
				N += min[b];
				b++;
			}
			if (N == X){
				N = i;
				break;
			}
	}
	flag = 0;
	for (int j=D;j>=L;j--){
		temp = j;
		M = 0;
		b = 0;
		a = 0;
			while (temp>0){
				max[a] = temp%10;
				temp /= 10;
				a++;
			}
			while (b<a){
				M += max[b];
				b++;
			}
			if (M == X){
				M = j;
				break;
			}
	}
	printf("%d\n%d",N, M);
	return 0;
}
