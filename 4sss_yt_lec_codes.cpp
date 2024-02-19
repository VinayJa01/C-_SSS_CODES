#include <iostream>
#include <conio.h>
#include <cstring>
using namespace std; // important line don't miss it

// 21---- File handling

// 21.1---->  //giving error
/*
#include<fstream>
//#include<iostream.h>
//#include<conio.h>
int main()
{
   ofstream fout;
   fout.open("myfile.dat");
   getch();
   fout<<"hello";
   getch();
   fout.close();
   getch();
}
*/

// 21.2---->

/*  //Blank space is not read by  >>
#include<fstream>
//#include<iostream.h>
//#include<conio.h>
void main()
{
    clrscr();
    ifstream fin;
    char ch;
    fin.open("myfile.dat");
    fin>>ch;
    while(!fin.eof())
    {
        cout<<ch;
        fin>>ch;
    }
    fin.close();
    getch();
}
*/

// so, modify the code so that the blank space is also read. Its a raw style of programming.

/*
#include<fstream>
//#include<iostream.h>
//#include<conio.h>
void main()
{
    clrscr();
    ifstream fin;
    char ch;
    fin.open("myfile.dat");
    ch=fin.get();
    while(!fin.eof())
    {
        cout<<ch;
        ch=fin.get();
    }
    fin.close();
    getch();
}
*/

// now Hello Students wiil be printed instead of HelloStudents in above code.

// 21.3---->
// NA

// tellg() and tellp() ----->

// For this code a text file is needed named abc.text in the cd.
// To read in file ---->
/*
#include<iostream>
#include<fstream> // header used in file handling
#include<conio.h>
using namespace std;
int main()
{
  ifstream fin;
  char ch;
  fin.open("abc.txt");
  int pos;
  pos = fin.tellg();
  cout<<pos;  // 0 printed

  fin>.ch;  //its used to read next char in file and store in ch var.
  pos = fin.tellg();
  cout<<pos;  // 1 printed

  fin>.ch;  //its used to read next char in file and store in ch var.
  pos = fin.tellg();
  cout<<pos;  // 2 printed
  getch();
}
*/

// To write in file ---->
/*
#include<iostream>
#include<fstream> // header used in file handling
#include<conio.h>
using namespace std;
int main()
{
    ofstream fout;
    char ch;
    fout.open("abc.txt", ios::app);
    int pos;
    pos = fout.tellp()  //From this we will come to know the starting position of put pointer.
    cout<<pos;
    fout<<"Vinay";
    pos = fout.tellp();
    cout<<pos;
    fout.close();
    getch();

}
*/

// seekg and seekp ---->
/*
#include<iostream>
#inclue<fstream>
#include<conio.h>
using namespace std;
int main()
{
    ifstream fin;
    fin.open("abc.txt");
    cout<<fin.tellg();
    cout<<"\n"<<(char)fin.get;
    cout<<(char)fin.get();
    cout<<"\n"<<fin.tellg();
    fin.seekg(6); //The ptr  will now point to 6 position char.
    cout<<"\n"<<fin.tellg();
    cout<<"\n"<<(char)fin.get()
    cout<<"\n"<<fin.tellg(); //ptr is pointing on 7 now
    fin.seekg(2,ios_base::cur);
    cout<<"\n"<<fin.tellg();  //ptr is pointing on 9 now

    fin.seekg(2,ios_base::beg);
    cout<<"\n"<<fin.tellg();  //ptr is pointing on 2 now

    //for end we use - sign
    fin.seekg(2,ios_base::end);
    cout<<"\n"<<fin.tellg();  //ptr is pointing on r now as 20 - 2 = 18

    getch();
}

*/

// 22-----> Initializers in C++

// Normal way of initializing (by making obj of dummy class we initialize a)
/*
class Dummy
{
    private:
      int a;
    public:
      Dummy()
      {a=5;}
};


// initializing by using initializer list

class Dummy
{
    private:
      int a,b;
    public:
      Dummy() : a(5),b(6)
      {}
};


// initializing ref var using initializer list

class Dummy
{
  private:
    int a,b;
    const int x;
    int &y;
  public:
    Dummy(int &n) : x(5), y(n)
    {}
};

void main()
{
    int n = 6;
    Dummy d1(m);  // m ki value nahi pass ki hai uska reference pass kiya hai
}

void fun()
{
    const int k = 5;

}
*/

