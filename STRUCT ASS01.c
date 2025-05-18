#include<stdio.h>
struct student
{
    char name[20];
    char division [20];
    int rollno;
   
};
int main()
{
    int i;
    struct student a[20];
    printf("Enter student details");
    for(i=0;i<3;i++){
    printf("Enter student name");
    scanf("%s",a[i] .name);
     printf("Enter student division");
    scanf("%s", a[i].division);
     printf("Enter student roll no");
    scanf("%d",&a[i].rollno);
    }
     for(i=0;i<3;i++)
     {
     printf("Student name is %s",a[i].name);
     printf("Student division is %s",a[i].division);
     printf("Student roll no is %d",a[i].rollno);}
     return 0;
}