#include <stdio.h>

void bubblesort(int arr[], int n){
	int t;
	for (int i=0;i<n;i++){
		for (int j=0; j<n-1;j++){
			if (arr[j+1] > arr[j]){
				t = arr[j+1];
				arr[j+1] = arr[j];
				arr[j] = t;
			}
		}
	}
}

int main(){
	int n;
	scanf("%d", &n);
	int a[n];
	for (int i=0;i<n;i++){
		scanf("%d", &a[i]);
	}
	bubblesort(a, n);
	int alice = 0, bob = 0;
	for (int i=0;i<n;i++){
//		printf("%d", a[i]);
		if (i % 2 == 0){
			alice += a[i];
		}
		else{
			bob += a[i];
		}
	}
	printf("%d %d", alice, bob);
	return 0;
}
