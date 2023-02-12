#include <stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	char ox[n][80];
	for(int i=0; i<n; i++){
		scanf("%s", ox[i]);
	}
	
	int score, sum;
	for(int i=0; i<n; i++){
		score=0;
		sum=0;
		
		if(ox[i][0]==79){
			score=1;
			sum=1;
		}
		else{
			score=0;
			sum=0;
		}
		
		for(int j=1; j<80; j++){
			if(ox[i][j]==NULL) break;
			if(ox[i][j]==79){
				if(ox[i][j-1]==79){
					score += 1;
					sum += score;
				}
				else{
					score=1;
					sum+=score;
				}
			}
			else score=0;
		}
		printf("%d\n", sum);
	}
}