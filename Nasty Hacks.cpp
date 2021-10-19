#include <stdio.h>
void test()
{
	long long int r, e, c;
	scanf("%lld %lld %lld", &r, &e, &c);
	int d = r - (e - c);
	printf(d<0 ? "advertise\n" : d>0 ? "do not advertise" : "does not matter");
}

int main()
{
	int n;
	scanf("%d", &n);
	while (n--) test();
	return 0;
}
