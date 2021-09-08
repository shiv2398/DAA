#include<stdio.h> 
static int count=0;
static int swap=0; 

void swap_elements(int* first, int* second) 
{   
    swap++;
	int temp = *first; 
	*first = *second; 
	*second = temp; 
} 
int partition_function(int arr[], int l, int h) 
{ 
	int p = arr[h]; 
	int i = (l - 1);  

	for (int j = l; j <= h- 1; j++) 
	{
	    
		if (arr[j] < p) 
		{
		    count++;
			i++; 
			swap_elements(&arr[i], &arr[j]);
		} 
	} 
	swap_elements(&arr[i + 1], &arr[h]); 
	return (i + 1);   
} 

void quick_sort(int arr[], int l, int h) 
{
    count++;
	if (l < h) 
	{ 
		int p_index = partition_function(arr, l, h); 
		quick_sort(arr, l, p_index - 1); 
		quick_sort(arr, p_index + 1, h); 
	} 
} 
int main() 
{ 
    int t;
    scanf("%d",&t);
while(t--){
    int n,i;
    scanf("%d",&n);
	int array[n];
	for(i=0;i<n;i++)
	{
	 scanf("%d",&array[i]);
	}
    quick_sort(array, 0, n-1); 
	printf("comparisons %d\n",count);
	printf("swaps %d\n",swap);
}
	return 0;
} 
