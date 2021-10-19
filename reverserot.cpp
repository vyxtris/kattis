#include <stdio.h>
#include <string.h>

int main(){
	char str1[45];
	int n = 0, rot, curr;
	char str2[45];
	while (1){
		scanf("%d", &rot);
		if (rot == 0){
			break;
		}
		scanf("%s", str1);
		n = strlen(str1);
		for (int i=0;i<n;i++){
			str2[i] = str1[n-i-1];
		}
		for (int i=0;i<n;i++){
			if (str2[i] == '_'){
				curr = 91;
			}
			else if (str2[i] == '.'){
				curr = 92;
			}
			else{
				curr = str2[i];
			}
			curr += rot;
			curr %= 93;
			if (curr <= 65){
				curr += 65;
			}
			if (curr <= 90){
				str1[i] = curr;
			}
			else if(curr == 91){
				str1[i] = '_';
			}
			else if(curr == 92){
				str1[i] = '.';
			}
			else{
				str1[i] = '*';
			}
		}
		printf("%s\n", str1);
	}
	return 0;
}
