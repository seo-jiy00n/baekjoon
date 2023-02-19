#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
	int alphabet[91]={0};
	
	char word[1000000];
	scanf("%s", &word);
	
	int len=strlen(word);
	
	for(int i=0; i<=len; i++){
		for(int j=65; j<=90; j++){
			if(word[i]==j){
				alphabet[j]++;
			} 
			if(word[i]==(j+32)){
				alphabet[j]++;
			} 
		}
	}
    
	int max=alphabet[65];
	int index=65;
	for(int i=66; i<=90; i++){
		if(max<alphabet[i]){
			max=alphabet[i];
		    index=i;
		} 
	}	
	
	int count=0;
	for(int i=65; i<=90; i++){
		if(max==alphabet[i]) count++;
	}
	
	if(count>1) printf("?");
	else printf("%c", index);
	return 0;
}