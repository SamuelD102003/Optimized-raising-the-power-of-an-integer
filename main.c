#include <stdio.h>
int integerPower(int base, int exp);
int main(void) {
	int b, e, result,a;
    do {
printf("Enter Integer Base:");
	scanf("%d", &b);
printf("Enter Integer Exponent:");
	scanf("%d", &e);
	result = integerPower(b, e);
printf("%d raised to the power of %d = %d\n\n", b, e, result);
printf("Enter 0 if you'd like to end this program.\n");
printf("Enter 1 if you'd like to run this program again:\n");
      scanf("%d",&a);
    } while (a==1);
  if (a==0)
  {
    printf("Have a nice day!");
  }
  return 0;
}
int integerPower(int base, int exp)
{
	int ans=1,i;
	for(i=0;i<exp;i++)
		{
			ans *= base;
		}
	return ans;
}