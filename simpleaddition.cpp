#include <stdio.h>
#include <string.h>

int main(){
	int nol=0;
	int len1;
	int len2;
	char a[11111];
	char b[11111];
	char sum[11111];
	for (int i=0;i<11111;i++){
		a[i] = 0;
		b[i] = 0;
		sum[i] = 0;
	}
	scanf("%s", a); getchar();
	scanf("%s", b); getchar();
	len1 = strlen(a);
	len2 = strlen(b);
//	printf("%d %d\n", len1, len2);
	if (len1 < len2){
		for (int i=len2-1;i>=0;i--){
			sum[nol] = sum[nol] + a[i] + b[i] - 48;
			if (sum[nol] > '9'){
				sum[nol] = sum[nol] - 9;
				sum[nol+1] = 1;
			}
			nol++;
		}
	}
	else{
		for (int i=len1-1;i>=0;i--){
			sum[nol] = sum[nol] + a[i] + b[i] - 48;
			if (sum[nol] > '9'){
				sum[nol] = sum[nol] - 9;
				sum[nol+1] = 1;
			}
			nol++;
		}
	}
	printf("%s", sum);
	
	return 0;
}
