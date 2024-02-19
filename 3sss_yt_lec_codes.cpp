#include <iostream>
#include <conio.h>
#include <cstring>
using namespace std;

// 15-pointer--

//  m1--
/*
 class Box
 {
    private:
     int l,b,h;
    public:
     void setDimension(int x, int y,int z)
     {
        l=x;b=y;h=z;
     }
      void showDimension()
     {
        cout<<"l=\n"<<l<<"b=\n"<<b<<"h=\n"<<h;
     }

 };

 int main()
 {
    Box smallBox;
    smallBox.setDimension(12,10,5);
    smallBox.showDimension();
 }
 */

// m2--
/*
class Box
 {
    private:
     int l,b,h;
    public:
     void setDimension(int x, int y,int z)
     {
        l=x;b=y;h=z;
     }
      void showDimension()
     {
        cout<<"l="<<l<<"  " <<"b="<<b<<"  "<<"h="<<h;
     }

 };

 int main()
 {
    Box *p,smallBox;
    p=&smallBox;
    p->setDimension(12,10,5);
    p->showDimension();
 }
 */

// this pointer--
/*
  class Box
 {
    private:
     int l,b,h;
    public:
     void setDimension(int l, int b,int h)
     {
        this->l=l;this->b=b;this->h=h;
     }
      void showDimension()
     {
        cout<<"l="<<l<<"b="<<b<<"h="<<h;
     }

 };

 int main()
 {
    Box smallBox;
    smallBox.setDimension(12,10,5);
    smallBox.showDimension();
 }
 */

// 16.1--new and select--

// 17-- method overloading,overriding,hiding

// code: It is a pseudocode
/*
class A
{
   public:
   void f1( )  {  }
   void f2( )  {  }
};

class B:public A
{
   void f1() { }  //method overriding

   void f2(int x) {  }   //method hiding
};

void main()
{
   B obj;
   obj.f1(); //error
   obj.f2(); //B


}

*/

/*EARLY BINDING-----jaise hi obj.f1() likha ye compiler ki duty hai ki KONSA WALA FI CHAle and jo version chalna chaihe usko is call ke sath kr diya jayega bind.

                     so wo ye karta aise hai ki object ka class dekhaga and us class main fn dhundega and agr mila to wahi bind karega and if no then parent class main search karega
*/

/*    FUNCTION OVERLOADING---- agr fn nam same and differ in argu ek ver parent main ek ver child main (ie in diff class) then its not fun overloading its function hiding / method hiding

                               so,for that all fun must be in same class
*/

/*

class car
{
   public:
   void shiftgear()  { }
   void f2() {}
};
class sportscar:public car
{
  void shiftgear() {     }      //method overriding
  void f2(int x) {}   //mehod hiding
};
void main()
{
   sportscar obj;
   obj.shiftgear();   //sportscat

   //obj.gearchange();  //sportscar

  //sportscar cant have 2 mechanosms for changing the gear so we will use method overriding

   obj.f2();    //error
   obj.f2(4);   //B
}

*/

// 18-- Virtual functions
/*
class A
{
   public:
   void f1()   {  }
};

class B : public A
{
    public:
       void f1()   {  } //functiom overriding
       void f2()   {  }
};

void main()
{
   A *p,o1;
   B o2;
   //p=&o1;
   p=&o2;

   o2.f1(); //B

   p->f1();  //A

}
*/

/*
class A
{
   public:
   virtual void f1()   {  }
};

class B : public A
{
    public:
       void f1()   {  } //functiom overriding
       void f2()   {  }
};

void main()
{
   A *p,o1;
   B o2;
   //p=&o1;
   p=&o2;

   p->f1(); //B

}

*/

//  19--Abstract class

// Pure virtual function

// 1) Overide child function
/*
class Person
{
   public:
   virtual void fun()=0;   //pure virtual function
   void f1()
   {

   }
};

class Student :public Person
{
   public:
   void fun()
   {

   }
};

*/

// 2) Child class fumction declared as virtual function

/*
  class Person
  {
   public:
     virtual void fun()=0;  //pure virtualfumction
     void f1()
     {  }

   };
   class Student:public Person
   {
      public:
        virtual void fun()=0;

   };

*/

// 20 -- Template in C++

