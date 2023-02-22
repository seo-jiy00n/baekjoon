#include <stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	
	int five, three;
	int five_rest, three_rest;
	
	five = n / 5;
	if(five>0){
		five_rest = n % 5;
		//1-1
		while(five_rest%3!=0 && five>0){
			five--;
			five_rest = n - 5 * five;
			if(five_rest<0) break;
		}
		if(five_rest>0){
			three = five_rest / 3;
			three_rest = five_rest % 3;
			if(three_rest==0) printf("%d", five+three);
			else printf("-1");
		}
		else if(five_rest==0) printf("%d", five);
		else printf("-1");
	}
	else{
		three = n / 3;
		three_rest = n % 3;
		if(three_rest==0) printf("%d", three);
		else printf("-1");
	}
	return 0;
}