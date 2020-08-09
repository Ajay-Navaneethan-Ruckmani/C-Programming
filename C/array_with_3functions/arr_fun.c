#include<stdio.h>
#include<string.h>
void greatest();
void remove_duplicate();
void reverse();

int a[10]={1,2,3,4,4,6,7,8,8,10};

int main(){

	printf("\n");
	greatest();
	reverse();
	remove_duplicate();
	printf("\n");

//for checking the 0s in the array


	return 0;

}


//This function is used to removed any duplicate numbers
void remove_duplicate(){

	//int duplicate=a[0];
	//for(int i=0; i<10; i++){
		for(int i=1; i<10; i++){
			int duplicate=a[i-1];
				if(duplicate==a[i]){ //1=2? 2=3? 3=4? no; if yes > like 2=2-->>
					a[i]=0;
					//printf("The duplicate is %d\n",a[i]);
	//		}		
		}
	}

	int i;
	int j=0;
	int x_updated[100];
	
	for(i=0; i<10; i++){
		if(a[i]!=0){
			x_updated[j++]=a[i];
		}
	}
	printf("duplicate removed array is  : ");
	for(i=0;i<j;i++){
		printf("%d,",x_updated[i]);
	}

	
printf("\n");

}



//This function is to reverse the contents and print them;

void reverse(){

	printf("THe reverse string is ");

	for(int i=9; i>=0; --i){

		printf("%d,",a[i]);
	}
printf("\n");	

}




//This function prints the greatest number in the array a
void greatest(){ 

	int greatest_number=a[0];

	for(int i=1; i<10; i++){
		if(greatest_number<a[i]){

			greatest_number=a[i];

		}
	}

printf("The greatest number is %d\n",greatest_number);

}