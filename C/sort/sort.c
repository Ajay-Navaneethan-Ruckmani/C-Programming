//Sorting an array 

#include <stdio.h>
int main(){
	int a[4]={2,11,3,1};
	int i,j,temp;
	for(i=0; i<sizeof(a)/sizeof(int); i++){
		for(j=i+1; j<sizeof(a)/sizeof(int); j++){
			if(a[i]>a[j]){
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;

			} 

		}
	}
	for(int i=0; i<4; i++){
		printf("The sorted arraay is %d\n",a[i]);
	}




return 0;	
}