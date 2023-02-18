#include <stdio.h>

int main(){
	int n, l;
	scanf("%d %d", &n, &l);
	int fruit[n];
	for(int i=0; i<n; i++){
		scanf("%d", &fruit[i]);
	}
	
	for(int i=0; i<n; i++){
		int min = fruit[i];
		int temp = i;
		for(int j=(i+1); j<n; j++){
			if(fruit[j]<min){
				min = fruit[j];
				temp = j;
			}
		}
		fruit[temp] = fruit[i];
		fruit[i] = min;
	}
	
	for(int i=0; i<n; i++){
		if(fruit[i]<=l) l++;
		else break;
	}
	printf("%d", l);
	
	return 0;
}