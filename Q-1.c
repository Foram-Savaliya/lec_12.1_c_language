#include<stdio.h>
#include<string.h>

struct student{
	int stu_id;
	char stu_name[10];
	int stu_age;
	char stu_course[20];
	char stu_city[20];
	int stu_standard;
	char stu_school[20];
};

void main()
{
	struct student s1;
	struct student s2;
	struct student s3;
	
	//student 1
	s1.stu_id=101;
	printf("%d\n",s1.stu_id);
	
	printf("Enter your name:- ");
	scanf("%s",&s1.stu_name);	
	
	printf("Enter your course:- ");
	scanf("%s",&s1.stu_course);
		
	printf("Enter your age:- ");
	scanf("%d",&s1.stu_age);
		
	printf("Enter your city:- ");
	scanf("%s",&s1.stu_city);
		
	printf("Enter your standard:- ");
	scanf("%d",&s1.stu_standard);
		
	printf("Enter your school:- ");
	scanf("%s",&s1.stu_school);
	
	printf("\n");
	printf("id is %d\n",s1.stu_id);
	printf("name is %s\n",s1.stu_name);
	printf("course is %s\n",s1.stu_course);
	printf("age is %d\n",s1.stu_age);
	printf("city is %s\n",s1.stu_city);
	printf("standard is %d\n",s1.stu_standard);
	printf("school is %s\n\n",s1.stu_school);
	
	
	//student 2
	s1.stu_id=102;
	printf("%d\n",s2.stu_id);
	
	printf("Enter your name:- ");
	scanf("%s",&s2.stu_name);	
	
	printf("Enter your course:- ");
	scanf("%s",&s2.stu_course);
		
	printf("Enter your age:- ");
	scanf("%d",&s2.stu_age);
		
	printf("Enter your city:- ");
	scanf("%s",&s2.stu_city);
		
	printf("Enter your standard:- ");
	scanf("%d",&s2.stu_standard);
		
	printf("Enter your school:- ");
	scanf("%s",&s2.stu_school);
	
	printf("\n");
	printf("id is %d\n",s2.stu_id);
	printf("name is %s\n",s2.stu_name);
	printf("course is %s\n",s2.stu_course);
	printf("age is %d\n",s2.stu_age);
	printf("city is %s\n",s2.stu_city);
	printf("standard is %d\n",s2.stu_standard);
	printf("school is %s\n\n",s2.stu_school);
	
	
//	student 3
	s1.stu_id=103;
	printf("%d\n",s3.stu_id);
	
	printf("Enter your name:- ");
	scanf("%s",&s3.stu_name);	
	
	printf("Enter your course:- ");
	scanf("%s",&s3.stu_course);
		
	printf("Enter your age:- ");
	scanf("%d",&s3.stu_age);
		
	printf("Enter your city:- ");
	scanf("%s",&s3.stu_city);
		
	printf("Enter your standard:- ");
	scanf("%d",&s3.stu_standard);
		
	printf("Enter your school:- ");
	scanf("%s",&s3.stu_school);
	
	printf("\n");
	printf("id is %d\n",s3.stu_id);
	printf("name is %s\n",s3.stu_name);
	printf("course is %s\n",s3.stu_course);
	printf("age is %d\n",s3.stu_age);
	printf("city is %s\n",s3.stu_city);
	printf("standard is %d\n",s3.stu_standard);
	printf("school is %s\n",s3.stu_school);
	
	
}
