#include <iostream>
#include <conio.h>
#include <cstring>
using namespace std;     // important line don't miss it

// at:
/*#include<iostream>
#include<array>
using namespace std;
int main()
{
    array <int, 5> data_array = {11, 22, 33, 44, 55};
    cout<<data_array.at(1);
}
*/


// [] operator:
/*
include<iostream>
#include<array>
using namespace std;
int main()
{
    array <int, 5> data_array = {11, 22, 33, 44, 55};
    cout<<data_array.at[1];
}
*/


// front() and back()

/*#include<iostream>
#include<array>
using namespace std;
int main()
{
    array <int, 5> data_array = {11, 22, 33, 44, 55};
    cout<<data_array.front();
}
*/

// lly for back
/*#include<iostream>
#include<array>
using namespace std;
int main()
{
    array <int, 7> data_array = {11, 22, 33, 44, 55};
    cout<<data_array.back(); // 0 is returned as array elements are upto 4 index only.
}*/

// fill()
/*#include<iostream>
#include<array>
using namespace std;
int main()
{
    array <int, 7> data_array = {11, 22, 33, 44, 55};
    data_array.fill(10);  // irrespective of prev array
    for(int i = 0; i<=4; i++)
    {
        cout<<data_array[i];
    }
}*/


// swap()

/*#include<iostream>
#include<array>
using namespace std;
int main()
{
    array <int, 5> data_array1 = {11, 22, 33, 44, 55};
    array <int, 5> data_array2 = {1, 2, 3, 4, 5};
    data_array1.swap(data_array2);

    for(int i = 0; i<=4; i++)
    {
        cout<<data_array1[i];
    }
    
    cout<<endl;

    for(int i = 0; i<=4; i++)
    {
        cout<<data_array2[i];
    }
}    
*/


// size()

/*#include<iostream>
#include<array>
using namespace std;
int main()
{
    array <int, 5> data_array = {11, 22, 33, 44, 55};
    cout<<"Size is "<<data_array.size();
}
*/


// pair
// giving error
/*
#include<iostream>
using namespace std;
class Student
{
    private:
      string name;
      int age;
    public:
      void setStudent(string s, int a)
      {
        name = s;  age = a;
      }
      void showStudent()
      {
        cout<<"\nName: "<<name;
        cout<<"\nAge: "<<age;
      }
};

int main()
{   
    pair <string, int>p1;
    pair <string, string>p2;
    pair <string, float>p3;
    pair <int, student>p4;

    p1 = make_pair("Vinay", 19);
    p2 = make_pair("India", "New Delhi");
    p3 = make_pair("Drilling C++", 345.5f);
    student s1;
    s1.setStudent("Vinay", 19);
    p4 = make_pair(1, s1);
    
    cout<<"\nPair 1";
    cout<<"\n"<<p1.first<<" "<<p1.second;

    cout<<"\nPair 4";
    cout<<"\n"<<p4.first<<" ";
    student s2 = p4.second;
    s2.showStudent();
}
*/
   

// tuple

/*#include<iostream>
#include<tuple>  
using namespace std;
int main()
{
    tuple <string, int, int>t1;
    t1 = make_tuple("Vinay", 15, 2);
    cout<<get<0>(t1)<<" ";
    cout<<get<1>(t1)<<' ';
    cout<<get<2>(t1)<<" ";
}
*/


