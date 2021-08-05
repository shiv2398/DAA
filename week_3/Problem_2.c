//******************************************************************************
#include <stdio.h>

void swaps_s(int arr[],int i,int j)
{
    int temp;
    temp=arr[i];
    arr[i]=arr[j];
    arr[j]=temp;
    
}
void selection_sort(int arr[], int n)
{
    int i,temp,cmp=0,sps=0,j;
    for(i=0;i<n-1;i++)
    {
    int min_index=i;
    for(j=i+1;j<n;j++)
    {    cmp++;
        if(arr[j]<arr[min_index])
        {  
            min_index=j;
          
        }
       
    }
     swaps_s(arr,i,min_index);
        sps++;
    }
   printf("comparison=%d,swaps=%d",cmp,sps);
}
int main()
{
    int x,size,i;
   scanf("%d",&x);
    while(x--)
    {
    scanf("%d",&size);
	int arr[size];
	for(i=0;i<size;i++)
	{
	   scanf("%d",&arr[i]);
	}
	selection_sort(arr,size);
    }
	return 0;
}
//******************************************************************************

