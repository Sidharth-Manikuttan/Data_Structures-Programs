#include <stdio.h>
#include <stdlib.h>
struct sparse{
int column;
int row;
int value;
};
void main(){
 int i,j,r,c;
 printf("Enter the rows and columns of the matrix : ");
 scanf("%d%d",&r,&c);
 int a[r][c];
 printf("Enter the elements of the matrix : ");
 for(i=0;i<r;i++){
    for(j=0;j<c;j++){
      scanf("%d",&a[i][j]);
    }
 }
 struct sparse s[30];
 int k=1;
 int count=0;
 for(i=0;i<r;i++){
    for(j=0;j<c;j++){
      if(a[i][j]!=0){
        s[k].row=i;
        s[k].column=j;
        s[k].value=a[i][j];
        k++;
        count++;
      }
    }
 }
 s[0].row=r;
 s[0].column=c;
 s[0].value=count;
 printf("The sparse matrix is :\n");
 for(i=0;i<r;i++){
    for(j=0;j<c;j++){
      printf("%d ",a[i][j]);
    }
    printf("\n");
 }
 printf("The triplet form representation is :\n");
 printf("ROW  COLUMN  VALUE\n");
 for(i=0;i<s[0].value+1;i++){
    printf(" %d     %d      %d\n",s[i].row,s[i].column,s[i].value);
 }
}
