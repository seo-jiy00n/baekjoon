//백준 1002번 터렛

#include <stdio.h>

int main(){
    int test_case;
    
    scanf("%d", &test_case);
     
    int array[test_case][6];

    for(int i=0; i<test_case; i++){
    	for(int j=0; j<6; j++){
    		scanf("%d", &array[i][j]);
    	}
    }
    
    int dis1, dis2, dis3;
    for(int i=0; i<test_case; i++){
        for(int j=0; j<6; j++){
            if(j!=2&&j!=5){
                if(array[i][j]<-10000||array[i][j]>10000) return 0;
            }
            else{
                if(array[i][j]<=0||array[i][j]>10000) return 0;
            }
        }
        if(array[i][0]==array[i][3]&&array[i][1]==array[i][4]&&array[i][2]==array[i][5]){
            printf("-1\n");
        }
        else{
            int x1, x2, y1, y2, r1, r2;
            x1 = array[i][0];
            y1 = array[i][1];
            r1 = array[i][2];
            x2 = array[i][3];
            y2 = array[i][4];
            r2 = array[i][5];
            dis1 = (x1-x2)*(x1-x2) + (y1-y2)*(y1-y2);
            dis2 = (r1+r2)*(r1+r2);
            dis3 = (r1-r2)*(r1-r2);
            
            if(dis2<dis1) printf("0\n");
            if(dis2==dis1) printf("1\n");
            if(dis3<dis1 && dis2>dis1) printf("2\n");
            if(dis3==dis1) printf("1\n");
            if(dis3>dis1) printf("0\n");
        }
    }
    
    return 0;
}