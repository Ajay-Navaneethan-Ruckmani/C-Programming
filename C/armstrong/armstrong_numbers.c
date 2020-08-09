#include "armstrong_numbers.h"

#include<stdio.h>

int main()
{
	int armstrong_number;
	

	int count=0;

	printf("the armstrong_number is %d\n",armstrong_number);

//	b=armstrong_number; //We intinalise a value to b temporarily for counting the digits

	while(armstrong_number!=0){
		armstrong_number=armstrong_number/10;

		++count;

	}
printf("The digit is %d\n",count);

return 0;

}
