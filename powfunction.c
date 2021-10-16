#include<stdio.h>
int pow(int n,int p){
    int res=1;
    for(int i=1;i<=p;i++)
        res=res*n;
    return res;
}
int main(){
    printf("2 to the power 4 is %f", pow(2,4));
    return 0;
}
