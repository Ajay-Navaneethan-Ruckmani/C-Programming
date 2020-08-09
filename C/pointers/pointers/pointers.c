#include<stdio.h>

int main(){
	int i=5;
	int *p;

	p=&i;

	printf("Value stored in i is %d\n", i);
	printf("Value stored in p is address of i (%p),which is %p \n\n",p,&i);
	printf("value pointed by p is %d\n",*p);
	printf("Addr of pointer p is %p\n\n",&p);
	return 0;

}
