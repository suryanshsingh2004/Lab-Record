// C programe to perform all arithmetic operations
#include<stdio.h>
int main()
{
    int n,m;
    int sum,sub,mul,mod;
    float div;
    printf("Enter two number :");
    scanf("%d %d",&n, &m);
    sum= n+m;
    sub=n-m;
    mul=n*m;
    mod=n%m;
    div=n/m;
    printf("Sum is = %d\n",sum);
    printf("Difference is = %d\n",sub);
    printf("Multiplication is = %d\n",mul);
    printf("Modulus is = %d\n",mod);
    printf("Division is = %f\n",div);

}