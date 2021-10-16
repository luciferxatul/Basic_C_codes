#include<stdio.h>
#include<math.h>
int main()
{
    double j1,j2,sqD,D,a,b,c; //sqD is  floating value of square root of D//
    printf("enter the values of a b and c of a quardratic eqn.\n");
    scanf("%lf %lf %lf", &a,&b,&c);
    printf("your eqn is : \n%0.1lfx^2+%0.1lfx+%0.1lf\n", a,b,c);
    D=(b*b)-(4*a*c);
    sqD=sqrt(D);
    if (D<0)
    {
       printf("roots are imaginary");

    }
    else
    {
       j1=(-b+sqD)/2*a;
       j2=(-b-sqD)/2*a;
 
       printf("roots of the given eqn. are %lf,%lf", j1,j2);
    }
    
return 0;
    
}
