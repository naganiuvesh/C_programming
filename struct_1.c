#include<stdio.h>

struct student{
    int roll;
    char name[50];
    float cgpa;
};

int main()
{
    struct student s[3];
    
    for(int i=0;i<3;i++)
    {
        printf("\nEnter your Roll No. : ");
        scanf("%d",&s[i].roll);
        printf("Enter your Name : ");
        scanf("%s",s[i].name);
        printf("Enter your CGPA : ");
        scanf("%f",&s[i].cgpa);
    }

    for(int i=0;i<3;i++)
    {
        printf("\n\nStudent %d", i+1);
        printf("\n Roll No. is %d",s[i].roll);
        printf("\n Name is %s",s[i].name);
        printf("\n CGPA is %f",s[i].cgpa);
    }

    return 0;
}
