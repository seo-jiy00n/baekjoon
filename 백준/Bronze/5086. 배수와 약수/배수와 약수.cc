#include <stdio.h>

int main(){
	int flag=1; 
	while(flag==1){
		int a, b;
		scanf("%d %d", &a, &b);
		
		if(a==0 && b==0) break;
		
		if(b%a==0) printf("factor\n");
		else if(a%b==0) printf("multiple\n");
		else printf("neither\n");
	}
	
	return 0;
}