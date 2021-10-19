#include<stdio.h>
#include"string.h"

int main(){
	char a[255];
	scanf("%s", a);
	for (int i=1;i<=strlen(a);i++){
		if(a[i]!=a[i-1]){
			printf("%c",a[i-1]);
		}
	}
	
	return 0;
}