// 20.1 ----->

/* int big(int a, int b)
   {
      if(a>b)
        return(a);

       else
         return(b);
   }


 double big(double a, double b)
   {
      if(a>b)
        return(a);

       else
         return(b);
   }

   int main()
   {
      cout<<big(4,5);
      cout<<big(5.6,3.4);
   }
   */

/*
  template <class X>  // X don't have any datatype but its just a placeholder
  X big(X a,X b)
  {
     if(a>b)
        return(a);

       else
         return(b);
  };
  int main()
   {
      cout<<big(4,5);
      cout<<big(5.6,3.4);
      getch();
   }
   */

// More than one palceholders

/*
template <class X,class Y>
X big(X a,Y b)
{
   if(a>b)
      return(a);

     else
       return(b);
};
int main()
 {
    cout<<big(4,5.4);
    getch();
 }
 */

// 20.2 ---->
/*
class ArrayList
{
   private:
     struct ControlBlock
     {
      int capacity;
      int *arr_ptr;
     };
     ControlBlock *s;

   public:
     ArrayList(int capacity)  //constructor
     {
       s = new ControlBlock;
       s->capacity=capacity;
       s->arr_ptr=new int [s->capacity];
     }

     void addElement(int index, int data)
     {
      if(index>=0 && index<s->capacity-1)
        s->arr_ptr[index]=data;
      else
        cout<<"\nArray index is not valid";
     }

      void viewElement(int index, int &data)    //data is reference vaiable
      {
        if(index>=0 && index<s->capacity-1)
          data = s->arr_ptr[index];

         else
           cout<<"\nArray index is not valid";
      }

      void viewList()
      {
         int i;
         for(i=0;i<s->capacity;i++)
           cout<<" "<<s->arr_ptr[i];
      }
};

int main()
{
  int data;
  ArrayList list1(4);
  list1.addElement(0,32);
  list1.viewElement90,data);
  cout<<"Value in the array is "<<data;
}
*/


/*  //To view the whole list

class ArrayList
{
   private:
     struct ControlBlock
     {
      int capacity;
      int *arr_ptr;
     };
     ControlBlock *s;

   public:
     ArrayList(int capacity)  //constructor
     {
       s = new ControlBlock;
       s->capacity=capacity;
       s->arr_ptr=new int [s->capacity];
     }

     void addElement(int index, int data)
     {
      if(index>=0 && index<s->capacity-1)
        s->arr_ptr[index]=data;
      else
        cout<<"\nArray index is not valid";
     }

      void viewElement(int index, int &data)    //data is reference vaiable
      {
        if(index>=0 && index<s->capacity-1)
          data = s->arr_ptr[index];

         else
           cout<<"\nArray index is not valid";
      }

      void viewList()
      {
         int i;
         for(i=0;i<s->capacity;i++)
           cout<<" "<<s->arr_ptr[i];
      }
};

int main()
{
  int data;
  ArrayList list1(4);
  list1.addElement(0,32);
  list1.addElement(1,41);
  list1.addElement(2,55);
  list1.viewList();
}
*/


//Adding template
/*
template<class X> class ArrayList
{
   private:
     struct ControlBlock
     {
      int capacity;
      X *arr_ptr;
     };
     ControlBlock *s;
   
   public:
     ArrayList(int capacity)  //constructor
     {
       s = new ControlBlock;
       s->capacity=capacity;
       s->arr_ptr=new X [s->capacity];
     }

     void addElement(int index, X data)
     {
      if(index>=0 && index<s->capacity-1)
        s->arr_ptr[index]=data;
      else 
        cout<<"\nArray index is not valid"; 
     }

      void viewElement(int index, X &data)    //data is reference vaiable
      {
        if(index>=0 && index<s->capacity-1)
          data = s->arr_ptr[index];
     
         else
           cout<<"\nArray index is not valid";
      }

      void viewList()
      {
         int i;
         for(i=0;i<s->capacity;i++)
           cout<<" "<<s->arr_ptr[i];
      }
};

int main()
{
  int data;
  ArrayList <float>list1(4);
  list1.addElement(0,3.2);
  list1.addElement(1,4.1);
  list1.addElement(2,5.5);
  list1.viewList();
}
*/

