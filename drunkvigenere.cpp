#include <stdio.h>
#include <string.h>

int main(){
	char C[205];
	char K[205];
	scanf("%s", C);
	scanf("%s", K);
	int n = strlen(C);
	for (int i=0;i<n;i++){
		K[i] -= 65;
		if (i % 2 == 1){
			C[i] += K[i];
		}
		else{
			C[i] -= K[i];
		}
		if (C[i] < 65) C[i] += 26;
		if (C[i] > 90) C[i] -= 26;
	}
	printf("%s\n", C);
	return 0;
}
