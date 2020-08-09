#include <stdio.h>
int main()
{

	int n,i,j;
	int z;
	z=0;
	printf("How many numbers do you want to be printed ?\n");
	
	scanf("%d",&n);
	printf("\n");
	printf("The Prime numbers under %d are :\n",n);

	for(i=2;i<=n;i++)
	{
	for(j=1;j<=i;j++) 
	{
		if(i%j==0){
			z++; 
			} 
			
		}
	 
 	
 	if(z==2){
 		printf("\n");
 		printf("%d \n",i);
 	}
 		z=0;
 
 	
}

return 0;
}

