#include <stdio.h>
#include <string.h>
#include <math.h>

int main(){
	char s[55];
	scanf("%s", s);
	int n = strlen(s);
	int t = 0, c = 0, g = 0;
	int min = 0, sum = 0;
	for (int i=0;i<n;i++){
		switch (s[i]){
			case 'T':{
				t++;
				break;
			}
			case 'C':{
				c++;
				break;
			}
			case 'G':{
				g++;
				break;
			}
		}
	}
	if (t<=c && t<=g){
		min = t;
	}
	if(c<=t&&c<=g){
		min = c;
	}
	if(g<=t&&g<=c){
		min = g;
	}
	sum = pow(t,2) + pow(c,2) + pow(g,2) + min * 7;
	printf("%d", sum);
	return 0;
}
