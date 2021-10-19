#include <stdio.h>

int main(){
	int r, c;
	scanf("%d %d", &r, &c);
	int arr[r][c];
	int start = 1000005;
	for (int i=0;i<r;i++){
		for (int j=0;j<c;j++){
			scanf("%d", &arr[i][j]);
			if (j == 0){
				if (start > arr[i][j]){
					start = arr[i][j];
				}
			}
		}
	}
	return 0;
}
