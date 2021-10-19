#include <stdio.h>
#include <string.h>

int main(){
	char Y[15];
	char P[15];
	scanf("%s", Y); getchar();
	int n = strlen(Y);
	if(Y[n-2] == 'e' && Y[n-1] == 'x'){
		
	}
	else if(Y[n-1] == 'e'){
		Y[n] = 'x';
	}
	else if (Y[n-1] == 'a' ||Y[n-1] == 'i' ||Y[n-1] == 'u' ||Y[n-1] == 'o'){
		Y[n-1] = 'e';
		Y[n] = 'x';
	}
	else{
		Y[n] = 'e';
		Y[n+1] = 'x';
	}
	scanf("%s", P); getchar();
	printf("%s%s", Y, P);
	return 0;
}
