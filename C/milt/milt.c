#include<stdio.h>
 int house[8][8] = {};
 int num_of_helis = 0;
 void rescue_ops(int x,int y);
 void print_house();
void initialise_house_matrix(int num);
int count_resuced_hostages();


 int main(){

 	initialise_house_matrix(1);
 	printf("How many helis?");
 	scanf("%d",&num_of_helis);
 	while(num_of_helis>0){
 		int x,y;
 		printf("Enter co-ordinates for %d (x,y):",num_of_helis);
 		scanf("%d,%d",&x,&y);
 		if(x<8 && y<8){
 		rescue_ops(x,y);
 		print_house();
 		//printf("%d hostages rescued so fat..\n",count_resuced_hostages());

 		num_of_helis--;
 	 	}else{
 			printf("Wrong co co-ordinates");
 		}
 	}
 	printf("Total rescued is %d\n",count_resuced_hostages());
 	return 0;
 }


 void print_house(){
 	for(int i=0; i<8; i++){
 		for(int j=0; j<8; j++){
 			printf("%d\t",house[i][j]);
 		}
 	printf("\n");	
 	}
 }


 void initialise_house_matrix(int num){
 	for(int i=0; i<8; i++){
 		for(int j=0; j<8; j++){
 			house[i][j]=num;
 		}
 	}
}

void rescue_ops(int x,int y){

	for(int i=0; i<8; i++){
		house[x][i]=0;
		house[i][y]=0;


	}
}	
	
int count_resuced_hostages(){
	int count=0;

	for (int i = 0; i < 8; i++)
	{
		for(int j=0; j<8; j++){
			if(house[i][j]==0){
				count++;
			}
		}
	}

	return count;

}