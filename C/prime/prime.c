#include<stdio.h>	
int func(int n);
int main(){

		int number;
	
		printf("Enter a number to check if its prime or not \n");

		scanf("%d",&number);

		if (func (number)){  //this function send the number to the below fatorial function
			printf("the number %d is prime \n",number);	
		
		}else{
			printf("the number is not prime \n");
		}

return 0;
	
}



//Program for finding the factorial of the number 
int func(int n)
{
	int e;
	int i;

	i=1;
	
	while(i<=n) //loop the divident 
	{
		if(n%i==0){
			printf("%d ",i);
			
		}
	
	i++;
 	}

return 0;//condition required;
}




