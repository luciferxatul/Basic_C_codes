#include<stdio.h>
#include<math.h>
int power(int n,int p)
{ 
    int res;
    res=pow(n,p);
    return res;
}
int main()
{
  int n,p,po;
  printf("\nEnter the number");
  scanf("%d",&n);
  printf("\nEnter the power of the number");
  scanf("%d",&p);
  po=power(n,p);
  printf("%d to the power %d is %d",n,p,po);
  return 0;
}
