#include<stdio.h>
#include<math.h>
int power(int n,int p){
  // int res=1;
    //for(int i=1;i<=p;i++)
       // res=res*n;
    int res;
    res=pow(n,p);
    return res;
}
int main(){
  //  printf("2 to the power 4 is %f", power(2,4));
    printf("2 to the power 4 is %d", power(2,4));
    return 0;
}
