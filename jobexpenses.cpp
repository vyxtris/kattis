#include <stdio.h>

int main(){
	long int n;
	scanf("%ld", &n);
	long int k[n], res = 0, sum = 0;
	for (long int i=0;i<n;i++){
		scanf("%ld", &k[i]);
		if (k[i] < 0){
			res += k[i];
		}
		else{
			sum += k[i];
		}
	}
	res *= -1;
	printf("%d", res);
//	(res < sum) ? printf("%ld", res) : printf("%ld", sum);

	return 0;
}
