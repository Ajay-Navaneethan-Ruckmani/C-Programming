#include <stdio.h>

int main(){
	char str[10];
	printf("Enter the string\n");
	//gets(str,10,stdin);
	fgets(str,10,stdin);
	int asci=atoi(str);
	printf("%d\n",str);

	puts(str);
	return 0;

}
