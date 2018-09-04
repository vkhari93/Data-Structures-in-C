#include<stdio.h>
#include<stdlib.h>
int array[100];
void merge(int input[],int first,int mid,int mid1,int last)
{
int temp[100];
int k = first,i,j;
i = first;
while (first <= mid && mid1 <= last)
{
if (input[first] < input[mid1])
{
temp[k] = input[first];
printf("%d -> %d ",first,input[first]);
printf("\n");
printf("%d -> %d ",k,temp[k]);
k = k+1;
first = first+1;
}
else
{
temp[k] = input[mid1];
printf("%d -> %d ",mid1,input[mid1]);
printf("%d -> %d ",k,temp[k]);
k = k+1;
mid1 = mid1+1;
}
}
while (first <= mid)
{
temp[k] = input[first];
printf("%d -> %d ",first,input[first]);
printf("%d -> %d ",k,temp[k]);
k = k+1;
first = first+1;
}
while (mid1 <= last)
{
temp[k] = input[mid1];
printf("%d -> %d ",mid1,input[mid1]);
printf("%d -> %d ",k,temp[k]);
k = k+1;
mid1 = mid1+1;
}
printf("\n sorted ");
for(;i<=last;i++)
{
printf("%d -> %d ",i,temp[i]);
array[i] = temp[i];
}
}
void merge_sort(int input[],int start,int end)
{
int mid;
printf("\n");
for(int i=start;i<=end;i++)
{
printf(" %d",input[i]);
}
printf("\n");
if (start<end)
{
mid = (start+end)/2;
merge_sort(input,start,mid);
merge_sort(input,mid+1,end);
merge(input,start,mid,mid+1,end);
}
}
int main()
{
int size,i;
printf("Enter size of array\n");
scanf("%d",&size);
printf("Size->%d\n",size);
if(size > 100)
{
printf("Array size is greater that limit 100. Exiting program.\n");
exit(0);
}
printf("Enter elements of array\n");
for(int i=0;i<size;i++)
{
scanf("%d",&array[i]);
}
printf("Array before sort:\t");
for(i=0;i<size;i++)
{
printf("%d ",array[i]);
}
printf("\n");
merge_sort(array,0,size-1);
printf("\n final sorted array \n");
for(i=0;i<size;i++)
{
printf("%d ",array[i]);
}
}
