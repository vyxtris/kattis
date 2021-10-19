#include <stdio.h>

int main(){
	int t; int a=1;
	while (scanf("%d", &t) == 1){
		long int curr;
		long int min = 1000007;
		long int max = -1000007;
		long int range = 0;
		for (int i=0;i<t;i++){
			scanf("%ld", &curr);
			if (min > curr){
				min = curr;
			}
			if (max < curr){
				max = curr;
			}
		}
		range = max - min;
		printf("Case %d: %ld %ld %ld\n", a, min, max, range);
		a++;
	}
	return 0;
}
