#include <iostream>
#include <conio.h>
#include <cstring>
using namespace std;     // important line don't miss it

//10--Destructor
/*
class Complex
{
    private: 
    int a,b;
    public:
    ~Complex()
    {
        cout<<"destructor";
    }
    
};

int fun()
{
    Complex obj;  
}

int main()
{
    fun();
}
*/

//11--Oprator Overloading 
/*
class Complex
{
    private:
    int a,b;
    public:
    int setdata(int x,int y)
    {
        a=x;y=b;
    }
    int showdata()
    {
        cout<<"a="<<a<<"b="<<b;
    }
    Complex add(Complex c)
    {
        Complex temp;
        temp.a=a+c.a;
        temp.b=b+c.b;
        return(temp);
    }
};

int main()
{
    Complex c1,c2,c3;
    c1.setdata(3,4);
    c2.setdata(5,6);
    c3=c1.add(c2);
    c3.showdata();
}
*/


// another way of calling
/*
class Complex
{
    private:
    int a,b;
    public:
    int setdata(int x,int y)
    {
        a=x;y=b;
    }
    int showdata()
    {
        cout<<"a="<<a<<"b="<<b;
    }
    Complex operator +(Complex c)
    {
        Complex temp;
        temp.a=a+c.a;
        temp.b=b+c.b;
        return(temp);
    }
};

int main()
{
    Complex c1,c2,c3;
    c1.setdata(3,4);
    c2.setdata(5,6);
    c3=c1.operator +(c2);
    c3.showdata();
}
*/

//another way of calling
/*
class Complex
{
    private:
    int a,b;
    public:
    int setdata(int x,int y)
    {
        a=x;y=b;
    }
    int showdata()
    {
        cout<<"a="<<a<<"b="<<b;
    }
    Complex operator +(Complex c)
    {
        Complex temp;
        temp.a=a+c.a;
        temp.b=b+c.b;
        return(temp);
    }
};

int main()
{
    Complex c1,c2,c3;
    c1.setdata(3,4);
    c2.setdata(5,6);
    c3=c1+c2;
    c3.showdata();
}
*/
 

 //11.2 - unary operator overloading
/*
 class Complex
 {
    private:
    int a,b;
    public:
    int setdata(int x,int y)
    {
        a=x; b=y;
    }
    int showdata()
    {
        cout<<"a="<<a<<"b="<<b<<endl;
    }
    Complex operator-()
    {   
         Complex temp;
         temp.a=-a;
         temp.b=-b;
         return (temp);
    }
 }; 
 
 int main()
 {
    Complex c1,c2;
    c1.setdata(3,4);
    //c2=-c1; 
    //or
    //c2=c1.operator-();
    c2.showdata();
    return 0;
 }
 */

//11.3-overloading of unary operator
/*class integer
{
    private:
    int x;
    public:
    int setdata(int a)
    {
         x=a;
    }
    int showdata()
    {
        cout<<"x="<<x;
    }
    integer operator++()   //preincrement
    {
        integer i;
        i.x=++x;
        return (i);
    }
    integer operator++(int)     //postincrement
    {
        integer i;
        i.x=x++;
    }
};

int main()
{
    integer i1,i2;
    i1.setdata(3);
    i1.showdata();
    //i2=++i1;       //i2=i1.operator++();
    //i2=i1++;       //i2=i1.operator++();
    i1.showdata();
    i2.showdata();
}
*/

//12.1--friend function
 /*
class Complex
{
    private:
    int a,b;
    public:
    int setdata(int x,int y)
    {
        x=a;y=b;
    }
    int showdata()
    {
        cout<<"a="<<a<<"b=="<<b<<endl;
    }
    friend int fun(Complex);
};

int fun(Complex c) 
{
    cout<<"Sum is"<<c.a+c.b;
}
int main()
{
    Complex c1,c2,c3;
    //c1.setdata(3,4);
    fun(c1);
    return 0;
}

*/

//12.2--contd
/*
class B;
class A
{
    private :
    int a;
    public:
    int setdata(int x)
    {
        a=x;
    }
    friend int fun(A,B);
};

class B
{
    private :
    int b;
    public:
    int setdata(int y)
    {
        b=y;
    }
    friend int fun(A,B);
};

int fun(A o1,B o2)
{
   cout<<"Sum is "<<o1.a+o2.b;
}

int main()
{
    A obj1;
    B obj2;
    obj1.setdata(2);
    obj2.setdata(3);
    fun (obj1,obj2);
    return 0;
}
*/


//12.3-- overloading of an operator as a friend function
 
 //wkt
