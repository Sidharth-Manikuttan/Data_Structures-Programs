#include <stdio.h>
 int main()
 {
 int i,n,item,flag=0,count=0;
 count++;
 count++;
 printf("Enter the limit of the array : ");
 count++;
 scanf("%d",&n);
 count++;
 int a[n];
 printf("Enter the array elements : \n");
 count++;
 for(i=0;i<n;i++)
 {
 count++;
 scanf("%d",&a[i]);
 count++;
 }
 count++;
 printf("Enter the element to be searched : ");
 count++;
 scanf("%d",&item);
 count++;
 for(i=0;i<n;i++)
 {
 count++;
 if(a[i]==item)
 {
 count++;
 flag=1;
 count++;
 printf("The element is in the position %d",i+1);
 count++;
 break;
 }
 count++;
 }
 count++;
 if(flag==0)
 {
 count++;
 printf("The element is not found in the array !!!");
 count++;
 }
 count++;
 printf("\nThe time complexity is : %d",++count);
 printf("\nThe space complexity is : %     d\n",20+(4*n));
 return 0;
 }
