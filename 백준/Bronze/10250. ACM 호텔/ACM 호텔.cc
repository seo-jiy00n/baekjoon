#include <stdio.h>

int main(){
	int t;
	scanf("%d", &t);
	
	int array[t][3];
	for(int i=0; i<t; i++){
		int h, w, n;
		scanf("%d %d %d", &h, &w, &n);
		int floor=n%h;
		int num;
		if(floor==0){
			floor=h;
			num=n/h;
		}
		else num=(n/h)+1;
		int room=floor*100 + num;
		printf("%d\n", room);
	}
	
	return 0;
}