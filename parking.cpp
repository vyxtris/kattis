#include <stdio.h>

void swap(int *a, int *b){
	int t = *a;
	*a = *b;
	*b = t;
}

void bubble(int *arr, int n){
	for (int i=0;i<n-1;i++){
		for (int j=0;j<n-i-1;j++){
			if (arr[j] > arr[j+1]){
				swap(&arr[j], &arr[j+1]);
			}
		}
	}
}

int main(){
	int t;
	scanf("%d", &t);
	for (int i=0;i<t;i++){
		int n;
		scanf("%d", &n);
		int x[n];
		int div = 0;
		for (int j=0;j<n;j++){
			scanf("%d", &x[j]);
			div += x[j];
		}
		div /= n;
		bubble(x, n);
		int sum = 0;
		for (int j=0;j<n+1;j++){
			if (j == 0){
				sum += div - x[j];
			}
			else if (j == n){
				sum += x[j-1] - div;
			}
			else {
				sum += x[j] - x[j-1];
			}
		}
		printf("%d\n", sum);
	}
	return 0;
}
