#include <stdio.h>
int main(){
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    
    int min, max, sec;
    if(a>b){
        max = a;
        min = b;
    }
    else{
        max = b;
        min = a;
    }
    
    if(max>c){
        if(min>c) sec = min;
        else sec = c;
    }
    else sec = max;
    
    printf("%d", sec);
    
    return 0;
}