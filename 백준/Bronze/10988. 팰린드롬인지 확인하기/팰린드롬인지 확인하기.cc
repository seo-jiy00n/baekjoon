#include <stdio.h>
#include <string.h>

int main(){
	char word[100];
	scanf("%s", word);
	
	int len = strlen(word);
	int flag=1;
	char half[len/2];
	
	if(len%2==0){
		for(int i=0; i<(len/2); i++){
			half[i]=word[i];
		}
		for(int i=(len/2)-1; i>=0; i--){
		    if(word[(len-1)-i]!=half[i]){
				flag=0;
				break;
			}
		}
	}//문자열 길이가 짝수
		
	else if(len%2!=0){
		for(int i=0; i<=(len/2); i++){
			half[i]=word[i];
		}
		for(int i=(len/2)-1; i>=0; i--){
		    if(word[(len-1)-i]!=half[i]){
				flag=0;
				break;
			}
		}
	}//문자열 길이가 홀수
	
	printf("%d", flag);
	
	return 0; 
}