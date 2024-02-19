#include <iostream>
#include <conio.h>
#include <cstring>
using namespace std;
#include <stdio.h>
int display()
{
  
}
int main()
{
int A[6]={5,4,10,1,6,2};
int temp;
int i,j;
for( i = 1; i < 6; i++)
{
   temp=A[i];
   j=j-1;
   while(j>=0 && A[j]>temp)
   {
        A[j+1]=A[j];
        j--;
   }
A[j+1]=temp;
}
}
