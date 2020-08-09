#include <stdio.h>

int a;
void func_scan();
void func_print();
int func_even();
int cal(int z);

int main(){
	int val;
	printf("Enter a number to store in a \n");
	func_scan();
	func_print(a);
	printf("The remainder is %d",func_even());
	printf("\n");
	val=cal(a);
	printf("The sum when 5 is added  is %d\n",val);
	return 0;

}


//Function without argument and without return type 
void func_scan(){
	scanf("%d",&a);
}

//Function with argument without return type 
void func_print(int x){
	printf("THe entered number is %d\n",x);
}

//Function without argument with return value
int func_even(){

	int even = a;

	if(a%2==0){
//		printf("Fucntion value is %d\n",even);
		return a;
	}else{
		printf("This is odd\n");
		return 0;
		printf("Printing after return !\n");

	}
}

//function with argument and return type 
int cal(int z){
int add=5;
int sum;
sum=add+z;
return sum;
}