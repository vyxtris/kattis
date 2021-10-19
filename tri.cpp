#include <stdio.h>

int main(){
	int a,b,c;
	int f = 0;
	scanf("%d %d %d", &a, &b, &c);
//	printf("%d %d %d", a, b, c);
	if (a>=c){
//		puts("test");
		 if (b-c == a && f == 0){
		 	printf("%d=%d-%d", a,b,c);
		 	f++;
		 }
		 if (b*c == a && f == 0){
		 	printf("%d=%d*%d", a,b,c);
		 	f++;
		 }
		 if (b+c == a && f == 0){
		 	printf("%d=%d+%d", a,b,c);
			f++;
		 }
		 if (b/c == a && f == 0){
		 	printf("%d=%d/%d", a,b,c);
		 }
	}
	else{
//		puts("testt");
		if (a-b == c && f == 0){
		 	printf("%d-%d=%d", a,b,c);
		 	f++;
		 }
		 if (a*b == c && f == 0){
		 	printf("%d*%d=%d", a,b,c);
		 	f++;
		 }
		 if (a+b == c && f == 0){
		 	printf("%d+%d=%d", a,b,c);
			f++;
		 }
		 if (a/b == c && f == 0){
		 	printf("%d/%d=%d", a,b,c);
		 }
	}
	return 0;
}
