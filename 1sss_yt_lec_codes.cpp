#include <iostream>
#include <conio.h>
#include <cstring>
using namespace std;     // important line don't miss it

/*
int main()
{
    int x;
    cout<<"enter your no"<<endl;
    cin>>x;
    int s=x*x;
    cout<<"square of "<<x<<" is "<<s<<endl;

    return 0;
}
*/

// sum of two nos
/*
int sum(int, int);

int main()
{
    // int a=5,b=6;
    int a, b;
    while (1)
    {
        cout << "Enter two nos " << endl;
        cin >> a >> b;
        int s = sum(a, b);
        cout << "The sum is " << s << endl;
    }
}
int sum(int x, int y)
{
    return (x + y);
}
*/

// Default Arguments
/*
int add(int,int,int=0);

int main()
{
    int a,b;
    cout<<"Enter 2 nos\n";
    cin>>a>>b;
    cout<<"sum is "<<add(a,b)<<endl;
    int c;
    cout<<"Enter 3 nos\n";
    cin>>a>>b>>c;
    cout<<"sum is "<<add(a,b,c)<<endl;
    return 0;
}
int add(int x,int y,int z)
{
    return(x+y+z);
}
*/

// Function Overloading
/*
  float area(int);
  int area(int,int);

  int main()
 {
   int r;
   cout<<"Enter the radius"<<endl;
   cin>>r;
   float A=area(r);
   cout<<"Area of radius " << r << " is " << A<<endl;

   cout<<"Enter the length and breadth "<<endl;
   int a,b,c;
   cin>>a>>b;
   c=area(a,b);
   cout<<"Area of length " << a << " and breadth " << b << " is " << c <<endl;
 }

 float area(int R)
 {
    return(3.14*R*R);
 }

 int area(int L,int B)
 {
     return(L*B);
 }
 */

// Structures
// 6.2-declaration and initilization
/*
struct book
{
    int bookid;
    char title[10];
    float price;
};

int main()
{
    book b1 = {100, "SSS", 120.0};
    book b2,b3;
    b2.bookid=101;
    strcpy(b2.title,"cpp made easy");
/*
Both strcpy and strncpy are declared in the cstring header. You need to include it in order to use the functions:
    sp,----- #include <cstring> -----  is needed here.
*/

/*
    b2.price=200.0;

    b3=b2; 
}
*/


//6.3-user se data input lena hai 
//Normal method 
/*
struct book
{
    int bookid;
    char title[10];
    float price;
};

int main()
{
    book b1;
    cout<<"enter bookid,title,price";
    cin>>b1.bookid>>b1.title>>b1.price;
    cout<<b1.bookid<<b1.title<<b1.price;
}
*/


//Function banakar(fu jo input le aur struct return kare)
/*
struct book
{
    int bookid;
    char title[10];
    float price;
};

book input();
void display(book);

int main()
{
    book b1;
    b1=input(); //due to it return type of input is also book
    display(b1);
}

book input()  
{
    book b;
    cout<<"enter bookid,title,price";
    cin>>b.bookid>>b.title>>b.price;
    return(b);
}

void display(book b)
{
    cout<<" "<<b.bookid<< " "<<b.title<< "  "<<b.price;
}
*/

//6.4--Structure through OOP
/*
struct book
{
    int bookid;
    char title[20];
    float price;

    void input()
    {
        cout<<"Enter bookid,title,price";
        cin>>bookid>>title>>price;
    }
    
    void display()
    {
        cout << bookid  << title <<  price;
    }

};

int main()
{
  book b1;
  b1.input();   //ramesh.running();
  b1.display();
  
  return 0;
}
*/


//6.5-- Access specifiers in Structures
/*
struct book
{   
    private:    //All 3 became private
    int bookid;
    char title[20];
    float price;
    
    public:        //All 2 became public
    void input()
    {
        cout<<"Enter bookid,title,price";
        cin>>bookid>>title>>price;
        if(bookid<0)
         bookid=-bookid;
    }
    
    void display()
    {
        cout << bookid  << title <<  price;
    }

};

int main()
{
  book b1;
  b1.input();   //ramesh.running();
  b1.display();
  
  return 0;
}
*/


//7-Classes and Objects in cpp

//7.1--

//using struct
/*
struct Complex
{
  private:
  int a,b;

  public:
  void set_data(int x,int y)
  {a=x;b=y;} // here semicolons are important
  void show_data()
  {cout<<"a="<<a<<"b="<<b;}
};

int main()
{
    Complex c1;
    c1.set_data(3,4);
    c1.show_data();
    return 0;
}
*/

//using class
/*
class Complex
{
  private: //by default a and b are private here
  int a,b;

  public:
  void set_data(int x,int y)
  {a=x;b=y;} // here semicolons are important
  void show_data()
  {cout<<"a="<<a<<"b="<<b;}
};

int main()
{
    Complex c1;
    c1.set_data(3,4);
    c1.show_data();
    return 0;
}
*/

