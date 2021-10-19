#include <stdio.h>
#include <string.h>

int main(){
	char x[1005];
	scanf("%[^\n]", x); getchar();
	int a=0, b=0, c=0, count=0;
	int n = strlen(x);
	int i = 0;
	while(i <= n+1){
		c = x[i];
		printf("c= %d\n", c);
		if (c >= '0' && c <= '9'){
			puts("1");
			c %= 48;
			if (a == 0){
				puts("321");
				a = c;
				i++;
			}
			else{
				a *= 10;
				a += c;
			}
		}
		else if (c == '-'){
			puts("2");
			b = a;
		}
		else{
			puts("3");
			a = a - b;
			count += a;
			a = 0;
			b = 0;
		}
		i++;
	}
	printf("%d", count);
	return 0;
}
