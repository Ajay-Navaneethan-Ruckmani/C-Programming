#include <stdio.h>
#include <string.h>

int main(void)
{
char string1[30];
int val,i;
char reversed[30];
printf("Enter a string \n");
fgets(string1)
 long int length; 
 length = strlen(string1);
printf("%d\n",length);
//Reverse string
for(i=0; i<length; ++i)
{
    reversed[length-i-1] = string1[i];
}

val=strcmp(string1,reversed);
if(val==0){
	printf("Its a palindrome\n");
}else{
	printf("ITs not palindrome\n");
}

return 0;
}