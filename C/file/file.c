#include<stdio.h>

int main(){
	char filename[1000];
	printf("Enter the file you want to open\n");
	scanf("%s",filename);
	FILE *fp;
	fp=fopen(filename,"r");
	if(fp){
		printf("THe file exists \n");
	}else{
		printf("THe file dpes not exist \n");
	}

	int c;
	while((c= fgetc(fp))!=EOF){
		putchar(c);
	}
	return 0;
}