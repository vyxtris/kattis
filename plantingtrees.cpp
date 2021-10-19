#include <stdio.h>

void swap(int* a, int* b){
	int t = *a;
	*a = *b;
	*b = t;
}

int partition (int arr[], int low, int high) 
{ 
    int pivot = arr[high];    // pivot 
    int i = (low - 1);  // Index of smaller element 
  
    for (int j = low; j <= high- 1; j++) 
    { 
        // If current element is smaller than the pivot 
        if (arr[j] > pivot) 
        { 
            i++;    // increment index of smaller element 
            swap(&arr[i], &arr[j]); 
        } 
    } 
    swap(&arr[i + 1], &arr[high]); 
    return (i + 1); 
} 

void quickSort(int arr[], int low, int high) 
{ 
    if (low < high) 
    { 
        /* pi is partitioning index, arr[p] is now 
           at right place */
        int pi = partition(arr, low, high); 
  
        // Separately sort elements before 
        // partition and after partition 
        quickSort(arr, low, pi - 1); 
        quickSort(arr, pi + 1, high); 
    } 
} 

int main(){
	int N; int j=0; int max = 0;
	scanf("%d", &N); getchar();
	int t[N];
	for (int i=0;i<N;i++){
		scanf("%d", &t[i]);
		getchar();
	}
	quickSort(t, 0, N-1);
	for (int i=0;i<N;i++){
		j = i + 1;
		t[i] = t[i] + j;
//		printf("%d", t[i]);
	}
	for (int i=0;i<N;i++){
		if (max < t[i]){
			max = t[i];
		}
	}
	printf("%d\n", max + 1);
	return 0;
}
