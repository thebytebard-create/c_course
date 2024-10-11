#include<stdio.h>
#include<string.h>
//q1
struct employee
{
    int id;
    char name[50];
   float salary;
};
//q2
struct employee data(struct employee e)
{

    printf("enter the id,name and salary : ");
    scanf("%d",e.id);
    fflush(stdin);
    fgets(e.name,50,stdin);
    e.name[strlen(e.name)-1]='\0';
     scanf("%f",e.salary);
   return e;

}

//q3
void display_data(struct employee e)
{
    printf("\n%d %s %f",e.id,e.name,e.salary);
}
//q4
struct employee highest_salary(struct employee e[],int n)
{
    int i;
    struct employee max=e[0];
    for(i=0;i<n;i++)
    {
        if(max.salary<e[i].salary)
        max=e[i];
    }
    return max;
}

//q5
void sort_salary(struct employee e[],int n)
{
    int i,j;
    struct employee temp;
    for(i=0;i<n;i++)
    {
    for(j=i+1;i<n;j++)
    {
        if(e[i].salary>e[j].salary)
       temp=e[i];
       e[i]=e[j];
       e[j]=e[i];
    }
    }
   
}
//q6
void sort_name(struct employee e[],int n)
{
    int i,j;
    struct employee temp;
    for(i=0;i<n;i++)
    {
    for(j=i+1;i<n;j++)
    {
        if(strcmp(e[i].name,e[j].name)>0)
       temp=e[i];
       e[i]=e[j];
       e[j]=e[i];
    }
    }
   
}
int main()
{
    struct employee a,e;
   data(e);
 display_data(e);
    
    return 0;
}
