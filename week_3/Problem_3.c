#include<stdio.h>
void heapify(int a[],int i,int n)
{
int l,r,lg,temp;
l=2*i;
r=(2*i)+1;
if(l<=n && a[l]>a[i])
    lg=l;
else
    lg=i;
if(r<=n && a[r]>a[lg])
    lg=r;
if(lg!=i)
{
    temp=a[i];
    a[i]=a[lg];
    a[lg]=temp;
    heapify(a,lg,n);
}
}

void buildmaxheap(int a[],int n)
{
int i;
for(i=n/2;i>=0;i--)
{
heapify(a,i,n);
}
}

void heapsort(int a[],int n)
{
int i,temp;
buildmaxheap(a,n);
for(i=n;i>=1;i--)
{
    temp=a[0];
    a[0]=a[i];
    a[i]=temp;
    n--;
heapify(a,0,n);
}
}

void freq_checker(int arr[],int n)
{
    int i,flag=0;
    for(i=0;i<n;i++)
    { 
        if(arr[i]==arr[i+1])
            flag=1;
    }
    if(flag==1)
        printf("YES");
    else
        printf("NO");
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
     heapsort(arr,size-1);
    freq_checker(arr,size);

    }
        return 0;
}

