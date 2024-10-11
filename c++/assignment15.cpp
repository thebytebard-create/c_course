#include<iostream>
#include<string.h>
using namespace std;
class complex 
{
   private :
    int a,b;
    public :
     void setdata(int x,int y) {a=x;b=y;}
     void displaydata(){cout<<"a="<<a<<" b="<<b;}
     friend complex operator-(complex);
};
 complex operator-(complex c)
 {
    complex temp;
    temp.a=-c.a;
    temp.b=-c.b;
 }
class integer 
{
    private :
    int a;
    public:
    
    void setdata(int x)
    {
        a=x;
    }
       friend  bool operator!(integer);
       friend  bool operator==(integer,integer);

};

 bool operator!(integer a)
 {
    return !(a.a);
 }

 bool operator==(integer a,integer b)
 {
    
    return a.a==b.a;
 }

 class coordinate 
 {
   private :
   int x,y;
   public:
   coordinate():x(0),y(0){}
   coordinate(int a,int b):x(a),y(b){}
    coordinate operator,(coordinate a)
    {
       return a;
    }
   

   friend ostream& operator<< (ostream& , coordinate );
friend istream& operator>>(istream& , coordinate );


 };
 ostream& operator<< (ostream&cout , coordinate c )
 {
    cout<<" x="<<c.x<<" y="<<c.y;
    return cout;
 }
 istream& operator>> (istream&cin , coordinate c )
 {
    cin>>c.x>>c.y;
    return cin;
 }

 class student 
 {
    private :
        int roll_no,age;
        char name[20];
    public :

         void setdata(int x,char n[],int y)
         {
            roll_no=x;
            strcpy(name,n);
            age=y;
         }
          void displaydata()
         {
            cout<<" roll no="<<roll_no;
            cout<<" name="<<name;
            cout<<" age="<<age;
         }

          bool operator==(student s)
         {
            if(age==s.age && roll_no==s.roll_no && strcmp(name,s.name)==0)
            return true;
            else
            return false;
         }    

 };
 int main()
 {
    complex a,b;
   a.setdata(5,6);
   b=a;
    
    return 0;

 }