//functions defined outside
/*
class Complex
{
  private: //by default a and b are private here
  int a,b;

  public:
  void set_data(int ,int );
  
  void show_data()
  {cout<<"a="<<a<<"b="<<b;}
};

void Complex :: set_data(int x,int y)  //function inline babana padta hai
  {a=x;b=y;} 

int main()
{
    Complex c1;
    c1.set_data(3,4);
    c1.show_data();
    return 0;
}
*/


//7.2--Making a special funcion in a class
       // Function call by passing object and returning object


 // error code for add of complex no just for expl 
 /*     
class Complex
{
  private: //by default a and b are private here
  int a,b;

  public:
  void set_data(int x,int y)
  {a=x;b=y;} // here semicolons are important
  void show_data()
  {cout<<"a="<<a<<"b="<<b;}
};

int main()
{
    Complex c1,c2,c3;
    c1.set_data(3,4);
    c1.set_data(5,6);
    c3=c1+c2;
    c3.show_data();
    return 0;
}
*/

//Addition of Complex Numbers
/*
class Complex
{
  private: //by default a and b are private here
  int a,b;

  public:
  void set_data(int x,int y)
  {a=x;b=y;} // here semicolons are important
  void show_data()
  {cout<<"a="<<a<<"b="<<b;}

  Complex add(Complex c)
  {
    Complex temp;
    // we want to do c1.a + c2.a  and store the result in temp (temp ke andar bhi a abd b honge)
     
     temp.a=a+c.a;
     temp.b=b+c.b;
     return(temp);
     
  }
};

int main()
{
    Complex c1,c2,c3;
    c1.set_data(3,4);
    c1.set_data(5,6);

   // c3=c1+c2;  not possible so
    
    c3=c1.add(c2);
    
    c3.show_data();
    return 0;
}
*/

// Simple method of add of complex nos--

/*
struct complex
{
    
    int real;
    int img;
};


main()
{
    struct complex a,b,c;
    cout<<"ENTER 1 cn"<<endl;
    cin>>a.real>>a.img;
    cout<<"ENTER 2 cn"<<endl;
    cin>>b.real>>b.img;
    c.real=a.real+b.real;
    c.img=a.img+b.img;
    cout<<c.real<<" "<<c.img<<endl;

}
*/

/*
//8.2--- how to access roi 

//1.when roi was not private
class Account
{
    private:
    int balance;  //instance member var
    static float roi; //static member var/class var --It dosent't depend upon object.
    public:
    void setBalance(int b)
    {
        balance=b;
    }
   
};
float Account :: roi=3.5f;  ////Static member gets memory when it defined outside class by using label.
//By default value is Zero.By label static variable gets memory in ram and it does not depend
// on the object so it is called as Class variable 

int  main()  //Here roi(Static) is not in object it created when without making object of class.
{
    Account a1,a2;
  //  Account::roi=4.5;
}



//2.when roi was  private
class Account
{
    private:
    int balance;  //instance member var
    static float roi; //static member var/class var --It dosent't depend upon object.
    public:
    void setBalance(int b)
    {
        balance=b;
    }
    static void setRoi(float r)  //Static Member function
    {
         roi=r;
    }
};
float Account :: roi=3.5f;  ////Static member gets memory when it defined outside class by using label.
//By default value is Zero.By label static variable gets memory in ram and it does not depend
// on the object so it is called as Class variable 

int  main()  //Here roi(Static) is not in object it created when without making object of class.
{
    Account a1,a2;
    a1.setRoi(4.5f);
    Account::setRoi(4.5);   //when no object of class has been created
}
*/


//9.1-Constructor 

//one object-

/*
class Complex
{
    private:
    int a,b;
    public:
    Complex()
    {
        cout<<"Hello Constructor";
    }
};

int main()
{
    Complex c1;
    return 0;
}
*/

//many objects--
/*
class Complex
{
    private:
    int a,b;
    public:
    Complex()
    {
        cout<<"Hello Constructor\n";
    }
};

int main()
{
    Complex c1,c2,c3;
    return 0;
}
*/


//constructor overloading-
/*class Complex
{
    private:
    int a,b;
    public:
    Complex(int x,int y)
    {
        a=x;b=y;
    }

     Complex(int k)
    {
        a=k;
    }

     Complex()
    {
        a=0;b=0;
    }
};

int main()
{
    Complex c1(3,4),c2(5),c3;

    //we can also write
    Complex c1=Complex(3,4),c2=5,c3,c4(3,8);
    return 0;
}
*/


//9.3--how to make copy constructor
/*
class Complex
{
    private:
    int a,b;
    public:
    Complex(int x,int y)  //parameterised constructor
    {
        a=x; b=y;
    }
    Complex(int k)  //parameterised constructor
    {
        a=k;
    }
    Complex()  //default constructor
    {

    }
    Complex(Complex &c)
    {
        a=c.a;
        b=c.b;
    }     
};

int  main()
{
    Complex c1(3,4),c2,c3(5);
    Complex c4(c1);  // c1 ka value c4 main copy ho gaya

}
*/