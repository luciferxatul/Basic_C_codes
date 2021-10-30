#include<stdio.h>
int main()
{
    int t,arr[1000001]={0},n;
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
        scanf("%d",&n);
        arr[n]++;
    }
    for(int i=0;i<1000001;i++)
    {
        while(arr[i]>0)
        {
            printf("%d\n",i);
            arr[i]--;
        }
    }
    return 0;
}
