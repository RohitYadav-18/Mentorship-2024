#include <stdio.h>
 int fac(int n)
 {
    if (n>0)
    return n* fac(n-1);
    else 
    return 1;
 }
int main() 
{    
    int n;
    printf("Enter a number to calculate its factorial: ");
    scanf("%d",&n);
    printf("factorial of the gives number is %d",fac(n));
    return 0;
}
