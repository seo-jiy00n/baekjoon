#include <stdio.h>
#include <string.h>

int main(){
   int t;
   scanf("%d", &t);
   
   char s[t][1000];
   for(int i=0; i<t; i++){
      scanf("%s", s[i]);
   }
   
   int len[t];
   for(int i=0; i<t; i++){
      len[i] = strlen(s[i]) - 1;
   }
   
   for(int i=0; i<t; i++){
      printf("%c%c\n", s[i][0], s[i][len[i]]);
   }
   
   return 0;
} 