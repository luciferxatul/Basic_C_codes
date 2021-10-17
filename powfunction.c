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
  int p,po,pn;
  printf("\nEnter the number");
  scanf("%d",&p);
  printf("\nEnter the power of the number");
  scanf("%d",&po);
  po=power(p,po);
  printf("%d to the power %d is %d",p,po,pn);
  return 0;
}