// 23----> Deep Copy and sHALLOW Copy

// how to create a copy of an object

// Shallow copy eg:

/* class Dummy
 {
    private:
      int a, b;
    public:
      void setData(int x, int y)
      { a = x; b = y;}
      void showData()
      { cout<<"a="<< a <<"b"<< b; }
 };

 void main()
 {
    clrscr()
    Dummy d1;
    d1.setData(3,4);
    Dummy d2 = d1;  // d obj data copied in d2
    d2.showData();
    getch();
 }
*/

// Shallow copy eg with copy constructor:
/*class Dummy
{
   private:
     int a, b;
   public:
     void setData(int x, int y)
     { a = x; b = y;}
     void showData()
     { cout<<"a="<< a <<"b"<< b; }

};

void main()
{
   clrscr()
   Dummy d1;
   d1.setData(3,4);
   Dummy d2 = d1;  // d obj data copied in d2
   d2.showData();
   getch();
}
*/

// Deep copy eg:

class Dummy
{
private:
  int a, b;
  int *p;

public:
  Dummy()
  {
    p = new int;
  }
  void setData(int x, int y)
  {
    a = x;
    b = y;
  }
  void showData()
  {
    cout << "a=" << a << "b" << b;
  }
  Dummy(Dummy &d)
  {
    a = d.a;
    b = d.b;
    p = new int; // different memory block created, now obj d2 is not pointing to sam eloc as d1 is pointing.
    *p = *(d.p);
  }
};

void main()
{
  Dummy d1;
  d1.setData(3, 4, 5);
  Dummy d2 = d1;
  d2.showData();
  getch();
}

// 24 ----> Type conversion primitive to class type.
/*
class Complex
{
  private:
    int a,b;
  public:
    void setData(int x, int y)
      {a = x; b = y;}
    void showData()
      {cout<<"a"<<a<<"b"<<b;}
};

void main()
{
  clrcsr();
  Complex c1;
  int x = 5;
  c1 = x;  // error
  c1.showData();
  getch();
}
*/

// so a Constructor will resolve thos error of type conversion.

// conversion of primitive type to class type.

/*class Complex
{
  private:
    int a,b;
  public:
    Complex()  {}   // default constructor
    Complex (int k)
      { a = k; b = 0;}
    void setData(int x, int y)
      {a = x; b = y;}
    void showData()
      {cout<<"a"<<a<<"b"<<b;}
};

void main()
{
  clrcsr();
  Complex c1;
  int x = 5;
  c1 = x;  // c1.Constructor(x)
  c1.showData();
  getch();
}
*/

// Conversion of class type to primitive type

/*class Complex
{
 private:
   int a,b;
 public:
   void setData(int x, int y)
     {a = x; b = y;}
   void showData()
     {cout<<"a"<<a<<"b"<<b;}
   operator int()
   {
     return(a);
   }
};

void main()
{
 clrcsr();
 Complex c1;
 int x = 5;
 x = c1;   // x = c1.operator int()
 c1.showData();
 getch();
*/

// Conversion of one class type to another

// 1--> Conversion through Constructor

/*class Product
{
  private:
    int m, n;
  public:
    void setData(int x, int y)
      {m = x; n = y;}
    int getM()
      {return(m); }
    int getM()
      {return(n); }
};


class Item
{
  private:
    int a,b;
  public:
    void showData()
      {cout<<"\na="<<a<<"b="<<b; }
     Item() {}  // default constructor
     Item(Product p)
       {
        a = p.getM();
        b = p.getN();
       }
};

void main()
{
  clrcsr();
  Item i1;
  Product p1;
  p1.setData(3,4);
  i1 = p1;
  i1.showDta();
  getch();
}
*/

// 2--> Conversion using Casting Operator

// 27 ----> Exception Handling in C++

/*#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
  cout<<"Welcome";
  try{
    throw 10;
    cout<<"\n In Try";
  }
  catch(double e){
    cout<<"\nException no: "<<e;
  }
  catch(int e){
    cout<<"\nException no: "<<e;
  }
  cout<<"\nLast Line";
  getch()
}

*/

