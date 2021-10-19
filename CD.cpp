#include <stdio.h>

long long int binarySearch(long long int arr[], long long int left, long long int right, long long int x){
	if (right >= left){
		long long int mid = left + (right - left) / 2;
		if (arr[mid] == x){
			return mid;
		}
		if (arr[mid] > x)
			return binarySearch(arr, left, mid-1, x);
	
		return binarySearch(arr, mid+1, right, x);
	}
	return -1;
}

int main(){
	long long int N, M;
	while (1){
		scanf("%lld %lld", &N, &M);
		if(N+M == 0){
			break;
		}
		long long int ke1[N], ke2[M], flag = 0, temp = 0;
		for (int i=0;i<N;i++){
			scanf("%lld", &ke1[i]);
		}
		for (int j=0;j<N;j++){
			scanf("%lld", &ke2[j]);
			temp = binarySearch(ke1, 0, N-1, ke2[j]);
			if(temp>=0){
				flag++;
			}
		}
		printf("%lld\n", flag);
	}
	return 0;
}
