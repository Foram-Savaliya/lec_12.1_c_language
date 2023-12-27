#include<stdio.h>


struct emp{
	int emp_id;
	char emp_name[100];
	int emp_age;
	char emp_role[100];
	char emp_city[100];
	int emp_experience;
	char emp_companyname[100];
};

int main()
{
	int i,n;
	printf("enter the number of employees:");
	scanf("%d",&n);

	struct emp emp_del[n];

	printf("Enter %d Employee Details \n \n",n);

    for(i=0;i<n;i++)
	{
	  	printf("Employee %d:- \n",i+1);

		printf("Enter the name:");
		scanf("%s",&emp_del[i].emp_name);	   	


		printf("Enter the id:");
		scanf("%d",&emp_del[i].emp_id);

		printf("enter the position:");
		scanf("%s",&emp_del[i].emp_role);	   	

		printf("Enter the cityname:");
		scanf("%s",&emp_del[i].emp_city);	   	

		printf("Enter the companyname:");
		scanf("%s",&emp_del[i].emp_companyname);	   	

		printf("Enter the expericence(years):");
		scanf("%d",&emp_del[i].emp_experience);	   	

		printf("Enter the age of employe:");
		scanf("%d\n\n",&emp_del[i].emp_age);	  
	}

    printf("\t\t\t All Employees Details \n");
    for(i=0; i<n; i++){
        printf("Name : ");
        printf("%s \n",emp_del[i].emp_name);

        printf("Id : ");
        printf("%d \n",emp_del[i].emp_id);

        printf("Position : ");
        printf("%s \n",emp_del[i].emp_role);
        
        printf("City : ");
        printf("%s \n",emp_del[i].emp_city);

		printf("comName: ");
        printf("%s \n",emp_del[i].emp_companyname);

        printf("Experience : ");
        printf("%d \n",emp_del[i].emp_experience);

        printf("age : ");
        printf("%d \n",emp_del[i].emp_age);

        
 
       }



}
