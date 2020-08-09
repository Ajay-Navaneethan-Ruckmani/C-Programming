#include<stdio.h>
#include<ctype.h>
int main(){
	char a;
	printf("Enter one word to check if its an alphabet\n");
	printf("\n");
	scanf("%c",&a);

	//int c;

	//It converts the input into one ascii values so that we can use it in switch
	/*if(a>=65 && a<=90){
		c=a;
	}else{
		c=toupper(a);
	}
*/

	switch(a){

		case 'A' :
			printf("Its a vowel\n");
			break;

		case 'E' : 
			printf("Its a vowel\n");
			break;

		case 'I':
			printf("Its a vowel\n");
			break;

		case 'O' :
			printf("Its a vowel \n");
			break;

		case 'U' :
			printf("Its a vowel\n");
			break;

		default :
			printf("Its not a vowel\n");
			break;	

	}
	printf("\n");

	return 0;
}