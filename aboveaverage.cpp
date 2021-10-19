#include <stdio.h>

int main(){
	int c;
	scanf("%d", &c);
	for (int i=0;i<c;i++){
		int n;
		double key = 0, flag = 0, res = 100;
		scanf("%d", &n);
		double arr[n];
		for (int j=0;j<n;j++){
			scanf("%lf", &arr[j]);
			key += arr[j];
		}
		key /= n;
		for (int j=0;j<n;j++){
			if (arr[j] > key){
				flag++;
			}
		}
		res *= flag/n;
		printf("%.3lf%%\n", res);
	}
	return 0;
}
