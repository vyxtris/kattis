#include <stdio.h>
#include <string.h>

int main(){
	int n;
	scanf("%d", &n); getchar();
	int len1[n], len2[n];
	char str1[n][55], str2[n][55];
	for (int i = 0; i< n; i++){
		scanf("%[^\n]", str1[i]); getchar();
		len1[i]= strlen(str1[i]);
		scanf("%[^\n]", str2[i]); getchar();
	}
	for (int i = 0; i<n;i++){
		printf("%s\n", str1[i]);
		printf("%s\n", str2[i]);
		for (int j = 0;j<len1[i];j++){
			if (str1[i][j] == str2[i][j])
			{
				printf(".");
			}
			else 
			{
				printf("*");
			}
		}
		printf("\n");
	}
	
	return 0;
}
