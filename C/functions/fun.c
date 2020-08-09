#include<stdio.h>
//int add(int a,int b);
int factorial(int a);
void add();

int main(){


	int x=6;
	printf("the factorial of the number is %d\n",factorial(x));


int factorial(int a){
	if(a==1) return 1;
	
	else 
		return(a*factorial(a-1));
	

}
