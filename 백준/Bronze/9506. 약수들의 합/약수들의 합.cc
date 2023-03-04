#include <stdio.h>

int main(){
	while(true){
		int n;
		scanf("%d", &n);
		
		if(n==-1) break;
		
		int prime[n]={0};
		for(int i=2; i<n; i++){
			if(n%i==0) prime[i]=i;
		}
		
		int sum=1;
		for(int i=2; i<n; i++){
			if(prime[i]!=0) sum+=prime[i];
		}
		
		if(sum==n){
			printf("%d = 1", n);
			for(int i=2; i<n; i++){
				if(prime[i]!=0) printf(" + %d", prime[i]);
			}
			printf("\n");
		}
		else printf("%d is NOT perfect.\n", n);
	}
	
	return 0;
}