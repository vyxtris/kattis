#include <stdio.h>
#include <string.h>
int main(){
	int T;
	scanf("%d", &T); getchar();
	char s[105];
	for (int i=0;i<T;i++){
		int a[27] = {0}, sum = 0;
		scanf("%[^\n]",s); getchar();
		int n = strlen(s);
		for (int k=0;k<n;k++){	
			for (int j=0;j<26;j++){
				if(s[k] == 65+j || s[k] == 97+j){
					a[j]++;
				}
			}
		}
		for (int j=0;j<26;j++){
			if(a[j]>0){
				sum++;
			}
		}
		if (sum == 26){
			printf("pangram\n");
		}
		else{
			printf("missing ");
			for (int j=0;j<26;j++){
				if(a[j]==0){
					printf("%c", j+97);
				}
			}
			printf("\n");
		}
	}
	return 0;
}
