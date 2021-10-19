#include <stdio.h>
#define gc getchar()
int main(){
	int n, m;
	scanf("%d %d", &n, &m); gc;
	int t = n-1;
	char a[n+1], b[m+1];
	scanf("%s", a); gc;
	scanf("%s", b); gc;
	char res[m+1];
	for (int i=m-1;i>m-n-1;i--){
		res[i] = a[t];
		t--;
	}
	t = m-1;
	for (int i=m-n-1; i>=0; i--){
		res[i] = 'a' + (26+ b[t] - res[t]) % 26;
		t--;
	}
	for (int i=0;i<m;i++){
		printf("%c", res[i]);
	}
	return 0;
}
