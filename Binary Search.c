#include <stdio.h>
void main()
{
int i, left, right, middle, n, key,count=0;
count++;
printf("Enter number of elements : \n");
count++;
scanf("%d",&n);
count++;
int array[n];
printf("Enter array elements\n");
count++;
for(i = 0; i < n; i++)
{
count++;
scanf("%d",&array[i]);
count++;
}
count++;
printf("Enter value to find\n");
count++;
scanf("%d", &key);
count++;
left = 0;
count++;
right = n - 1;
count++;
middle = (left+right)/2;
count++;
while (left <= right) {
count++;
if(array[middle] < key){
count++;
left = middle + 1;
count++;
}
else if (array[middle] == key)
{
count++;
printf("%d found at location %d\n", key, middle+1);
count++;
count++;
break;
}
else
{
count++;
right= middle - 1;
}
count++;
middle = (left + right)/2;
count++;
}
if(left > right)
{
count++;
printf(" %d is not found !!!\n", key);
count++;
}
count++;
printf("Space complexity = %d\n",24+(n*4));
count++;
printf("Time complexity = %d\n",count++);
}
