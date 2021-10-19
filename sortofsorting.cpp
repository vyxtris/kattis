#include <stdio.h>
#include <string.h>

void mergeSort(char arr[][25], int l, int m, int r){
	for (int i=0; i<r+1; i++){
			printf("%s\n", arr[i]);
	}
	int i, j, k;
	int n1 = m - l + 1;
	int n2 = r - m;
	
	char L[n1][25], R[n2][25];
	
	for (i=0; i<n1; i++){
		strcpy(L[i], arr[l+i]);
	}
	for (j=0; j<n2; j++){
		strcpy(R[i], arr[m + j + 1]);
	}
	
	i = 0;
	j = 0;
	k = l;
	
	while (i < n1 && j < n2){
		if (strcmp(L[i], R[j]) <= 0){
			strcpy(arr[k], L[i]);
			i++;
		}
		else{
			strcpy(arr[k], R[j]);
			j++;
		}
		k++;
	}
	
	while (i<n1){
		strcpy(arr[k], L[i]);
		i++; k++;
	}
	
	while (j<n2){
		strcpy(arr[k], R[j]);
		j++; k++;
	}
	
}

int flag = 0;

void merge(char arr[][25], int l, int r){
	if (l < r ){
		for (int i=0; i<r+1; i++){
			printf("%s\n", arr[i]);
		}
		printf("%d\n", flag++);
		int m = l + (r-l) / 2;
		
		merge(arr, l, m);
		merge(arr, m+1, r);
		
		mergeSort(arr, l, m , r);
	}
}

int main(){
	while (1){
		int N;
		scanf("%d", &N);
		if (N == 0){
			break;
		}
		char str[N][25];
		for (int i = 0; i<N; i++){
			scanf("%s", str[i]);
		}
		for (int i=0; i<N; i++){
			printf("%s\n", str[i]);
		}
		merge(str, 0, N-1);
		for (int i=0; i<N; i++){
			printf("%s\n", str[i]);
		}
		printf("\n");
	}
	return 0;
}
