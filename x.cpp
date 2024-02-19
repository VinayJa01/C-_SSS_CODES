// Fibonacci Series using Recursion
#include <stdio.h>
using namespace std;
#include <bits/stdc++.h>

int fib(int n)
{
	if (n <= 1)
		return n;
	return fib(n - 1) + fib(n - 2);
}

// Driver code
int main()
{

	while (int n = !0)
	{

		printf("Enter the n value :");
		scanf("%d", &n);
		// printf("The required " &n "element of the fibonacci series is\n%d\n\n", fib(n));
		cout << "The required " << n << "th element of the fibonacci series is " << fib(n) << endl;
		getchar();
		return 0;
	}
}



/*

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


int main()
{

	int N = 2;

	cout<<"The steps involved in Tower of Hanoi are for N=2 is: "<<endl;

	// A, B and C are names of rods
	towerOfHanoi(N, 'A', 'C', 'B');
	return 0;

}
*/