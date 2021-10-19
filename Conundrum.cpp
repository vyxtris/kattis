#include <stdio.h>
#include <string.h>

int main(){
	char per[4] = "PER";
	char str[310];
	scanf("%s",str);
	int n = strlen(str);
	int count =0;
	for (int i=0;i<n;i++){
		if (str[i] != per[i%3]){
			count++;
		}
	}
	printf("%d\n", count);
	return 0;
}
