#include<stdio.h>
#include<string.h>
struct time
{
    int hr,min,sec;
};

//q1
int is_greater(struct time t1,struct time t2)
{
    if(t1.hr>t2.hr)
    return 1;
    else if(t1.hr<t2.hr)
             return 0;
   else if(t1.min>t2.min) 
            return 1;
     else if(t1.min<t2.min) 
            return 0; 
     else if(t1.sec>t2.sec) 
            return 1; 
   else if(t1.sec<t2.sec) 
            return 0;                       
} 
void f1()
{
    struct time t1={3,25,40},t2={4,10,30},t3;
    if(is_greater(t1,t2))
      {
        if(t1.sec>=t2.sec)
       {
         t3.sec=t1.sec-t2.sec;
         if(t1.min>=t2.min)
         {
           t3.min=t1.min-t2.min ;
            t3.hr=t1.hr-t2.hr;
         }
         else
         {
            t3.min=(t1.min+60)-t2.min;
            t3.hr=(t1.hr-1)-t2.hr;
         }
       }
        else
        {
          t3.sec=(t1.sec+60)-t2.sec;
          if(t1.min-1>=t2.min)
         {
           t3.min=(t1.min-1)-t2.min ;
            t3.hr=t1.hr-t2.hr;
         }
         else
         {
            t3.min=(t1.min+59)-t2.min;
            t3.hr=(t1.hr-1)-t2.hr;
         }
        }
      }
    else
    {
      if(t2.sec>=t1.sec)
       {
         t3.sec=t2.sec-t1.sec;
         if(t1.min>=t2.min)
         {
           t3.min=t2.min-t1.min ;
            t3.hr=t2.hr-t1.hr;
         }
         else
         {
            t3.min=(t2.min+60)-t1.min;
            t3.hr=(t2.hr-1)-t1.hr;
         }
       }
        else
        {
          t3.sec=(t2.sec+60)-t1.sec;
          if(t2.min-1>=t1.min)
         {
           t3.min=(t2.min-1)-t1.min ;
            t3.hr=t2.hr-t1.hr;
         }
         else
         {
            t3.min=(t2.min+59)-t1.min;
            t3.hr=(t2.hr-1)-t1.hr;
         }
    }

    }
    printf("%d, %d, %d",t3.hr,t3.min,t3.sec);
}
struct student
{
  int roll_no;
  char name[20];

};



struct student inputstudent()
{
  struct student s;
  printf("enter the roll no. and name of ten student :");
  scanf("%d",&s.roll_no);
  getchar();
  fgets(s.name,50,stdin);
  s.name[strlen(s.name)-1]='\0';
  return s;
  
}
void display(struct student s)
{
  printf("%d. %s\n ",s.roll_no,s.name);
}

void inputnstudent(struct student s[],int n)
{
  int i;
  for(i=0;i<n;i++)
  s[i]=inputstudent();
}
void displaynstudent(struct student s[],int n)
{
  int i;
  for(i=0;i<n;i++)
  display(s[i]);
}


void f2()
{
  
 struct student s[10];
inputnstudent(s,10);
displaynstudent(s,10);

}
void f3()
{
  int n;
  printf("enter the number of students : ");
  scanf("%d",&n);
 struct student s[n];
inputnstudent(s,n);
displaynstudent(s,n);
}

struct marks
{
  int roll_no;
  char name[20];
  int chem_mark,maths_mark,phy_mark;
  float percentage;

};


void f4() {
    int i;
    struct marks x[2];
    printf("Enter the roll no, name, chem, maths, and phy marks for 2 students:\n");
    for (i = 0; i < 2; i++)
     {
        scanf("%d", &x[i].roll_no);
        getchar(); 


        fgets(x[i].name, sizeof(x[i].name), stdin);
        x[i].name[strlen(x[i].name) - 1] = '\0'; 

        scanf("%d", &x[i].chem_mark);      

        scanf("%d", &x[i].maths_mark); 

        scanf("%d", &x[i].phy_mark);


        x[i].percentage = (x[i].chem_mark + x[i].maths_mark + x[i].phy_mark) / 3.0;
    }

    // Print details of entered students
    printf("\nStudent Details:\n");
    for (i = 0; i < 2; i++) {
        printf("Roll No.: %d\n", x[i].roll_no);
        printf("Name: %s\n", x[i].name);
        printf("Chemistry Marks: %d\n", x[i].chem_mark);
        printf("Maths Marks: %d\n", x[i].maths_mark);
        printf("Physics Marks: %d\n", x[i].phy_mark);
        printf("Percentage: %.2f\n", x[i].percentage);
        printf("\n");
    }
    
}




int main()
{
  f4();
  return 0;
}

