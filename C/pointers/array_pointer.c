#include<stdio.h>
int main(){
	int i;
	char c_array[5]="abcde";
	char d_array[5]="hello";
	
	char *c_ptr;
	char *d_ptr;
	
	c_ptr = c_array;
	d_ptr = d_array;

	printf("c_array %s\n",c_array);
	printf("c pointer %p\n",c_ptr);
	printf("d_array is %s\n",d_array);
	printf("d_pointer  is %p\n",d_ptr);
	return 0;
}
