//GCD of 2 Numbers.

#include<stdio.h>
#include<stdlib.h>
int main()
{
int a,b,gcd;
printf("\nEnter two numbers : ");
scanf("%d %d",&a,&b);
int i;
for(i = 1; i <= a && i <= b; i++)
{
if((a % i == 0) && (b % i == 0))
{
gcd = i;
}
}
printf("\nGCD of %d and %d is %d ",a,b,gcd);
printf("\n");
return 0;
}



//Using Recursion.

/*#include <stdio.h>

int gcd(int a, int b)
{
if (b != 0)
return gcd(b, a % b);
else
return a;
}

int main()
{
int a, b;
printf(“Enter two numbers: “);
scanf(“%d %d”, &a, &b);

printf(“\nGCD of %d and %d is %d\n”, a, b, gcd(a,b));
return 0;
}
*/
