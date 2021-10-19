#include <stdio.h>

int main(){
	int a[3];
	int low, mid, top;
	char abc[3];
	scanf ("%d %d %d", &a[0], &a[1], &a[2]);
	for (int i = 0; i<3; i++){
		for (int  j = 0; j<2;j++){
			if (a[j] < a[j+1]){
				int temp = a[j+1];
				a[j+1] = a[j];
				a[j] = temp;
			}
		}
	}
	low = a[2];
	mid = a[1];
	top = a[0];
	scanf("%s", abc );
	for (int i=0; i<3;i++){
		switch (abc[i]){
		case 'A' :{
			printf("%d ", low);
			break;
		}
		case 'B' :{
			printf("%d ", mid);
			break;
		}
		case 'C' :{
			printf("%d ", top);
			break;
		}
	}
	}
	
	return 0;
}
