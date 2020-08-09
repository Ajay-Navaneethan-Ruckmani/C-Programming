#include<stdio.h>
int main(){
	char filename1[1000],filename2[1000];
	char c;
	printf("Enter the file name of file to for your copy\n");
	scanf("%s",filename1);
	FILE *fp1,*fp2;
	fp1=fopen(filename1,"r");
		if(fp1==0){
			printf("PRess any key to exit\n");
		}

	printf("Enter name of file you want to store the copied\n");
	scanf("%s",filename2);
	fp2=fopen(filename2,"w");

	if(fp2==0){
		printf("Any key for fau\n");
	}
		while((c= fgetc(fp1))!=EOF)
		fputc(c,fp2);
		printf("Copied succesfully\n");
	//fprintf(fp1,"file.c");
	fclose(fp1);

	return 0;
}