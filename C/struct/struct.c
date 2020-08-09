#include<stdio.h>

struct salary{
	char employee[50];
	int age;
	float amount;
}person1,person2;

void display(struct salary person1);

int main(){
	
	printf("Enter employee name of person 1 \n");
	scanf("%s",&person1.employee);
	
	printf("Enter age of person1\n");
	scanf("%d",&person1.age);

	printf("Enter the amount of person1 \n");
	scanf("%f",&person1.amount);


	display(person1);
	return 0;

}

void display(struct salary person1){
	printf("name of person1 %s\n",person1.employee);
}