#include<stdio.h>
int main()
{
 int n,i,j,temp,count=0;
 count++;
 printf("Enter the number of elements : ");
 count++;
 scanf("%d",&n);
 count++;
 int a[n];
 printf("Enter the array elements : ");
 count++;
 for(i=0;i<n;i++)
 {
 count++;
 scanf("%d",&a[i]);
 count++;
 }
 count++;
 for(i=0;i<n;i++)
 {
 count++;
 for(j=0;j<(n-i-1);j++)
 {
  count++;
  if(a[j]>a[j+1])
  {
  count++;
  temp=a[j];
  count++;
  a[j]=a[j+1];
  count++;
  a[j+1]=temp;
  count++;
  }
  count++;
 }
 count++;
 }
 printf("The sorted array is : ");
 count++;
 for(i=0;i<n;i++)
 {
 count++;
 printf("\t+%d",a[i]);
 count++;
 }
 printf("\nThe time complexity is : %d",++count);
 printf("\nThe space complexity is : %d\n",(20+4*n));
 return(0);
}
