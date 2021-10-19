#include <stdio.h>

void bubble(int arr[], int n){
	int temp;
	for (int i=0;i<n;i++){
		for (int j=1;j<n;j++){
			if (arr[j] < arr[j-1]){
				temp = arr[j];
				arr[j] = arr[j-1];
				arr[j-1] = temp;	
			}
		}
	}
}

int binary(int arr[], int l, int r, int x){
	if (r >= 1 ){
		int mid = l+(r-l)/ 2;
		
		if (arr[mid] == x) return mid;
		if (arr[mid] > x) return binary(arr, l, mid , x);
		return binary(arr,mid+1, r, x);
	}
	return -1;
}

int main(){
	int n;
	while (1){
		scanf("%d", &n);
		if (n == 0){
			break;
		}
		int arr[n];
		int aaa[n];
		int aww[n];
		int t[n];
		for (int i=0;i<n;i++){
			scanf("%d", &arr[i]);
			aaa[i] = arr[i];
		}
		for (int i=0;i<n;i++){
			scanf("%d", &aww[i]);
		}
		bubble(arr, n);
		bubble(aww, n);
		for (int i=0;i<n;i++){
			t[i] = binary(arr, 0, n, aaa[i]);
		}
		for (int i=0;i<n;i++){
			printf("%d\n", aww[t[i]]);
		}
		printf("\n");
	}
	return 0;
}
