#include <stdio.h>
int main()
{
	int n, t, i, a;
	a = 0;
	scanf("%d",&n);
	getchar();
	for (i=0;i<n;i++){
		scanf("%d",&t);
		if (t<0){
			a++;
		}
	}
	printf("%d",a);
	return 0;
}
