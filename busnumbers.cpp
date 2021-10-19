#include <stdio.h>

void swap(int *a, int  *b){
	int t = *a;
	*a = *b;
	*b = t;
}

void quickSort(int arr[], int low, int high){
	
	int pi;
	
	if (low < high){
		int pivot = arr[high];
		int i = low;
		
		for (int j=low;j<=high-1;j++){
			if (arr[j] < pivot){
				swap(&arr[j], &arr[i]);
				i++;
			}
		}
		swap(&arr[i], &arr[high]);		
		pi = i;
	
	quickSort(arr, low, pi-1);
	quickSort(arr, pi+1, high);
	}
}

void print(int arr[], int n){
	int low = 0, high = 0, flag = 0;
	int i = 0, curr;
	low = i;
	for (i;i<n;i++){
		if (arr[low]+high+1 == arr[i+1]){
			high++;
			flag++;
		}
		else{
			if (flag == 0){
				printf("%d ", arr[i]);
			}
			if (flag == 1){
				printf("%d %d ", arr[low], arr[low+high]);
			}
			if (flag > 1){
				printf("%d-%d ", arr[low], arr[low+high]);
			}
			flag = 0;
			low = i+1;
			high = 0;
		}
	}
}

int main(){
	int n;
	scanf("%d", &n);
	int arr[n];
	for (int i=0;i<n;i++){
		scanf("%d", &arr[i]);
	}
	quickSort(arr, 0, n-1);
	print(arr, n);
	return 0;
}
