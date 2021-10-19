#include <stdio.h>

void bubble(int arr[]){
	int t;
	for (int i=0;i<3;i++){
		for (int j=0;j<3-i;j++){
			if (arr[j] > arr[j+1]){
				t = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = t;
			}
		}
	}
}

int main(){
	int a[4];
	int temp;
	scanf("%d %d %d %d", &a[0], &a[1], &a[2], &a[3]);
	bubble(a);
	printf("%d", a[0] * a[2]);
	return 0;
}

