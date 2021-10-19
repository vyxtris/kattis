#include <stdio.h>
#include <string.h>

int main(){
	int n, sum = 0;
	scanf("%d", &n);
	char s[33];
	while (n > 0){
		scanf("%s", s);
		int x = strlen(s);
		int flag1 = 0; int flag2 = 0;
		for (int i=0;i<x-3;i++){
			if(s[i] == 'p' || s[i] == 'P'){
				if (s[i+1] == 'i' || s[i+1] == 'I'){
					if(s[i+2] == 'n' || s[i+2] == 'N'){
						if (s[i+3] == 'k' || s[i+3] == 'K'){
							flag1 = 1;
						}
					}
				}
			}
			if(s[i] == 'r' || s[i] == 'R'){
				if (s[i+1] == 'o' || s[i+1] == 'O'){
					if(s[i+2] == 's' || s[i+2] == 'S'){
						if (s[i+3] == 'e' || s[i+3] == 'E'){
							flag2 = 1;
						}
					}
				}
			}
		}
		if (flag1 == 1 || flag2 == 1){
			sum++;
		}
		n--;
	}
	(sum > 0) ? printf("%d", sum) : puts("I must watch Star Wars with my daughter");
	return 0;
}
