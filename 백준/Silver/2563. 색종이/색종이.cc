#include <stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	
	int colorpaper[100][100]={0};
	int x[n], y[n];
	
	for(int i=0; i<n; i++){
		scanf("%d %d", &x[i], &y[i]);
		for(int j=x[i]; j<(x[i]+10); j++){
			for(int k=y[i]; k<(y[i]+10); k++){
				colorpaper[k][j]+=1;
			}
		}
	}
	
	int area=0;
	for(int i=0; i<100; i++){
		for(int j=0; j<100; j++){
			if(colorpaper[i][j]!=0) area++;
		}
	}
	
	printf("%d", area);
	
	return 0;
}