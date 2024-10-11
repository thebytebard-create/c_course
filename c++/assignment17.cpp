#include<iostream>
#include<string.h>
using namespace std;
class time 
{
  private :
    int hr,min,sec,s;

  public :
    
    void settime(int hr,int min,int sec)
    {
        this->hr=hr;
        this->min=min;
        this->sec=sec;

    }

     void showtime()
    {
        cout<<" hr="<<hr<<" min="<<min<<" sec="<<sec;
    }

    int gethr()
    {
        cin>>hr;
    }
    int getmin()
    {
        cin>>min;
    }
    int getsec()
    {
        cin>>sec;
    }
    
    void sethr(int x)
    {
        hr=x;
    }
     void setmin(int x)
    {
        min=x;
    }
     void setsec(int x)
    {
        sec=x;
    }


    
     
     bool operator>(time a)
     {
        if(hr>a.hr)
        return true;
        else if(hr<a.hr)
        return false;
        else if(min>a.min)
        return true;
        else if(min<a.min)
        return false;
        else if(sec>a.sec)
        return true;
        else 
        return false;

        return 0;

     }
   

};
time* array(int size)
    {
        return new time[size];
    }

 void sortarray(time p[],int s)
    {
        int i,j;
        time temp;
        for(i=0;i<s;i++)
          for(j=0;j<s;j++)
          {
            time temp;
            if(p[i]>p[j])
            temp=p[i];
            p[i]=p[j];
            p[j]=temp;
          }
    }

void displayarray(time t,int size)
{
    
 for(int i=0;i<size;i++)
  t.showtime();
}

class strin 
{
   private :
    char *p;
    int length;
   public:
     strin()
     {
      p=new char[1];
      *p='a';
     }
     void inputstring()
     {
      char *q=new char[1],ch;
      *q='a';
      int i,j;
      for(i=0;(ch=cin.get())!='\n';i++)
      {
         delete []q;
         q=new char [i+2];
         for(j=0;j<i;j++)
         {
          q[j]=p[j];
         }
         q[j]=ch;
        q[++j]='\0';
         delete []p;
         p=new char [i+2];
         for(j=0;j<i+1;j++)
         {
          p[j]=q[j];
         }
         p[j]='\0';
      } 
    delete []q;
     length=i+1;
     } 
      
      char* returnstring()
      {
        return p;
      }
      int returnlength()
      {
        return length;
      }
     void displaystring()
     {
      for(int i=0;i<length;i++)
      cout<<p[i];
     }
     void uppercase()
     {
      for(int i=0;i<length;i++)
      {
        if(p[i]>='a' && p[i]<='z')
        p[i]=p[i]-32;
      }
     }
      void lowercase()
     {
      for(int i=0;i<length;i++)
      {
        if(p[i]>='A' && p[i]<='Z')
        p[i]=p[i]+32;
      }
     }
};

int main()
{
  strin b;
  
  b.inputstring();
  b.lowercase();
 
  b.displaystring();
  return 0;

}
