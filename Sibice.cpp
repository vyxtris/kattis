#include <stdio.h>

int main()
{
	int N, W, H; 
	scanf("%d %d %d", &N, &W, &H);
	double a = W*W + H*H;
	while (N--)
	{
		int input;
		scanf("%d", &input);
		printf(input * input <= a ? "DA\n" : "NE\n");	
	}	
	return 0;
}
