#include <stdio.h>
#include <string.h>

int main(){
	char hiss[40];
	int flag = 0;
	scanf("%s", hiss);
	int n = strlen(hiss);
	for (int i = 0; i<n-1;i++ ){
		if (hiss[i]=='s'&&hiss[i+1]=='s'){
			flag = 1;
		}
	}
	printf(flag == 1 ? "hiss" : "no hiss");
	return 0;
}
