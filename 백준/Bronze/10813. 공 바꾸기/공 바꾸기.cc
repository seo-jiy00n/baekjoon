#include <stdio.h>

int main(){
	int n, m;
	scanf("%d %d", &n, &m);
	
	int change[m][2];
	for(int i=0; i<m; i++){
		scanf("%d %d", &change[i][0], &change[i][1]);
	}
	
	int basket[n];
	for(int i=0; i<n; i++){
		basket[i]=(i+1);
	}
	
	int i, j, temp;
	for(int k=0; k<m; k++){
		i = (change[k][0]-1);
		j = (change[k][1]-1);
		temp = basket[i];
		basket[i] = basket[j];
		basket[j] = temp;
	}
	
	for(int i=0; i<n; i++){
		printf("%d ", basket[i]);
	}
	
	return 0;
}