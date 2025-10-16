/* matrix_multiply.c */
#include <stdio.h>
int main(){
    int A[2][2] = {{1,2},{3,4}}, B[2][2]={{2,0},{1,2}}, C[2][2] = {{0,0},{0,0}};
    int i,j,k;
    for(i=0;i<2;i++)
      for(j=0;j<2;j++){
        C[i][j]=0;
        for(k=0;k<2;k++) C[i][j]+=A[i][k]*B[k][j];
      }
    printf("Product:\n");
    for(i=0;i<2;i++){ for(j=0;j<2;j++) printf("%d ", C[i][j]); printf("\n"); }
    return 0;
}
