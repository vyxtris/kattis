#include <stdio.h>
#include <string.h>

int main(){
	int N;
	scanf("%d", &N);
	char a[15];
	char b[15];
	int de = 0, in = 0;
	for (int i=0;i<N;i++){
		if (i == 0){
			scanf("%s", a);
		}
		else{
			scanf("%s", b);
			if (strcmp(a,b) < 0){
				in++;	
			}
			else{
				de++;
			}
			strcpy(a, b);
		}
	}
//	printf("%d %d\n", in, de);
	if (in > de && de == 0){
		puts("INCREASING");
	}
	else if (de > in && in == 0){
		puts("DECREASING");
	}
	else{
		puts("NEITHER");
	}
	
	return 0;
}