/*
 class Complex
{
    private:
    int a,b;
    public:
    int setdata(int x,int y)
    {
        a=x;y=b;
    }
    int showdata()
    {
        cout<<"a="<<a<<"b="<<b;
    }
    Complex operator +(Complex c)
    {
        Complex temp;
        temp.a=a+c.a;
        temp.b=b+c.b;
        return(temp);
    }
};

int main()
{
    Complex c1,c2,c3;
    c1.setdata(3,4);
    c2.setdata(5,6);
    c3=c1+c2;      //c3==c1.operator+(c2)
    c3.showdata();
}
*/

// but now making + as a friend functon

/*class Complex
{
    private:
    int a,b;
    public:
    int setdata(int x,int y)
    {
        a=x;y=b;
    }
    int showdata()
    {
        cout<<"a="<<a<<"b="<<b;
    }
    friend Complex operator +(Complex,Complex);
};

Complex operator+(Complex X , Complex Y)
 {
    Complex temp;
    temp.a=X.a+Y.a;
    temp.b=X.b+Y.b;
    return (temp);
 }
int main()
{
    Complex c1,c2,c3;
    c1.setdata(3,4);
    c2.setdata(5,6);
    c3=c1+c2;      //c3=operator+(c1,c2)
    c3.showdata();
}
*/

//12.4--overloading of a unary function as a friend funtion

//wkt--
/*
class Complex
 {
    private:
    int a,b;
    public:
    int setdata(int x,int y)
    {
        a=x; b=y;
    }
    int showdata()
    {
        cout<<"a="<<a<<"b="<<b<<endl;
    }
    friend Complex operator-(Complex);
}; 
 
 Complex operator-(Complex X)
 {
    Complex temp;
    temp.a=-X.a;
    temp.b=-X.b;
    return (temp);
 }

  int main()
 {
    Complex c1,c2;
    c1.setdata(3,4);
    c2=-c1;     //c2=operator-(c1);
    c1.showdata();
    c2.showdata();
    return 0;
 }

*/

//12.5-- overloading of insertion and extraction operator overloading by using a friend function
/*
class Complex
 {
    private:
    int a,b;
    public:
    int setdata(int x,int y)
    {
        a=x; b=y;
    }
    int showdata()
    {
        cout<<"a="<<a<<"b="<<b<<endl;
    }
    friend ostream& operator<<(ostream&,Complex);
    friend istream& operator<<(istream&,Complex&);

 };

ostream& operator<<(ostream &dout, Complex C)
{
    cout<<"a="<<C.a<<"b="<<C.b;
    return (dout);
}  
istream& operator<<(istream &din, Complex &C)
{
    cin>>C.a>>C.b;
    return (din);
}
 int main()
 {
    Complex c1;
    cout<<"Enter a complex no:\n";
    cin>>c1;
    cout<<"You entered:\n";
    cout<<c1;        //operator<<(cout,c1);
    return 0;
 }
 */


//12.6--

/*
class A
{
    public:
    int fun()
    {...}
    int  foo()
    {...}
    .
    .
    .
    .
};

class B
{
  friend int A :: fun();
  friend int A :: foo();
  
  friend class A;   //for all functions of class A
};
*/


//13--Inheritance--
/*
class A
{
    private:
    int a;
    protected:
    void setvalue(int k)
    {a=k;}
};
class B : public A
{
  public:
  int setdata(int x)
  {setvalue(x);}
};
int main()
{
    B obj;
   // obj.setvalue(4);   //not accesible
    obj.setdata(4);
    
    return 0;
}
*/


//13.3--Is-a relationship

//Example:
/*
class Car
{
    private:
    int gear;
    public:
    void incrementgear()
    {
        if(gear<5)
        gear++;
    }
};

class Sportscar : public Car
{
  
};
*/

//Example:
/*
class Array
{
    private:
    int a[10];
    public:
    int insert(int index , int value)
    {a[index]=value;}

};

//class Stack : public Array   //wrong
 class Stack : private Array
{
    int top;
    public:
    void push(int value)
    {
        insert(top,value);
    }
};
int main()
{
    Stack s1;
    s1.push(34);
    //s1.insert(2,56);
}
*/


//14--constructor and destructor in inheritance

//constructor (no argu passed)--
/*
class A
{
  int a;
  public:
  A(int k)
  {
    a=k;
  }
};

class B:public A
{
    public:
    B():A(5)
    {}
};

int main()
{
    B obj;
}
*/

//constructor (argu passed)--
/*
class A
{
  int a;
  public:
  A(int k)
  {
    a=k;
  }
};

class B:public A
{   
    int b;
    public:
    B(int x , int y):A(x)
    {b=y;}
};

int main()
{
    B obj(2,3);
}
*/

//destructor--