// Vector class in  C++

 /*#include<iostream>
 #include<vector>
 using namespace std;
 int main()
 {
    vector <int> v1;  // It will create a blank vector 
    
    vector <int> v1 {10,20,30}; // Inatialize right after creation.

    vector <char> v2(4);

    vector <int> v3(5,10);

    vector <string> v4(3, "hello");
    
    // Subscript Operator
    
    vector <int> v5 {10,20,30,40,50}; // Inatialize right after creation.
    for (int i=0; i<=4; i++)
      cout<<v5[i]<<endl;

    // push_back()

    vector <int> v1;
    cout<<"Current capacity is "<<v1.capacity()<<endl;  // It goves capacity of the vector
    v1.push_back(10);
    cout<<"Current capacity is "<<v1.capacity()<<endl;
    v1.push_back(20);
    cout<<"Current capacity is "<<v1.capacity()<<endl;
    v1.push_back(30);
    cout<<"Current capacity is "<<v1.capacity()<<endl;
    

    // pop_back

    vector <int> v1;
    cout<<"Current Capacity is "<<v1.capacity()<<endl;
    for(int i=0; i<=9; i++)
      v1.push_back(10*(i+1));
    cout<<"Current Capacity is "<<v1.capacity()<<endl;
    v1.pop_back();
    cout<<"after pop\n";
    cout<<"Current Capacity is "<<v1.capacity()<<endl;
    v1.pop_back();
    cout<<"Current Capacity is "<<v1.capacity()<<endl;
    v1.pop_back();
    cout<<"Current Capacity is "<<v1.capacity()<<endl;


    // size()

    cout<<"Current Capacity is "<<v1.capacity()<<endl;
    cout<<"The total number of elements are "<<v1.size()<<endl;
    
    vector <int> v1;
    cout<<"Current Capacity is "<<v1.capacity()<<endl;
    for(int i=0; i<=9; i++)
      v1.push_back(10*(i+1));
    cout<<"Current Capacity is "<<v1.capacity()<<endl;
    for (int i=0; i<v1.size(); i++)
      cout<<endl<<v1[i];
    

    // clear()

    v1.clear();
    cout<<"Current Capacity is "<<v1.capacity()<<endl;
    cout<<"Total elements"<<v1.size()<<endl;
    
    // at()

    cout<<"Value at index 0 is"<<v1.at(0);


    // front and back()
    
    cout<<"\nFirst value is "<<v1.front();
    cout<<"\nLast value is "<<v1.back();

    // some glimpse of iterator 

    vector <int> v1;
    cout<<"Current Capacity is "<<v1.capacity()<<endl;
    for(int i=0; i<=9; i++)
      v1.push_back(10*(i+1));
    cout<<"Current Capacity is "<<v1.capacity()<<endl;
    
    for (int i=0; i<v1.size(); i++)
      cout<<endl<<v1[i];
    cout<<"\n\n";
      vector <int> :: iterator it = v1.begin();
        v1.insert(it+0,35);  // it will insert at start only
        v1.insert(it+3,35);  // it will insert after 30 and before 40 only ig

    for(int i=0; i<v1.size(); i++)
      cout<<endl<<v1[i];
}
*/


// List class in C++

// creating obj of list class

/*#include<iostream>
#include<list>
using namespace std;

int main()
{
    list <int> l1{11, 22, 33};
    list <string> l2{"India", "Maharashtra", "Ratnagiri"};
    
    list <string>::iterator p = 12.begin();

    while(p! = l2.end())
    {
       cout<<*p<<" ";
       p++;
    }
    
    // size()
    cout<<"Total values in the list are "<<l2.size();

    // push_back - inserting value at the back of list
    // push_front - inserting value in front of list

     
int main()
{
    list <int> l1{11, 22, 33};
    list <string> l2{"India", "Maharashtra", "Ratnagiri"};
    
    l2.push_back("Mumbai");
    l2.push_front("Pune");
    
    list <string>::iterator p = 12.begin();

    while(p! = l2.end())
    {
       cout<<*p<<" ";
       p++;
    }

    cout<<"Total values in the list are "<<l2.size();


    // pop_back

    int main()
    {
        list <int> l1{11, 22, 33};
     
        list <int> :: iterator p = l1.begin();
        
        while(p!=l1.end())
        {
            cout<<*p<<" ";
            p++;
        }
        
        cout<<endl;

        l1.pop_back();

        list <int> :: iterator q = l1.begin();
        
        while(p!=l1.end())
        {
            cout<<*q<<" ";
            p++;
        }

       // pop_front - similar to pop_back

        // sort

        int main()
        {
            list <int> l1{55, 22, 77, 44, 66, 99, 88, 11};

            list <int> :: iterator p = l1.begin();

            while(p!=l1.end())
            {
               cout<<*p<<" ";
               p++;
            }

            cout<<endl;

            l1.sort();
            list <int> :: iterator 1= l1.begin();

            while(q! = l1.end())
            {
                cout<<*q<<" ";
                q++;
            }


            // reverse 

            
        int main()
        {
            list <int> l1{55, 22, 77, 44, 66, 99, 88, 11};

            list <int> :: iterator p = l1.begin();

            while(p!=l1.end())
            {
               cout<<*p<<" ";
               p++;
            }

            cout<<endl;

            l1.reverse();
            list <int> :: iterator 1= l1.begin();

            while(q! = l1.end())
            {
                cout<<*q<<" ";
                q++;
            }

            // remove - to remove a particular element

            
        int main()
        {
            list <int> l1{55, 22, 77, 44, 66, 99, 88, 11};

            list <int> :: iterator p = l1.begin();

            while(p!=l1.end())
            {
               cout<<*p<<" ";
               p++;
            }

            cout<<endl;

            l1.remove(44);   // if 44 is written twice it will be removed twice
            list <int> :: iterator 1= l1.begin();

            while(q! = l1.end())
            {
                cout<<*q<<" ";
                q++;
            }

            // clear()

            
        int main()
        {
            list <int> l1{55, 22, 77, 44, 66, 99, 88, 11};

            list <int> :: iterator p = l1.begin();

            while(p!=l1.end())
            {
               cout<<*p<<" ";
               p++;
            }

            cout<<endl;

            l1.clear();
            list <int> :: iterator 1= l1.begin();

            while(q! = l1.end())
            {
                cout<<*q<<" ";
                q++;
            }
        }
    }
      
}
*/


