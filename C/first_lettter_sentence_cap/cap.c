#include<stdio.h>
#include<ctype.h>
#include<string.h>
int main(){
	int n;
	printf("\n");
	printf("Enter number of words that you will use in a sentence: ");
	scanf("%d",&n);
	char a[10][20];

	//reading string from user 
	printf("Enter %d  words for your sentence:  ",n);

	for(int i=0; i<n; i++){
		scanf("%s[^\n]",a[i]);
	}

	printf("\n");
	printf("Your capitalised  sentence is : ");
	
	for(int i=0; i<n; i++){
		printf("%c",toupper(a[i][0]));

		int length=strlen(a[i]);

		for(int j=1; j<length; ++j){
		printf("%c",a[i][j]);
		//printf("%c",a[i][2]);
		}
		printf(" ");
	}
	printf("\n");
	printf("\n");
	return 0;

}

