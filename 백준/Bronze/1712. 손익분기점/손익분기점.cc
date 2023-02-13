#include <stdio.h>

int main(){
	long long a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	long long n;
	double n_d;
	if(b>=c) printf("-1");
	else{
		n_d = a/(c-b);
		n = (long long)n_d + 1;
		printf("%d", n);
	}

	return 0;
}