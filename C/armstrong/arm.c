#include<stdio.h>
#include <math.h>



int main()
{	
	int candidate;
	int count=0;
	int c=0;

	int add=candidate;

	while(add!=0){
		add=add/10;	
		++count;
	}

		


	while(add!=0){
		int b;
		b=add%10;
		printf("The value is %d\n",b); 	//prints the value of digits in reverse 
		add=add/10;
		c=c+pow(b,count);
	}

	

printf("%d\n",c);

if(c==candidate){
	printf("is_armstrong_number(%d)\n",c);
}
return 0;

}







