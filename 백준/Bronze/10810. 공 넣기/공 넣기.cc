#include <stdio.h>

int main(){
   int n, m;
   scanf("%d %d", &n, &m);
   
   int work[m][3];
   for(int i=0; i<m; i++){
      for(int j=0; j<3; j++){
         scanf("%d", &work[i][j]);
      }
   }
   
   int basket[n]={0};
   int first, last;
   for(int i=0; i<m; i++){
      first = work[i][0] - 1;
      last = work[i][1] - 1;
      for(int j=first; j<=last; j++){
         basket[j]=work[i][2];
      }
   }
   
   for(int i=0; i<n; i++){
      printf("%d ", basket[i]);
   }
   
   return 0;
} 