#include<stdio.h>
#include <math.h>

int main()
{
	int candidate;
	printf("Enter candidate value\n");
	scanf("%d",&candidate);
	int add;
	add=candidate;
	int count=0;
	int c;

	while(candidate!=0){
		candidate=candidate/10;	
		++count;
	}

 	while(add!=0){
		int b;
		c=0;
		b=add%10;
		printf("The value is %d\n",b); 	//prints the value of digits in reverse 
		add=add/10;
		c=c+pow(b,count);
	}

	

printf("%d\n",c);

if(c==candidate){
	printf("Is an armstrong number \n");
}else{
	printf("Its not an armstrong number\n");
}

return 0;

}







