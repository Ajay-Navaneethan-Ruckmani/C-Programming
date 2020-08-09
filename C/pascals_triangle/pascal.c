#include<stdio.h>
#include<math.h>

int main(){

	long int n;
	printf("How many rows of pascals triangles is required ? \n");
	scanf("%ld",&n);
	printf("The pasacal triangle with %ld rows are : \n",n);
	printf("\n");
	for(int i=0; i<=(n-1); i++){

		long int power;
		power=pow(11,i);
		printf("\t %ld\n",power);

	}
printf("\n");
return 0;

}		

//WHile comiling add -lm since 
//The error you are seeing: error: ld returned 1 exit status is from the linker ld (part of gcc that combines the object files) because it is unable to find where the function pow is defined.

//Including math.h brings in the declaration of the various functions and not their definition. The def is present in the math library libm.a. You need to link your program with this library so that the calls to functions like pow() are resolved.

