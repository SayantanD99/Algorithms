#include<stdio.h>
int arr[30];
int bsearch(int a, int low, int high)
{
    int mid;
    mid=(low+high)/2;
    if(low==high)
    {
        if(a==arr[low])
            return low;
        else
            return 0;
        }
    else if (a==arr[mid])
    {
        return mid;
    }
    else if(a<arr[mid])
    {
        bsearch(a,low,mid-1);
    }
    else if(a>arr[mid])
    {
        bsearch(a,mid+1,high);
    }
    else
        return 0;
}
int main()
{
    int n,i,d,l,h,res;
    printf("\n Enter The Size of the Array : ");
    scanf("%d",&n);
    printf("\n Enter the Array Contents in Ascending Order : \n");
    for(i=0;i<n;i++)
    {
        printf("\n Enter no.%d : ",i+1);
        scanf("%d",&arr[i]);
    }
    printf("\n \n Enter the number you want to search - ");
    scanf("%d",&d);
    l=0;
    h=n;
    res=bsearch(d,l,h);
    if(res==0)
        printf("\n The value entered is not present.");
    else
        printf("\n The value entered is present at %d th position \n",res+1);
    }
