#include <stdio.h>
#include <stdlib.h>
int partition(int a[],int low,int high);
void swap(int *a,int *b);
void quicksort(int a[],int low,int high);
void printArray(int a[],int size);
void swap(int *a,int *b){
 int t=*a;
 *a=*b;
 *b=t;
}
int partition(int a[],int low,int high){
 int pivot=a[high];
 int i=(low-1);
 for(int j=low;j<high;j++){
    if(a[j]<=pivot){
        i++;
        swap(&a[i],&a[j]);
    }
 }
 swap(&a[i+1],&a[high]);
 return (i+1);
}
void quicksort(int a[],int low,int high){
    if(low<high){
     int pi=partition(a,low,high);
     quicksort(a,low,pi-1);
     quicksort(a,pi+1,high);
    }
}
void printArray(int a[],int size){
    for(int i=0;i<size;i++){
        printf("%d ",a[i]);
    }
    printf("\n");
}
int main(){
 int limit;
 printf("Enter the limit :");
 scanf("%d",&limit);
 int d[limit];
 printf("Enter the elements of the array:");
 for(int i=0;i<limit;i++){
    scanf("%d",&d[i]);
 }
 printf("The unsorted array is:");
 printArray(d,limit);
 quicksort(d,0,limit-1);
 printf("The sorted array is:");
 printArray(d,limit);
 return 0;
}

