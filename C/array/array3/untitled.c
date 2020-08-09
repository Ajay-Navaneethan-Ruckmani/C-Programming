#include<stdio.h>

int main(){

int array[20]={20,4,13,87,92,43,22};

int greatest_number;

greatest_number=array[0];



for (int i = 1; i < sizeof(array)/sizeof(int); i++)
{
	if(greatest_number<array[i]){
		greatest_number=array[i];

	}

}
printf("%d\n",greatest_number);
return 0;
}


//here each number is compared with the other and if its true ie.the grreater number is assigned to the true value.If its false thee number that was used 
//to compare is the greatest
//the vice versa of the the > is for smallest number
