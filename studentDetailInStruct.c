#include<stdio.h>

struct student{
	char name[50];
	int age;
	float mark;
};


int main()
{
	struct student student1,student2;
	printf("enter the details of student1 name,age and mark:\n");
	scanf("%s",student1.name);
	scanf("%d",&student1.age);
	scanf("%f",&student1.mark);
	printf("enter the details of student2 name,age and mark:\n");
	scanf("%s",student2.name);
	scanf("%d",&student2.age);
	scanf("%f",&student2.mark);
	
	printf("\nStudent 1 Information\n");
	printf("name: %s\n",student1.name);
	printf("age: %d\n",student1.age);
	printf("mark: %.2f\n",student1.mark);
	printf("\nStudent 2 Information\n");
	printf("name: %s\n",student2.name);
	printf("age: %d\n",student2.age);
	printf("mark: %.2f\n",student2.mark);
	float avrgMark=(student1.mark + student2.mark)/2;
	printf("\naverage mark of 2 student : %.2f",avrgMark);
	return 0;
		
}
