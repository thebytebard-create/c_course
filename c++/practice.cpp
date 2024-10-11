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
   static char filename[30];
   public:
     void inputbook();
     void showbook();
     static void setname(char *n)
     {
        strcpy(filename,n);
        
     }
     void storebook();
     void viewallbooks();
};

char book::filename[30];
void book::storebook()
{
   ofstream fout;
   fout.open(filename,ios::binary|ios::app);
   fout.write((char*)this,sizeof(*this));
   fout.close();
}
void book::viewallbooks()
{
   ifstream fin;
   fin.open(filename,ios::binary|ios::in);
   cout<<fin.tellg();
   if(!fin)
      throw file_not_found;
   fin.read((char*)this,sizeof(*this));
   while(!fin.eof())
   {
      cout<<fin.tellg();
      showbook();
      fin.read((char*)this,sizeof(*this));
      
   }  
}
void book::inputbook()
{
   cout<<"enter bookid,title,price : ";
   cin>>bookid;
   cin.ignore();
    cin.getline(title,20);
   cin>>price;

}

void book::showbook()
{
   cout<<bookid<<" "<<title<<" "<<price<<" ";
}
int menu()
{
   cout<<"1. add new book record\n";
   cout<<"2. display all book records\n";
   cout<<"3. exit\n";
   cout<<"enter your choice : ";
   int choice;
   cin>>choice;
   return choice;
}

int main()
{
   book b1;
   char n[]={"save"};
   book::setname(n);
   while(1)
   {
      switch(menu())
      {
         case 1:
           b1.inputbook();
           b1.storebook();
           break;
         case 2:
         try{
           b1.viewallbooks();
           }
           catch(int e)
           {
              if(e==file_not_found)
              {
               cout<<"file not found";
              }

           }
           break;
         case 3:
            exit(0);
         default:
            cout<<"invalid choice";

      }
   }
  
   return 0;
}