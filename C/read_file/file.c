#include<stdio.h>

int main(){

	FILE *in_file;
	int ch;

	in_file = fopen("sample.txt","r");

	if(in_file == NULL){
		printf("Cant open %s for reading \n");
	}else{
		while((ch=fgetc(in_file)) !=EOF){
			printf("%c\n",ch);
		}
		fclose(in_file);
	}
return 0;

}