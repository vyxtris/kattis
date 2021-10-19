#include <stdio.h>

int main(){
	int arr[4][4];
	int flag[4][4];
	int n;
	for (int i=0;i<4;i++){
		for (int j=0;j<4;j++){
			scanf("%d", &arr[i][j]);
			if (arr[i][j] != 0){
				flag[i][j] = 1;
			}
			else{
				flag[i][j] = 0;
			}
		}
	}
	for (int i=0;i<4;i++){
		for (int j=0;j<4;j++){
			printf("%d ", flag[i][j]);
		}
		printf("\n");
	}
	scanf("%d", &n);
	switch (n){
		case 0:{
			for (int i=0;i<3;i++){
				for (int j=0;j<3;j++){
					if(flag[i][j] = 1){
						for (int k=j+1;k<4;k++){
							if(flag[i][k] == 1){
								if(arr[i][j] == arr[i][k]){
									arr[i][j] += arr[i][k];
									arr[i][k] = 0;
									flag[i][k] = 0;
									break;
								}
							}
						}
					}
				}
			}
			break;
		}
		case 1:{
			
			break;
		}
		case 2:{
			
			break;
		}
		case 3:{
			
			break;
		}
	}
	for (int i=0;i<4;i++){
		for (int j=0;j<4;j++){
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}
