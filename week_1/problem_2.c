#include<stdio.h>
void main()
{
        int n;
        scanf("%d",&n);
        while(n--)
        {
		int size,i,x,flag=0,cmp=0,mid=0,start,end;
                scanf("%d",&size);
                int arr[size];
                for(i=0;i<size;i++)
                {
                   scanf("%d",&arr[i]);
                }
                scanf("%d",&x);
                start=0;
		end=size-1;
                while(start<=end)
		{      
			mid=(start+end)/2;
			cmp++;
			if(arr[mid]==x)
			{
			flag=1;
			break;
			}
			else if(arr[mid]<x)
			{
				start=mid+1;
			}
			else
				end=mid-1;
                }
                if(flag)
                        printf("Present %d",cmp);
                else
                        printf("Not Present %d",cmp);
        }
}
