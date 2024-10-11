#include<iostream>
#include<fstream>
#include<stdlib.h>
#include<string.h>
#include<stdio.h>
using namespace std;
class employee
{
   private:
       int empid;
       char name[30];
       float price;
       static char filename[20];
   public:
       static void setfile(char n[]);
       void input_employee();
       void display_employee();
       void store_employee();
       void view_employee();
       void search(int k);
       void edit(int k);
       void del(int k);
};
void employee::setfile(char n[])
{
  strcpy(filename,n);
  
}
char employee::filename[20];
void employee::input_employee()
{
   cout<<" enter the empid name price : ";
   cin>>empid;
   cin.ignore();
   cin.getline(name,30);
   cin>>price;
}

void employee::display_employee()
{
    cout<<"empid="<<empid<<" name="<<name<<" price="<<price<<endl;
}

 void employee::store_employee()
 {
    ofstream fout;
    fout.open(filename,ios::binary|ios::app);
    fout.write((char*)this,sizeof(*this));
    fout.close();
 }

void employee::view_employee()
{
    ifstream fin;
    fin.open(filename,ios::binary|ios::in);
    if(!fin)
    {
        cout<<"\nfile not found";
    }
    else
    {
    fin.read((char*)this,sizeof(*this));
    while(!fin.eof())
    {
        display_employee();
         fin.read((char*)this,sizeof(*this));
    }
    }
   fin.close();
   
} 

void employee::search(int k)
{
  ifstream fin;
   fin.open(filename,ios::binary|ios::in);
    if(!fin)
    {
        cout<<"file not found";
    }
    else
    {
    fin.read((char*)this,sizeof(*this));
    while(!fin.eof())
    {
        if(empid==k)
        {
            display_employee();
            break;
        }
         fin.read((char*)this,sizeof(*this));
    }
    if(empid!=k)
    {
        cout<<"id is invalid";
    }
    }
   fin.close();
  
}

void employee::edit(int k)
{
  ifstream fin;
  ofstream fout;
  employee e;
  fin.open(filename,ios::binary|ios::in);
  if(!fin)
  {
    cout<<"file not found";
  }
  else
  {
    fout.open("tempfile",ios::binary|ios::out);
    fin.read((char*)&e,sizeof(e));
    while(!fin.eof())
    {
        if(k==e.empid)
        {
            cout<<"enter  correct employee name";
            cin.ignore();
            cin.getline(e.name,30);
            cin>>e.price;
        }
        fout.write((char*)&e,sizeof(e));
        fin.read((char*)&e,sizeof(e));
  }
    remove(filename);
   rename("tempfile",filename);
  }
 fin.close();
}

void employee::del(int k)
{
  ifstream fin;
  ofstream fout;
  fin.open(filename,ios::binary|ios::in);
  if(!fin)
  {
    cout<<"file not found";
  }
  else
  {
    fout.open("tempfile",ios::binary|ios::out);
     fin.read((char*)this,sizeof(*this));
     while(!fin.eof())
     {
       if(empid!=k)
       {
        fout.write((char*)this,sizeof(*this));
       }
         fin.read((char*)this,sizeof(*this));

       }
     }
     remove(filename);
     rename("tempfile",filename);
     fin.close();
     fin.close();

}
int menu()
{
  int choice;
  cout<<"1. new record :";
  cout<<"\n2. edit record :";
  cout<<"\n3. view all record :";
  cout<<"\n4. search a record : ";
  cout<<"\n5. delete a record :";
  cout<<"\n6. exit";
  cout<<"\n enter your choice :";;
  cin>>choice;
  return choice;  
}
int main()
{
   
   employee emp;
   char n[]={"employefile"};
   employee::setfile(n);
   
   int id;
   while(true)
   {
    switch(menu())
    {
      case 1:
         emp.input_employee();
         emp.store_employee();
         break;
      case 2:
         cout<<"enter the employee id  :";
         cin>>id;
        emp.edit(id);
         break;
      case 3:
          emp.view_employee();
          break;
      case 4:
         cout<<"enter the employee id  :";
         cin>>id;
         emp.search(id);
         break;
      case 5:
         cout<<"enter the employee id  :";
         cin>>id;
        emp.del(id);
         break;
      case 6:
        exit(0);
      deafult:
        cout<<"\ninvalid choice";
      
    }
   }
    return 0;
}