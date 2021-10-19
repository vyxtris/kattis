#include <stdio.h>

int main(){
	char a;
	char s[1000005];
	int i = 0;
	while (1){
		a = getchar();
		if (a == '\n') break;
		if (a == '<'){
			s[i] = ' ';
			i--;
		}
		else{
			s[i] = a;
			i++;
		}
	}
	for (int j=0;j<i;j++){
		printf("%c", s[j]);
	}
	return 0;
}
