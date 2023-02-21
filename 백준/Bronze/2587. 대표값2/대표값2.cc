#include <stdio.h>

int main(){
	int n[5];
	for(int i=0; i<5; i++){
		scanf("%d", &n[i]);
	}
	
	int min, temp;
	for(int i=0; i<5; i++){
		min = n[i];
		temp = i;
		for(int j=(i+1); j<5; j++){
			if(min>n[j]){
				min = n[j];
				temp = j;
			}
		}
		n[temp] = n[i];
		n[i] = min;
	}
	
	int sum=0;
	for(int i=0; i<5; i++){
		sum+=n[i];
	}
	int avg = sum / 5;
	
	printf("%d\n", avg);
	printf("%d", n[2]);
	
	return 0;
}