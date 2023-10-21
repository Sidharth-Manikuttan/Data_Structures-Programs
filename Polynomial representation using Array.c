#include <stdio.h>
#include <stdlib.h>
struct poly{
 int coeff;
 int expo;
};
void main(){
int n;
printf("Enter the number of terms of the polynomial : ");
scanf("%d",&n);
struct poly p[n];
for(int i=0;i<n;i++){
    printf("Enter the exponent : ");
    scanf("%d",&p[i].expo);
     printf("Enter the coefficient : ");
    scanf("%d",&p[i].coeff);

}
printf("The polynomial representation is : ");
for(int i=0;i<n;i++){
 if(i<(n-1)){
    printf("%d x^%d + ",p[i].coeff,p[i].expo);
 }
 else{
    printf(" %d\t",p[i].coeff);
 }
}
}
