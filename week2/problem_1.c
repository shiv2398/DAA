#include<stdio.h>
int main()
{
        int n;
        scanf("%d",&n);
        while(n--)
        {
                int size,i,x,mid=0,cmp=0,flag;
                scanf("%d",&size);
                int arr[size];
                for(i=0;i<size;i++)
                {
                   scanf("%d",&arr[i]);
                }
                scanf("%d",&x);
               int start=0;
               int end=size-1;
               while(start<=end)
                {
               mid=(start+end)/2;
               if(arr[mid]==x)
               {
                flag=1;
                for(i=0;i<size;i++)
                {
               if(arr[i]==arr[mid])
                        cmp++;
                 }
                break;
               }
               else if(arr[mid]<x)
               {
               start=mid+1;

               }
              else
              {
                end=mid-1;
              }
              }
            if(flag)
                printf("%d-%d",x,cmp);
            else
                printf("key Not Present");
        }
        
   return 0;
}
