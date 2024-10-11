#include<iostream>
#include<fstream>
#include<string.h>
#include<stdlib.h>
#define file_not_found 1
using namespace std;

class book
{
  private:
   int bookid;
   char title[20];
   float price;
   static char filename[20];
  public:
   void inputbook();
   void showbook();
   static void setfile(char *n);
   void storebook();
   void viewbook();
};
void book::viewbook()
{
   ifstream fin;
   fin.open(filename,ios::binary|ios::in);
   if(!fin)
   throw file_not_found;

  fin.read((char*)this,sizeof(*this));
  
  while(!fin.eof())
  {
    showbook();
    fin.read((char*)this,sizeof(*this));
  }

  fin.close();

}
 char book::filename[20];
void book:: storebook()
{
   ofstream fout;
   fout.open(filename,ios::binary|ios::app);
   fout.write((char*)this,sizeof(*this));
   fout.close();

}
 void book::inputbook()
 {
  cout<<"enter bookid title price :"<<endl;
  cin>>bookid;
  cin.ignore();
  cin.getline(title,20);
  cin>>price;

 }
 void book::setfile(char *n)
 {
   strcpy(filename,n);
   
 }

 void book::showbook()
 {
   cout<<bookid<<" "<<title<<" "<<price<<endl;
   
 }
 int menu()
 {
   cout<<"1. add new book record :"<<endl;
   cout<<"2. display all boook record : "<<endl;
   cout<<"3. exit :"<<endl;
   cout<<"enter your choice : "<<endl;
   int choice;
   cin>>choice;
   return choice;
 }

 int main()
 {
   book b1;
   char a[]={"bookfile"};
   book::setfile(a);
   b1.viewbook();
   
   while(true)
   {
      switch(menu())
      {
         case 1:
          b1.inputbook();
          b1.storebook();
          break;
         case 2:
         try
         {
            b1.viewbook();
         }
         catch(int e)
         {
            if(e==file_not_found)
           cout<<"file not found "<<endl;
         }
         
         break;
         case 3:
         exit(0);
         default:
         cout<<"invalid choice"<<endl;
      }

   }
   
   
   return 0;
 }