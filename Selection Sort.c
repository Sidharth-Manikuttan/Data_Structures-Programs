#include<stdio.h>
int main()
{
int n, i, j, position, swap,count=0;
count++;
printf("Enter number of elements:");
count++;
scanf("%d", &n);
count++;
int a[n];
printf("Enter elements of array :\n");
count++;
for (i = 0; i<n; i++)
{
count++;
scanf("%d", &a[i]);
count++;
}
count++;
for(i = 0; i<(n - 1); i++)
{
count++;
position=i;
count++;
for(j = i + 1; j<n; j++)
{
count++;
if(a[position]>a[j])
{
count++;
position=j;
count++;
}
if(position != i)
{
count++;
swap=a[i];
count++;
a[i]=a[position];
count++;
a[position]=swap;
count++;
}
count++;
}
count++;
}
count++;
printf("Sorted Array is:");
count++;
for(i = 0; i<n; i++)
{
count++;
printf("%d\t", a[i]);
count++;
}
count++;
printf("\nThe time complexity is: %d",count+1);
count++;
printf("\nThe space complexity is :%d\n", (24+4*n));
count++;
return 0;
}
