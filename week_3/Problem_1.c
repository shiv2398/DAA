#include <stdio.h>

int insertionsort(int arr[], int n)
{
	int sps=0,cmp=0,value,j,i;
	for(i=1;i<n;i++)
	{
	    value=arr[i];
	    j=i;
	    cmp+=1;
	    while(j>0 && value<arr[j-1])
	    {
	        arr[j]=arr[j-1];
	        j=j-1;
	        cmp++;
	        sps+=1;
	    }
	    arr[j]=value;
	    
	}
	printf("shift=%d,comparison=%d",cmp,sps);
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
	insertionsort(arr,size);
    }
	return 0;
}

