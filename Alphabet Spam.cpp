#include <stdio.h>

int main(){
	char a[100006];
	double r_space = 0;
	double r_lower = 0;
	double r_upper = 0;
	double r_sym = 0;
	double sum = 0;
	int i=0;
	int flag;
	scanf("%s", a);
	while (a[i] != NULL){
		flag = 0;
		if (a[i] == 95){
			r_space++;
			flag = 1;
		}
		if (a[i] >= 'A' && a[i] <= 'Z'){
			r_upper++;
			flag = 1;
		}
		if (a[i] >= 'a' && a[i] <= 'z'){
			r_lower++;
			flag = 1;
		}
		if (flag != 1){
			r_sym++;
		}
		sum++;
		i++;
	}
	printf("%.6lf\n", r_space/sum);
	printf("%.6lf\n", r_lower/sum);
	printf("%.6lf\n", r_upper/sum);
	printf("%.6lf\n", r_sym/sum);
	return 0;
}
