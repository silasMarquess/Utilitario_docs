#include <stdlib.h>
#include <stdio.h>


int main(){
 int mat[4][4]
 ={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
 
 int matInvertida[4][4]
 ={{0,0,0,0},{0,0,0,0},{0,0,0,0},{0,0,0,0}};

 for(int i=0;i<4;i++){
   for(int j = 0;j<4;j++){
    matInvertida[i][j]=mat[j][i]; 
   }
 }

printf("%d\n",matInvertida[0][0]);
printf("%d\n",matInvertida[0][1]);
printf("%d\n",matInvertida[0][2]);
printf("%d\n",matInvertida[0][3]);











    return 0;
}