/*int main()
{
  i = 3;
  cout<<"Welcome";
  try{
    if(i = 1)
      throw 1;
    if(i = 2)
      throw "hello";
    if(i =3)
      throw 4.5;
    cout<<"\nIn Try";
  }

  catch(...){
    cout<<"\nException no: ";
  }
}*/

/*void fun()
{
  throw 10;
}

int main()
{
  int i = 3;
  cout<<"Welcome";
  try{
    if(i==3)
      fun();
     cout<<"\nIn Try";
  }

  catch(int e){
    cout<<"\nException no: "<<e;
  }

  cout<<"\nLast Line";
  getch();
}
*/

// 28 ----> Dynamic Constructor
/*
class A
{
  private:
    int a,b;
    int *p;
  public:
    A(){          // Constructor
         a =0; b=0;
         p = new int;
    }
    A(int x, int y){
      a = x;
      b = y;
      p = new int;
      *p = z;
    }
};

int main()
{
  A 01,o2,03(3,4,5);
  o1.
}
*/

// 29----> namespace in C++
// 29.1-->

// 29.2-->

/*#include<iostream>
using namespace std;
namespace MySpace{
int a;
int f1();
class A;
 {
 public;
   void fun1();
 };
}

int MySpace::f1() {
cout<<"Hello f1";
}

void MySpace::A::fun1(){
  cout<<"Hello fun1";
}

using namespace MySpace;

int main() {
 a = 5;
 f1();
 A obj;
 obj.fun1();
}
*/

// 30----> Virtual Destructor in C++

// Base class can point to the obj of derived class

/*#include<iostream>
using namespace std;
class A
{
  int a;
  public:
    void fun1() {};
};
class B: public A
{
  int b;
  public:
    void fun2()  {};
};

int fun();
int fun()
{
    A *p = new B;
    p->f1();  // correct
    p->f2(); // error
    delete p;  // p not destroyed, p pointing to the mem block that is destroyed here
}
int maim()
{
  fun();

}
*/

// To resolve this error we will use virtual keyword

/*#include<iostream>
using namespace std;
class A
{
  int a;
  public:
    void fun1() {};
    virtual ~A() ( )
};
class B: public A
{
  int b;
  public:
    void fun2()  {};
    ~B() ( )
};

int fun();
int fun()
{
    A *p = new B;
    p->f1();  // correct
    p->f2(); // error
    delete p;  // p not destroyed, p pointing to the mem block that is destroyed here
}
int maim()
{
  fun();

}
*/

// Nested Class---->

/*#include <iostream>
#include<string.h>
using namespace std;
class Student  
{
private:
    int rollno;
    char name[20];
  class Address // nested class // it is one of the private member of student class
  {
  private:
    int houseno;
    char street[20];
    char city[20];
    char state[20];
    char pincode[7];

  public:
    void setAddress(int h, char *s, char *c, char *st, char *p)
    {
      houseno = h;
      strcpy(street, s);
      strcpy(city, c);
      strcpy(state, st);
      strcpy(pincode, p);
    }
     
     void showAddress()
     {
         cout<<"\n"<<houseno<<endl;
         cout<<street<<" "<<city;
         cout<<" "<<pincode<<endl;
         cout<<state; 
     }
  };

  Address add;    // private member of student class so obj made inside Student class
public:
    void setRollno(int r){
       rollno = r;
     }

     viod setNmae(char *n){   
      strcpy(name, n);
     }

     void setAddress(int h, chae *c, char *st, char*p)
     {
        add.setAddress(h,s,c,st,p);
     }

     void show Student()
     {
        void<<"Student Data"<endl;
        cout<<rollno<<" ";
        cout<<name<<" ";
        add.showAddress()  
     }
};

int main()
{ 
  // if address class was a public member of Student class
  // Student::Address s1;

  Student s1;
  s1.setRollno(100);
  s1.setNmae("Vinay");
  s1.setAddress(200, "Hanuman Road", "RN", "415605", "MH");
  s1.showStudent();
}
*/

