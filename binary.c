#include <stdio.h>
#define max 50
int bin_srch(int a[],int n,int data)
{
    int i,l=0,r=n-1;
    while(r>=l)
	{
        int mid=(r+l)/2;
        if(data>a[mid])
        l=mid+1;
        else if(data<a[mid])
        r=mid-1;
        else
        return mid;
    }
    return -1;
}

int main(){
    int a[max],n,data,min,i,j;
    printf("Enter the number of items in the array: ");
    scanf("%d",&n);
    printf("Enter the elements of the array: ");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        min=i;
        for(j=i+1;j<n;j++){
            if(a[min]>a[j])
            min=j;
        }
        if(min!=i){
        int t=a[i];
        a[i]=a[min];
        a[min]=t;
        }
    }
    printf("Sorted array is: ");
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    printf("\n"); 
    printf("Enter the item to be searched: ");
    scanf("%d",&data);
   
    printf("The index is %d",1+bin_srch(a,n,data));
}
