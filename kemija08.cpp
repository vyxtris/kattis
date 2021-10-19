#include <stdio.h>
#include <string.h>

int main(){
	char str[105];
	char res[105];
	char temp;
	int flag = 0;
	int j=0;
	scanf("%[^\n]", str);
	int len = strlen(str);
	for (int i=0;i<len;i++){
		if (flag == 1){
			if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u'){
				flag = 0;
			}
			continue;
		}
		else if(flag == 0){
			if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u'){
				flag = 1;
			}
			res[j] = str[i];
			j++;
		}
	}
	res[j] = '\0';
	printf("%s", res);
	return 0;
}