//  Map Class in C++'

/*#include<map>
using namespace std;


// Method 1: make obj and then assign value

int main()
{
    map <int, string> customer;

    customer[100] = "Gajendra";
    customer[123] = "Dilip";
    customer[145] = "Aditya";
    customer[171] = "Shahid";
    customer[200]= "Rajesh";

}
*/

// Method 2: make obj and that time only assign the values in it

/*#include<map>
using namespace std;

int main()
{
    map <int,string> cust
    {
        {100, "Gajendra"}, {123, "Dilip"}, {145, "Aditya"}, {171, "Shahid"}, {200, "Rajesh"}
    };
}*/


// functions in map class:


/*#include<map>
using namespace std;

int main()
{
    map <int,string> cust
    {
        {100, "Gajendra"}, {123, "Dilip"}, {145, "Aditya"}, {171, "Shahid"}, {200, "Rajesh"}
    };
 
 // 1: []  to print values   
    cout<<customer[100]<<endl;  //Gajendra
    cout<<customer[101]<<endl;  // invalid index so no value will be printed
    
  // 2: printing values through iterator
    // here iterator will point to the map type value in which pair is int and string
    // p->first will print index 
    // p->second will print the value

    map <int, string> :: iterator p = customer.begin();
    while(p!=customer.end())
    {
        cout<<p->second<<endl;
        p++;
    }
    
    // 3: at()

    cout<<customer.at(145);

    // 4: size()

    cout<<customer.size();

    //5: empty()

    cout<<customer.empty();

    // 6: inseert()    - we have to make a pair to insert a value with a given index
     
    customer.insert(pair<int, string> (205,"Saurabh"));

    // 7: clear()   - to clear all the data
}
*/


// 40----> String class in C++


/*#include<iostream>
 using namespace sdd;

int main()
{
    // C++ operators cannot be applied on arrays
    char s1 [10] = "Hello";
    // wrong    s1 = "Students";  
    //instead of this use 
    strcpy(s1, "Students");
    
    char s2[20];
    // wrong    s2 = s1;  
    //instead use   
    strcpy(s2, s1);
   
    // wrong s2 > s1;  
    char s3[30];
    int i = strcmp(s2,s1);

    // wrong s3 = s1 + s2;
    strcpy(s3, strcat(s1,s2));
    

}
*/


// cin returns only single word as it ignores after gap

/*#include<iostream>
#include<string>
using namespace std;
int main()
{
    cout<<"Enter your name";
    string s1;
    cin>>s1;
    cout<<"Hello "<<s1;
}
*/


// Mixed Operations
/*#include<iostream>
#include<string>
using namespace std;

int main()
{
    string s1 = "Hello";
    char str[] = "Students";
    string s2;
    s2 = s1 + A;
    cout<<s2;
}*/


// Methods in string class

/*#include<iostream>
#include<string>
using namespace std;

int main()
{

  // assign()
  string s1;
  s1.assign("Hello");
  cout<<s1;


  // appemd()

   string s1 = "Hello";
   s1.append(" Students");
   cout<<s1;

   // insert()   - if we insert at 2 then we get taht thing from 2 index 
   
   string s1 = "Hello";
   s1.insert(2, "123");
   cout<<s1;

   // replace()
   
   string s1 = "Hello";
   s1.replace(2, 2, "A");   //HeAo 

   // erase()

   s1.erase();   // Hello will be erased

   
   // find()
   
   string s1 = "Hello online online students";
   int i = s1.find("online");
   cout<< i;   //6
   
   // rfind()

   string s1 = "Hello online online students";
   int i = s1.rfind("online");
   cout<< i;    //13
   
    
    // compare
    
    string s1 = "Amar";
    string s2 = "Amey";
    int i = s1.compare(s2); // returns 0, -1, 1
    cout<< i;   // -1 string not same
}*/    

    // c_str()
    
    /*#include<iostream>
    #include<string>
    #include<string.h>
    using namespace std;

    int main
    {
       cout<<str;


       // size 

       string s1 = "Hello";
       int i = s1.size();
       cout<< i;

    }
*/