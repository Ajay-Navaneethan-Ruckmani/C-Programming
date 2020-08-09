#include <stdio.h>
int main()
{
	int n;
	int i;
	printf("Enter a number to check its factorial\n");
	scanf("%d",&n);
	i=1;
	
	if(i<=n){
		int b;
		b=n%2;
		printf("%d\n",b);

	}
	i++;
return 0;
}