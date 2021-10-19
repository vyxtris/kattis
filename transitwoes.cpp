#include <stdio.h>

int main(){
	int s, t, n;
	scanf("%d %d %d", &s, &t, &n );
	int d[n+1];
	for (int i=0;i<n+1;i++){
		scanf("%d", &d[i]);
	}
	s = s + d[0];
	int b[n];
	for (int i=0;i<n;i++){
		scanf("%d", &b[i]);
	}
	int c[n];
	for (int i=0;i<n;i++){
		scanf("%d", &c[i]);
	}
	for (int i=0;i<n;i++){
//		printf("%d\n", s);
		if (c[i] > b[i]){
			s = s + c[i];
		}
		else{
			s = s + b[i];
		}
		s = s + d[i+1];
	}
//	printf("%d\n", s);
	(s<t) ? printf("yes") : printf("no");
	return 0;
}
