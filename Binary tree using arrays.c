#include <stdio.h>
#include <math.h>
int main()
{
int n,f,i;
printf("Enter the number of elements of the binary tree : ");
scanf("%d",&n);
int arr[n];
printf("Enter the elements of the binary tree : ");
for( i=1;i<=n;i++)
{
scanf("%d",&arr[i]);
}
printf("The binary tree is : ");
for( i=1;i<=n;i++)
{
printf(" %d ",arr[i]);
}
printf( "\nEnter the Node to find the leftchild and rightchild:");
scanf("%d",&f);
for( i=1;i<=n;i++)
{
if(f==arr[i])
{
if(2*i<=n)
printf("%d is Left child",arr[(2*i)]);
else
printf( "\nLeft child does't exist");
if((2*i)+1<=n)
printf("\n%d is Right child",arr[(2*i)+1]);
else
printf( "\nRight child does't exist");
break;
}
}
if(i>n)
printf( "Node does't exist\n");
return 0;
}
PROGRAM FO
