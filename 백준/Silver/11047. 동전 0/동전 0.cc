#include <stdio.h>

int main(){
	int n, k;
	scanf("%d %d", &n, &k);
	
	int coin[n];
	for(int i=0; i<n; i++){
		scanf("%d", &coin[i]);
	}
	
	int coin_n=0;
	int total = k;
	for(int i=(n-1); i>=0; i--){
		if(total>coin[i]){
			coin_n += total / coin[i];
		    total = total % coin[i];
		}
		else if(total==coin[i]){
			coin_n++;
			break;
		}
	}
	
	printf("%d", coin_n);
	
	return 0;
} 