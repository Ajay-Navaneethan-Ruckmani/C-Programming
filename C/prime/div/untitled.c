#include <stdio.h>
int main()
{

	
	int number;

	printf("Enter a number to check its factorial\n");
	scanf("%d",&number);
	printf("The factorial of %d  are : \n",number);

	for (int i = 1; i <= number; i++)

	{
		
		if (number %  i==0)
		{
			printf(" %d",i);
		}


	}

printf("\n");
return 0;
}

 