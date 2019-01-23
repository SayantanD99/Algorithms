#include<stdio.h>
int a[30];
void merge(int a[],int low,int mid,int high)
{
    int h,i,j,k,b[30];
    h=low;
    i=low;
    j=mid+1;
    while((h<=mid)&&(j<=high))
    {
        if(a[h]<=a[j])
        {
            b[i]=a[h];
            h=h+1;
        }
        else
        {
            b[i]=a[j];
            j=j+1;
        }
        i=i+1;
    }
    if(h>mid)
    {
        for(k=j;k<=high;k++)
        {
            b[i]=a[k];
            i=i+1;
        }
    }
    else
    {
        for(k=h;k<=mid;k++)
        {
            b[i]=a[k];
            i=i+1;
        }
    }
    for(k=low;k<=high;k++)
    {
        a[k]=b[k];
    }

}
int mergesort(int a[],int lower,int upper)
{
    int mid;
    if(upper>lower)
    {
        mid=(lower+upper)/2;
        mergesort(a,lower,mid);
        mergesort(a,mid+1,upper);
        merge(a,lower,mid,upper);
    }
    return 0;
}
void main()
{
    int i,n,lower=0,upper;
    printf("\n Enter the Size of the Array : ");
    scanf("%d",&n);
    printf("\n Enter the Array Contents :\n\n");
    for(i=0;i<n;i++)
    {
        printf("\n Enter no. %d : ",i+1);
        scanf("%d",&a[i]);
    }
    upper=n-1;
    mergesort(a,lower,upper);
    printf("\n After Sorting :\n");
     for(i=0;i<n;i++)
    {
       printf("%d \t",a[i]);
    }

}
