#include <stdio.h>
#include <string.h>

int main(){
	char str[105];
	scanf("%s", str); getchar();
	int len = strlen(str);
	char temp1[35] = {0}, temp2[35] = {0}, temp3[35] = {0};
	len = len / 3;
	for (int i=0;i<len;i++){
		temp1[i] = str[i];
		temp2[i] = str[len+i];
		temp3[i] = str[(2*len)+i];
	}
	if (strcmp(temp1, temp2) == 0){
		strcpy(str, temp1);
	}
	else if (strcmp(temp2,temp3) == 0){
		strcpy(str, temp2);
	}
	else if(strcmp(temp3, temp1) == 0){
		strcpy(str, temp3);
	}
	printf("%s\n", str);
	return 0;
}
