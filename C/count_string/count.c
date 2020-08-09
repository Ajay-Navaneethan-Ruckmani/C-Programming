#include<stdio.h>
#include<ctype.h>
#include<string.h>
int main(){

	printf("\n");
//	printf("Enter number of words that you will use in a sentence: ");
//	scanf("%d",&n);
	char a[10][20];

	//reading string from user 
	printf("Enter words for your sentence:  ");

	scanf("%s[^\n]",a[i]);
	
//For finding the count 

	int n;
	int i=0;
	int count=0;

	while(a[i]!='\0'){


		//check if the string is ta line enter or space
		if((a[i]=='' || a[i]=='\n' || a[i]=='\t' )){
			count++;

		}
		i++;

	}


printf("The number of words you have\n");