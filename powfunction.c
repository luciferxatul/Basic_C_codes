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
  int a,b,c;
  printf("\nEnter the number");
  scanf("%d",&a);
  printf("\nEnter the power of the number");
  scanf("%d",&b);
  po=power(a,b);
  printf("%d to the power %d is %d",a,b,c);
  return 0;
}
