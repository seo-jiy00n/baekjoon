#include <stdio.h>
#include <string.h>

int main(){
	char s[100];
	scanf("%s", &s);
	int len=strlen(s);
	
	int alphabet[123]={0};
	for(int i=0; i<=len; i++){
		for(int j=97; j<123; j++){
			if(s[i]==j){
				if(i==0 && alphabet[j]==0){
					alphabet[j]=200;
					break;
				}
				else if(alphabet[j]==0){
					alphabet[j]=i;
				    break;
				}
			}
		}
	}
	
	for(int i=97; i<123; i++){
		if(alphabet[i]==0) printf("-1 ");
		else if(alphabet[i]==200) printf("0 ");
		else printf("%d ", alphabet[i]);
	}
	
	return 0;
}