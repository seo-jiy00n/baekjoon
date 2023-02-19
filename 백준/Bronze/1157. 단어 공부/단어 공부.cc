#include <stdio.h>
#include <string.h>
//성공! 

int main(){
	int alphabet[91]={0};
	//인덱스: 알파벳의 아스키코드 & 배열의 값: 알파벳 개수 
	
	char word[1000000];
	scanf("%s", &word);
	//배열의 값: 단어 
	
	int len=strlen(word);
	//배열의 크기 
	
	for(int i=0; i<=len; i++){
		for(int j=65; j<=90; j++){
			if(word[i]==j) alphabet[j]++;
			if(word[i]==(j+32)) alphabet[j]++;
		}
	}
	//알파벳 개수 세기 
	
	int max=alphabet[65];
	int index=65;
	for(int i=66; i<=90; i++){
		if(max<alphabet[i]){
			max=alphabet[i];
		    index=i;
		} 
	}
	//알파벳 개수 가장 많은 알파벳의 아스키 코드 찾기=index 
	
	int count=0;
	for(int i=65; i<=90; i++){
		if(max==alphabet[i]) count++;
	}
	//알파벳 개수 가장 많은 알파벳이 여러 개인지 확인 
	if(count>1) printf("?");
	//여러 개면 ? 출력 
	else printf("%c", index);
	return 0;
}