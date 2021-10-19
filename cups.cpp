#include <stdio.h>
#include <stdlib.h>

int main(){
	int N;
	scanf("%d", &N);
	char kata[N][22];
	int arr[N];
	for (int i=0;i<N;i++){
		char a; int j = 0;
		while (scanf("%c", &a) == 1){
			if (a >= 'a' && a <= 'z'){
				puts("1");
				kata[i][j] = a;
			}
			else if (a >= '0' && a <= '9'){
				puts("3");
				arr[i] = arr[i] * 10;
				arr[i] += (a % 49);
				printf("%d\n", arr[i]);
			}
			++j;
		}
	}
	return 0;
}
