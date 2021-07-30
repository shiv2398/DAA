#include<stdio.h>
int main()
{
       int n;
        scanf("%d",&n);
        while(n--)
        {
                int size,i;
                scanf("%d",&size);
                int arr[size];
                for(i=0;i<size;i++)
                {
                   scanf("%d",&arr[i]);
                }
    int k,j,cmp=0,l,d,c;
    int m=sizeof(arr)/sizeof(int);
    for(i=0;i<m;i++)
    {
        for(j=i+1;j<m;j++)
        { int x=arr[i]+arr[j];

           for(k=0;k<m;k++)
            {
              if(x==arr[k])
                {
                cmp++;
                l=i+1;
                d=j+1;
                c=k+1;
                }
            }
        }
    }
    if(cmp)
    {
     printf("%d,%d,%d\n",l,d,c);
    }
    else
        printf("No Sequence found");
             
    }
}

