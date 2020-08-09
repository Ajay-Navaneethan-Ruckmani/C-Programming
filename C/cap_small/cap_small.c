#include <stdio.h>
#include <string.h>
#include <ctype.h>
int string_length(char x[]);
void print();
int to_lower(char y[]);
int to_upper(char z[]);
int length;
void error();

int main(){
        char a[1000];
        print();
        printf("Enter a word in either full uppercase or lowercase to display it vice versa.\n");
        printf("Note:Please give correct inputs.Either every input string in uppercase or every input string in lowercase \n");
        print();
        scanf("%s",a);
        length=string_length(a);
        int i=0;
        print();
        
        if(a[i]>=65 && a[i]<122){

        	if(a[i]>=65 && a[i]<90){

        		to_lower(a);	
        		i++;
     	} else{

        	to_upper(a);

                }
            }

        else{

        	error();
        }

        print();
        return 0;
}


void print(){
        printf("\n");
}


int string_length(char x[]){

	int len;
	len=strlen(x);
	return len;

}

int to_lower(char y[]){

                		printf("The lower case of %s is :\n",y);
                                for(int j=0;j<length;j++){
                                        printf("%c",tolower(y[j]));

                }

}


int to_upper(char z[]){

	                printf("The upper case of %s is :\n",z);
                        for(int k=0; k<length; k++){
                                printf("%c",toupper(z[k]));
	}
}	


void error(){
	printf("You have not entered an alphabet :(");
}
