#include<stdio.h>
void quicksort(int a[],int,int);
int split(int a[],int,int);
int a[30];
void main()
{
    int i,n,upper,lower=0;
    printf("Supply the no of Elements :\n");
    scanf("%d",&n);
    printf("Supply the Elements -\n");
    for(i=0;i<n;i++)
       scanf("%d",&a[i]);
    upper=n-1;
    quicksort(a,lower,upper);
    printf("\n\n After Sorting : \n");
    for(i=0;i<n;i++)
        printf("%d\t",a[i]);
}
void quicksort(int a[],int lower,int upper)
{
    int i;
    if(upper>lower)
    {
        i=split(a,lower,upper);
        quicksort(a,lower,i-1);
        quicksort(a,i+1,upper);
    }
}
int split(int a[],int lower,int upper)
{
    int i,p,q,t;
    p=lower+1;
    q=upper;
    i=a[lower];
    while(q>=p)
    {
        while(a[p]<=i)
            p++;
        while(a[q]>i)
            q--;
        if(q>=p)
        {
            t=a[p];
            a[p]=a[q];
            a[q]=t;
        }
    }
    t=a[lower];
    a[lower]=a[q];
    a[q]=t;
    return q;
}
