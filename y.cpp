// Fibonacci Series using Recursion
#include <stdio.h>

#include <bits/stdc++.h>

//int fib(int n)
//{
	//if (n <= 1)
	//	return n;
	//return fib(n - 1) + fib(n - 2);
//}
#include<stdio.h>    
 void print(int a[], int n) //function to print array elements  
    {  
    int i;  
    for(i = 0; i < n; i++)    
    {    
        printf("%d ",a[i]);    
    }        
    }  
 void bubble(int a[], int n) // function to implement bubble sort  
 {  
   int i, j, temp;  
   for(i = 0; i < n; i++)    
    {    
      for(j = i+1; j < n; j++)    
        {    
            if(a[j] < a[i])    
            {    
                temp = a[i];    
                a[i] = a[j];    
                a[j] = temp;     
            }     
        }     
    }     
 }  
    int main ()    
{    
    int i, j,temp;     
    int a[5] = {10,40,20,1,0};     
    int n = sizeof(a)/sizeof(a[0]);   
    printf("Before sorting array elements are - \n");  
    print(a, n);  
    bubble(a, n);  
    printf("\nAfter sorting array elements are - \n");    
    print(a, n);  
}    



/*

// C++ recursive function to

using namespace std;

void towerOfHanoi(int n, char from_rod, char to_rod,
				char aux_rod)
{
	
	if (n == 0) {
		return;
	}
	towerOfHanoi(n - 1, from_rod, aux_rod, to_rod);
	
	cout << "Move disk " << n << " from rod " << from_rod
		<< " to rod " << to_rod << endl;
	towerOfHanoi(n - 1, aux_rod, to_rod, from_rod);
}

// Driver code
int main()
{

     
     
	//int n = 9;
	//printf("The required element of the fibonacci series is\n%d\n\n", fib(n));
	//getchar();
	
     



	int N = 20;
    
	cout<<"The steps involved in Tower of Hanoi for N=0 are 20"<<endl;
	
	// A, B and C are names of rods
	towerOfHanoi(N, 'A', 'C', 'B');
	return 0;
}

*/